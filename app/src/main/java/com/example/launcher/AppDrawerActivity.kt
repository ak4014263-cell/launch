package com.example.launcher

import android.content.Intent
import android.content.pm.PackageManager
import android.content.pm.ResolveInfo
import android.graphics.drawable.Drawable
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.animation.*
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.LazyRow
import androidx.compose.foundation.lazy.grid.GridCells
import androidx.compose.foundation.lazy.grid.LazyVerticalGrid
import androidx.compose.foundation.lazy.grid.items
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.*
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.core.view.WindowCompat
import com.example.launcher.ui.theme.ArcLauncherTheme

class AppDrawerActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        WindowCompat.setDecorFitsSystemWindows(window, false)
        
        setContent {
            ArcLauncherTheme {
                AppDrawerScreen()
            }
        }
    }
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun AppDrawerScreen() {
    val context = LocalContext.current
    var searchQuery by remember { mutableStateOf("") }
    var selectedCategory by remember { mutableStateOf("All") }
    
    // Get installed apps
    val installedApps = remember {
        getInstalledAppsWithCategories(context)
    }
    
    // Filter apps based on search query and category
    val filteredApps = remember(searchQuery, selectedCategory) {
        val apps = if (selectedCategory == "All") {
            installedApps
        } else {
            installedApps.filter { it.category == selectedCategory }
        }
        
        if (searchQuery.isEmpty()) {
            apps
        } else {
            apps.filter { 
                it.name.contains(searchQuery, ignoreCase = true) 
            }
        }
    }
    
    // Get unique categories
    val categories = remember {
        listOf("All") + installedApps.map { it.category }.distinct().sorted()
    }
    
    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(Color(0xFF0F0F23))
    ) {
        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(16.dp)
        ) {
            // Status bar spacer
            Spacer(modifier = Modifier.height(24.dp))
            
            // Header
            Row(
                modifier = Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.SpaceBetween,
                verticalAlignment = Alignment.CenterVertically
            ) {
                Text(
                    text = "Apps",
                    fontSize = 28.sp,
                    fontWeight = FontWeight.Bold,
                    color = Color.White
                )
                
                IconButton(onClick = { 
                    (context as ComponentActivity).finish()
                }) {
                    Icon(
                        Icons.Default.Close,
                        contentDescription = "Close",
                        tint = Color(0xFF9CA3AF)
                    )
                }
            }
            
            Spacer(modifier = Modifier.height(16.dp))
            
            // Search bar
            SearchBar(
                query = searchQuery,
                onQueryChange = { searchQuery = it },
                onSearch = { /* Handle search */ },
                modifier = Modifier.fillMaxWidth()
            )
            
            Spacer(modifier = Modifier.height(16.dp))
            
            // Category tabs
            CategoryTabs(
                categories = categories,
                selectedCategory = selectedCategory,
                onCategorySelected = { selectedCategory = it }
            )
            
            Spacer(modifier = Modifier.height(16.dp))
            
            // Apps grid
            AppsGrid(
                apps = filteredApps,
                onAppClick = { app ->
                    context.startActivity(app.launchIntent)
                }
            )
        }
    }
}

@Composable
fun CategoryTabs(
    categories: List<String>,
    selectedCategory: String,
    onCategorySelected: (String) -> Unit
) {
    LazyRow(
        horizontalArrangement = Arrangement.spacedBy(8.dp)
    ) {
        items(categories) { category ->
            CategoryTab(
                category = category,
                isSelected = category == selectedCategory,
                onClick = { onCategorySelected(category) }
            )
        }
    }
}

@Composable
fun CategoryTab(
    category: String,
    isSelected: Boolean,
    onClick: () -> Unit
) {
    Card(
        modifier = Modifier.clickable { onClick() },
        colors = CardDefaults.cardColors(
            containerColor = if (isSelected) Color(0xFF6366F1) else Color(0xFF1F2937)
        ),
        shape = RoundedCornerShape(20.dp)
    ) {
        Text(
            text = category,
            modifier = Modifier.padding(horizontal = 16.dp, vertical = 8.dp),
            color = if (isSelected) Color.White else Color(0xFF9CA3AF),
            fontSize = 14.sp,
            fontWeight = if (isSelected) FontWeight.Medium else FontWeight.Normal
        )
    }
}

@Composable
fun AppsGrid(
    apps: List<AppInfoWithCategory>,
    onAppClick: (AppInfoWithCategory) -> Unit
) {
    LazyVerticalGrid(
        columns = GridCells.Fixed(4),
        horizontalArrangement = Arrangement.spacedBy(16.dp),
        verticalArrangement = Arrangement.spacedBy(16.dp)
    ) {
        items(apps) { app ->
            AppIconWithCategory(
                app = app,
                onClick = { onAppClick(app) }
            )
        }
    }
}

@Composable
fun AppIconWithCategory(
    app: AppInfoWithCategory,
    onClick: () -> Unit
) {
    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        modifier = Modifier.clickable { onClick() }
    ) {
        Box(
            modifier = Modifier
                .size(64.dp)
                .clip(RoundedCornerShape(16.dp))
                .background(getCategoryColor(app.category))
                .padding(12.dp),
            contentAlignment = Alignment.Center
        ) {
            Icon(
                getCategoryIcon(app.category),
                contentDescription = app.name,
                tint = Color.White,
                modifier = Modifier.size(32.dp)
            )
        }
        
        Spacer(modifier = Modifier.height(8.dp))
        
        Text(
            text = app.name,
            fontSize = 12.sp,
            color = Color.White,
            textAlign = TextAlign.Center,
            maxLines = 1
        )
    }
}

@Composable
fun getCategoryColor(category: String): Color {
    return when (category.lowercase()) {
        "social" -> Color(0xFFEC4899)
        "games" -> Color(0xFF10B981)
        "productivity" -> Color(0xFFF59E0B)
        "entertainment" -> Color(0xFF8B5CF6)
        "utilities" -> Color(0xFF06B6D4)
        "communication" -> Color(0xFFEF4444)
        else -> Color(0xFF6366F1)
    }
}

@Composable
fun getCategoryIcon(category: String): androidx.compose.ui.graphics.vector.ImageVector {
    return when (category.lowercase()) {
        "social" -> Icons.Default.People
        "games" -> Icons.Default.Games
        "productivity" -> Icons.Default.Work
        "entertainment" -> Icons.Default.Movie
        "utilities" -> Icons.Default.Build
        "communication" -> Icons.Default.Message
        else -> Icons.Default.Android
    }
}

data class AppInfoWithCategory(
    val name: String,
    val packageName: String,
    val launchIntent: Intent,
    val icon: Drawable? = null,
    val category: String
)

fun getInstalledAppsWithCategories(context: android.content.Context): List<AppInfoWithCategory> {
    val packageManager = context.packageManager
    val intent = Intent(Intent.ACTION_MAIN, null).apply {
        addCategory(Intent.CATEGORY_LAUNCHER)
    }
    
    val resolveInfoList: List<ResolveInfo> = packageManager.queryIntentActivities(intent, 0)
    
    return resolveInfoList.map { resolveInfo ->
        val packageName = resolveInfo.activityInfo.packageName
        val category = getAppCategory(packageName)
        
        AppInfoWithCategory(
            name = resolveInfo.loadLabel(packageManager).toString(),
            packageName = packageName,
            launchIntent = packageManager.getLaunchIntentForPackage(packageName)!!,
            icon = resolveInfo.loadIcon(packageManager),
            category = category
        )
    }.sortedBy { it.name }
}

fun getAppCategory(packageName: String): String {
    return when {
        packageName.contains("whatsapp") || packageName.contains("telegram") || 
        packageName.contains("discord") || packageName.contains("instagram") ||
        packageName.contains("facebook") || packageName.contains("twitter") ||
        packageName.contains("tiktok") || packageName.contains("snapchat") -> "Social"
        
        packageName.contains("game") || packageName.contains("play") ||
        packageName.contains("clash") || packageName.contains("pubg") ||
        packageName.contains("fortnite") || packageName.contains("minecraft") -> "Games"
        
        packageName.contains("office") || packageName.contains("word") ||
        packageName.contains("excel") || packageName.contains("powerpoint") ||
        packageName.contains("notion") || packageName.contains("trello") ||
        packageName.contains("slack") || packageName.contains("zoom") -> "Productivity"
        
        packageName.contains("netflix") || packageName.contains("youtube") ||
        packageName.contains("spotify") || packageName.contains("music") ||
        packageName.contains("video") || packageName.contains("player") -> "Entertainment"
        
        packageName.contains("phone") || packageName.contains("message") ||
        packageName.contains("call") || packageName.contains("sms") ||
        packageName.contains("email") || packageName.contains("gmail") -> "Communication"
        
        else -> "Utilities"
    }
}
