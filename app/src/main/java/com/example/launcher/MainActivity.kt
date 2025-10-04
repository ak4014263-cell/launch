package com.example.launcher

import android.content.Intent
import android.content.pm.PackageManager
import android.content.pm.ResolveInfo
import android.graphics.drawable.Drawable
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.animation.*
import androidx.compose.animation.core.*
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
import androidx.compose.ui.draw.scale
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.toArgb
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.core.view.WindowCompat
import com.example.launcher.ui.theme.ArcLauncherTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        // Enable edge-to-edge display
        WindowCompat.setDecorFitsSystemWindows(window, false)
        
        setContent {
            ArcLauncherTheme {
                LauncherScreen()
            }
        }
    }
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun LauncherScreen() {
    val context = LocalContext.current
    var searchQuery by remember { mutableStateOf("") }
    var showAppDrawer by remember { mutableStateOf(false) }
    
    // Get installed apps
    val installedApps = remember {
        getInstalledApps(context)
    }
    
    // Filter apps based on search query
    val filteredApps = remember(searchQuery) {
        if (searchQuery.isEmpty()) {
            installedApps.take(20) // Show first 20 apps on home screen
        } else {
            installedApps.filter { 
                it.name.contains(searchQuery, ignoreCase = true) 
            }
        }
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
            
            // Search bar
            SearchBar(
                query = searchQuery,
                onQueryChange = { searchQuery = it },
                onSearch = { /* Handle search */ },
                modifier = Modifier.fillMaxWidth()
            )
            
            Spacer(modifier = Modifier.height(24.dp))
            
            AnimatedContent(
                targetState = searchQuery.isEmpty(),
                transitionSpec = {
                    fadeIn(animationSpec = tween(300)) togetherWith
                    fadeOut(animationSpec = tween(300))
                },
                label = "content"
            ) { isHomeScreen ->
                if (isHomeScreen) {
                    // Home screen content
                    HomeScreenContent(
                        apps = filteredApps,
                        onAppClick = { app ->
                            context.startActivity(app.launchIntent)
                        }
                    )
                } else {
                    // Search results
                    SearchResults(
                        apps = filteredApps,
                        onAppClick = { app ->
                            context.startActivity(app.launchIntent)
                        }
                    )
                }
            }
        }
        
        // Bottom navigation
        BottomNavigationBar(
            modifier = Modifier.align(Alignment.BottomCenter),
            onAppDrawerClick = { showAppDrawer = !showAppDrawer }
        )
    }
}

@Composable
fun SearchBar(
    query: String,
    onQueryChange: (String) -> Unit,
    onSearch: () -> Unit,
    modifier: Modifier = Modifier
) {
    OutlinedTextField(
        value = query,
        onValueChange = onQueryChange,
        modifier = modifier,
        placeholder = { 
            Text(
                "Search apps...",
                color = Color(0xFF9CA3AF)
            ) 
        },
        leadingIcon = {
            Icon(
                Icons.Default.Search,
                contentDescription = "Search",
                tint = Color(0xFF9CA3AF)
            )
        },
        trailingIcon = {
            if (query.isNotEmpty()) {
                IconButton(onClick = { onQueryChange("") }) {
                    Icon(
                        Icons.Default.Close,
                        contentDescription = "Clear",
                        tint = Color(0xFF9CA3AF)
                    )
                }
            }
        },
        colors = OutlinedTextFieldDefaults.colors(
            focusedBorderColor = Color(0xFF6366F1),
            unfocusedBorderColor = Color(0xFF374151),
            focusedTextColor = Color.White,
            unfocusedTextColor = Color.White,
            focusedContainerColor = Color(0xFF1F2937),
            unfocusedContainerColor = Color(0xFF1F2937)
        ),
        shape = RoundedCornerShape(24.dp),
        singleLine = true
    )
}

@Composable
fun HomeScreenContent(
    apps: List<AppInfo>,
    onAppClick: (AppInfo) -> Unit
) {
    LazyColumn(
        verticalArrangement = Arrangement.spacedBy(16.dp)
    ) {
        // Quick access section
        item {
            Text(
                text = "Quick Access",
                fontSize = 20.sp,
                fontWeight = FontWeight.Bold,
                color = Color.White,
                modifier = Modifier.padding(vertical = 8.dp)
            )
        }
        
        item {
            LazyRow(
                horizontalArrangement = Arrangement.spacedBy(12.dp)
            ) {
                items(apps.take(8)) { app ->
                    QuickAccessApp(
                        app = app,
                        onClick = { onAppClick(app) }
                    )
                }
            }
        }
        
        // All apps grid
        item {
            Text(
                text = "All Apps",
                fontSize = 20.sp,
                fontWeight = FontWeight.Bold,
                color = Color.White,
                modifier = Modifier.padding(vertical = 8.dp)
            )
        }
        
        item {
            LazyVerticalGrid(
                columns = GridCells.Fixed(4),
                horizontalArrangement = Arrangement.spacedBy(16.dp),
                verticalArrangement = Arrangement.spacedBy(16.dp),
                modifier = Modifier.height(400.dp)
            ) {
                items(apps) { app ->
                    AppIcon(
                        app = app,
                        onClick = { onAppClick(app) }
                    )
                }
            }
        }
    }
}

@Composable
fun QuickAccessApp(
    app: AppInfo,
    onClick: () -> Unit
) {
    var isPressed by remember { mutableStateOf(false) }
    val scale by animateFloatAsState(
        targetValue = if (isPressed) 0.9f else 1f,
        animationSpec = tween(100),
        label = "scale"
    )
    
    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        modifier = Modifier
            .scale(scale)
            .clickable { 
                isPressed = true
                onClick()
            }
    ) {
        Box(
            modifier = Modifier
                .size(64.dp)
                .clip(RoundedCornerShape(16.dp))
                .background(Color(0xFF1F2937))
                .padding(12.dp),
            contentAlignment = Alignment.Center
        ) {
            Icon(
                Icons.Default.Android,
                contentDescription = app.name,
                tint = Color(0xFF6366F1),
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
fun AppIcon(
    app: AppInfo,
    onClick: () -> Unit
) {
    var isPressed by remember { mutableStateOf(false) }
    val scale by animateFloatAsState(
        targetValue = if (isPressed) 0.9f else 1f,
        animationSpec = tween(100),
        label = "scale"
    )
    
    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        modifier = Modifier
            .scale(scale)
            .clickable { 
                isPressed = true
                onClick()
            }
    ) {
        Box(
            modifier = Modifier
                .size(64.dp)
                .clip(RoundedCornerShape(16.dp))
                .background(Color(0xFF1F2937))
                .padding(12.dp),
            contentAlignment = Alignment.Center
        ) {
            Icon(
                Icons.Default.Android,
                contentDescription = app.name,
                tint = Color(0xFF6366F1),
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
fun SearchResults(
    apps: List<AppInfo>,
    onAppClick: (AppInfo) -> Unit
) {
    LazyColumn(
        verticalArrangement = Arrangement.spacedBy(8.dp)
    ) {
        items(apps) { app ->
            AppSearchItem(
                app = app,
                onClick = { onAppClick(app) }
            )
        }
    }
}

@Composable
fun AppSearchItem(
    app: AppInfo,
    onClick: () -> Unit
) {
    Card(
        modifier = Modifier
            .fillMaxWidth()
            .clickable { onClick() },
        colors = CardDefaults.cardColors(
            containerColor = Color(0xFF1F2937)
        ),
        shape = RoundedCornerShape(12.dp)
    ) {
        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(16.dp),
            verticalAlignment = Alignment.CenterVertically
        ) {
            Box(
                modifier = Modifier
                    .size(48.dp)
                    .clip(RoundedCornerShape(12.dp))
                    .background(Color(0xFF374151)),
                contentAlignment = Alignment.Center
            ) {
                Icon(
                    Icons.Default.Android,
                    contentDescription = app.name,
                    tint = Color(0xFF6366F1),
                    modifier = Modifier.size(24.dp)
                )
            }
            
            Spacer(modifier = Modifier.width(16.dp))
            
            Text(
                text = app.name,
                fontSize = 16.sp,
                color = Color.White,
                fontWeight = FontWeight.Medium
            )
        }
    }
}

@Composable
fun BottomNavigationBar(
    modifier: Modifier = Modifier,
    onAppDrawerClick: () -> Unit
) {
    val context = LocalContext.current
    Card(
        modifier = modifier
            .fillMaxWidth()
            .padding(16.dp),
        colors = CardDefaults.cardColors(
            containerColor = Color(0xFF1F2937)
        ),
        shape = RoundedCornerShape(24.dp)
    ) {
        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(16.dp),
            horizontalArrangement = Arrangement.SpaceEvenly,
            verticalAlignment = Alignment.CenterVertically
        ) {
            IconButton(onClick = { /* Home */ }) {
                Icon(
                    Icons.Default.Home,
                    contentDescription = "Home",
                    tint = Color(0xFF6366F1)
                )
            }
            
            IconButton(onClick = { 
                context.startActivity(Intent(context, AppDrawerActivity::class.java))
            }) {
                Icon(
                    Icons.Default.Apps,
                    contentDescription = "Apps",
                    tint = Color(0xFF9CA3AF)
                )
            }
            
            IconButton(onClick = { 
                context.startActivity(Intent(context, WidgetsActivity::class.java))
            }) {
                Icon(
                    Icons.Default.Widgets,
                    contentDescription = "Widgets",
                    tint = Color(0xFF9CA3AF)
                )
            }
            
            IconButton(onClick = { 
                context.startActivity(Intent(context, SettingsActivity::class.java))
            }) {
                Icon(
                    Icons.Default.Settings,
                    contentDescription = "Settings",
                    tint = Color(0xFF9CA3AF)
                )
            }
        }
    }
}

data class AppInfo(
    val name: String,
    val packageName: String,
    val launchIntent: Intent,
    val icon: Drawable? = null
)

fun getInstalledApps(context: android.content.Context): List<AppInfo> {
    val packageManager = context.packageManager
    val intent = Intent(Intent.ACTION_MAIN, null).apply {
        addCategory(Intent.CATEGORY_LAUNCHER)
    }
    
    val resolveInfoList: List<ResolveInfo> = packageManager.queryIntentActivities(intent, 0)
    
    return resolveInfoList.map { resolveInfo ->
        AppInfo(
            name = resolveInfo.loadLabel(packageManager).toString(),
            packageName = resolveInfo.activityInfo.packageName,
            launchIntent = packageManager.getLaunchIntentForPackage(resolveInfo.activityInfo.packageName)!!,
            icon = resolveInfo.loadIcon(packageManager)
        )
    }.sortedBy { it.name }
}
