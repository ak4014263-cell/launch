package com.example.launcher

import android.content.Context
import android.content.pm.ApplicationInfo
import android.content.pm.PackageManager
import android.os.SystemClock
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.getValue
import androidx.compose.runtime.setValue
import java.util.*

/**
 * App Tracer SDK - Tracks app usage statistics and provides insights
 */
class AppTracerSDK private constructor(private val context: Context) {
    
    companion object {
        @Volatile
        private var INSTANCE: AppTracerSDK? = null
        
        fun getInstance(context: Context): AppTracerSDK {
            return INSTANCE ?: synchronized(this) {
                INSTANCE ?: AppTracerSDK(context.applicationContext).also { INSTANCE = it }
            }
        }
    }
    
    // Usage tracking data
    private val appUsageMap = mutableMapOf<String, AppUsageData>()
    private val dailyStats = mutableMapOf<String, DailyStats>()
    
    // Current session tracking
    private var currentApp: String? = null
    private var sessionStartTime: Long = 0
    private var totalClicksToday by mutableStateOf(0)
    private var totalTimeToday by mutableStateOf(0L)
    
    data class AppUsageData(
        val packageName: String,
        val appName: String,
        var totalTime: Long = 0,
        var clickCount: Int = 0,
        var lastUsed: Long = System.currentTimeMillis(),
        var sessions: Int = 0
    )
    
    data class DailyStats(
        val date: String,
        var totalTime: Long = 0,
        var totalClicks: Int = 0,
        var topApp: String = "",
        var topAppTime: Long = 0,
        var dailyGoal: Long = 4 * 60 * 60 * 1000 // 4 hours in milliseconds
    )
    
    data class UsageInsight(
        val totalTimeToday: Long,
        val totalClicksToday: Int,
        val topApp: String,
        val topAppTime: Long,
        val dailyGoal: Long = 4 * 60 * 60 * 1000, // 4 hours in milliseconds
        val goalProgress: Float
    )
    
    /**
     * Initialize the App Tracer SDK
     */
    fun initialize() {
        loadUsageData()
        startSessionTracking()
    }
    
    /**
     * Track app launch
     */
    fun trackAppLaunch(packageName: String) {
        val appName = getAppName(packageName)
        
        // End previous session if exists
        currentApp?.let { endSession(it) }
        
        // Start new session
        currentApp = packageName
        sessionStartTime = System.currentTimeMillis()
        
        // Update app usage data
        val usageData = appUsageMap.getOrPut(packageName) {
            AppUsageData(packageName, appName)
        }
        usageData.lastUsed = System.currentTimeMillis()
        usageData.sessions++
        
        // Update daily stats
        updateDailyStats()
    }
    
    /**
     * Track user interaction (click, tap, etc.)
     */
    fun trackInteraction() {
        totalClicksToday++
        currentApp?.let { packageName ->
            appUsageMap[packageName]?.clickCount = (appUsageMap[packageName]?.clickCount ?: 0) + 1
        }
        updateDailyStats()
    }
    
    /**
     * End current session
     */
    fun endSession(packageName: String) {
        if (currentApp == packageName && sessionStartTime > 0) {
            val sessionDuration = System.currentTimeMillis() - sessionStartTime
            val usageData = appUsageMap[packageName]
            if (usageData != null) {
                usageData.totalTime += sessionDuration
                totalTimeToday += sessionDuration
            }
            currentApp = null
            sessionStartTime = 0
        }
    }
    
    /**
     * Get usage insights for today
     */
    fun getTodayInsights(): UsageInsight {
        val today = getCurrentDate()
        val todayStats = dailyStats[today] ?: DailyStats(today)
        
        val topApp = appUsageMap.maxByOrNull { it.value.totalTime }?.value?.appName ?: "None"
        val topAppTime = appUsageMap.maxByOrNull { it.value.totalTime }?.value?.totalTime ?: 0L
        
        val goalProgress = if (todayStats.dailyGoal > 0) {
            (todayStats.totalTime.toFloat() / todayStats.dailyGoal).coerceAtMost(1f)
        } else 0f
        
        return UsageInsight(
            totalTimeToday = todayStats.totalTime,
            totalClicksToday = todayStats.totalClicks,
            topApp = topApp,
            topAppTime = topAppTime,
            goalProgress = goalProgress
        )
    }
    
    /**
     * Get weekly usage data
     */
    fun getWeeklyData(): List<DailyStats> {
        val calendar = Calendar.getInstance()
        val weeklyData = mutableListOf<DailyStats>()
        
        repeat(7) {
            val date = getDateString(calendar.time)
            weeklyData.add(dailyStats[date] ?: DailyStats(date))
            calendar.add(Calendar.DAY_OF_MONTH, -1)
        }
        
        return weeklyData.reversed()
    }
    
    /**
     * Get top apps by usage
     */
    fun getTopApps(limit: Int = 5): List<AppUsageData> {
        return appUsageMap.values
            .sortedByDescending { it.totalTime }
            .take(limit)
    }
    
    /**
     * Get app usage by category
     */
    fun getAppsByCategory(): Map<String, List<AppUsageData>> {
        return appUsageMap.values.groupBy { getAppCategory(it.packageName) }
    }
    
    /**
     * Set daily usage goal
     */
    fun setDailyGoal(hours: Int) {
        val today = getCurrentDate()
        val todayStats = dailyStats.getOrPut(today) { DailyStats(today) }
        todayStats.dailyGoal = hours * 60 * 60 * 1000L // Convert to milliseconds
    }
    
    /**
     * Get usage trends
     */
    fun getUsageTrends(): Map<String, Long> {
        val trends = mutableMapOf<String, Long>()
        val weeklyData = getWeeklyData()
        
        weeklyData.forEach { day ->
            trends[day.date] = day.totalTime
        }
        
        return trends
    }
    
    /**
     * Reset all data
     */
    fun resetData() {
        appUsageMap.clear()
        dailyStats.clear()
        totalClicksToday = 0
        totalTimeToday = 0
        currentApp = null
        sessionStartTime = 0
    }
    
    /**
     * Export usage data
     */
    fun exportData(): String {
        val insights = getTodayInsights()
        val topApps = getTopApps(10)
        val weeklyData = getWeeklyData()
        
        return buildString {
            appendLine("=== App Tracer Usage Report ===")
            appendLine("Date: ${getCurrentDate()}")
            appendLine("Total Time Today: ${formatTime(insights.totalTimeToday)}")
            appendLine("Total Clicks Today: ${insights.totalClicksToday}")
            appendLine("Top App: ${insights.topApp}")
            appendLine("Goal Progress: ${(insights.goalProgress * 100).toInt()}%")
            appendLine()
            appendLine("=== Top Apps ===")
            topApps.forEachIndexed { index, app ->
                appendLine("${index + 1}. ${app.appName}: ${formatTime(app.totalTime)}")
            }
            appendLine()
            appendLine("=== Weekly Summary ===")
            weeklyData.forEach { day ->
                appendLine("${day.date}: ${formatTime(day.totalTime)}")
            }
        }
    }
    
    // Private helper methods
    
    private fun loadUsageData() {
        // Load from SharedPreferences or database
        // This is a simplified version
    }
    
    private fun saveUsageData() {
        // Save to SharedPreferences or database
        // This is a simplified version
    }
    
    private fun startSessionTracking() {
        // Start background service to track usage
        // This is a simplified version
    }
    
    private fun updateDailyStats() {
        val today = getCurrentDate()
        val todayStats = dailyStats.getOrPut(today) { DailyStats(today) }
        todayStats.totalTime = totalTimeToday
        todayStats.totalClicks = totalClicksToday
        
        // Find top app for today
        val topApp = appUsageMap.maxByOrNull { it.value.totalTime }
        if (topApp != null) {
            todayStats.topApp = topApp.value.appName
            todayStats.topAppTime = topApp.value.totalTime
        }
    }
    
    private fun getAppName(packageName: String): String {
        return try {
            val packageManager = context.packageManager
            val applicationInfo = packageManager.getApplicationInfo(packageName, 0)
            packageManager.getApplicationLabel(applicationInfo).toString()
        } catch (e: Exception) {
            packageName
        }
    }
    
    private fun getAppCategory(packageName: String): String {
        return when {
            packageName.contains("social") || packageName.contains("facebook") || 
            packageName.contains("instagram") || packageName.contains("twitter") -> "Social"
            packageName.contains("game") || packageName.contains("play") -> "Games"
            packageName.contains("work") || packageName.contains("office") -> "Productivity"
            packageName.contains("media") || packageName.contains("video") -> "Entertainment"
            else -> "Other"
        }
    }
    
    private fun getCurrentDate(): String {
        val calendar = Calendar.getInstance()
        return getDateString(calendar.time)
    }
    
    private fun getDateString(date: Date): String {
        val calendar = Calendar.getInstance()
        calendar.time = date
        return "${calendar.get(Calendar.YEAR)}-${calendar.get(Calendar.MONTH) + 1}-${calendar.get(Calendar.DAY_OF_MONTH)}"
    }
    
    private fun formatTime(milliseconds: Long): String {
        val hours = milliseconds / (1000 * 60 * 60)
        val minutes = (milliseconds % (1000 * 60 * 60)) / (1000 * 60)
        return "${hours}h ${minutes}m"
    }
}
