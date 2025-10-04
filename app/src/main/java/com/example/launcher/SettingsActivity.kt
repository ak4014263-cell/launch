package com.example.launcher

import android.content.Intent
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
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
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.core.view.WindowCompat
import com.example.launcher.ui.theme.ArcLauncherTheme

class SettingsActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        WindowCompat.setDecorFitsSystemWindows(window, false)
        
        setContent {
            ArcLauncherTheme {
                SettingsScreen()
            }
        }
    }
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun SettingsScreen() {
    val context = LocalContext.current
    var darkMode by remember { mutableStateOf(true) }
    var notifications by remember { mutableStateOf(true) }
    var hapticFeedback by remember { mutableStateOf(true) }
    
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
                    text = "Settings",
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
            
            Spacer(modifier = Modifier.height(24.dp))
            
            // Settings list
            LazyColumn(
                verticalArrangement = Arrangement.spacedBy(8.dp)
            ) {
                item {
                    SettingsSection(
                        title = "Appearance",
                        items = listOf(
                            SettingsItem(
                                title = "Dark Mode",
                                subtitle = "Use dark theme",
                                icon = Icons.Default.DarkMode,
                                type = SettingsItemType.Switch(darkMode) { darkMode = it }
                            ),
                            SettingsItem(
                                title = "Accent Color",
                                subtitle = "Choose your favorite color",
                                icon = Icons.Default.Palette,
                                type = SettingsItemType.Action { /* Open color picker */ }
                            )
                        )
                    )
                }
                
                item {
                    SettingsSection(
                        title = "Behavior",
                        items = listOf(
                            SettingsItem(
                                title = "Notifications",
                                subtitle = "Show app notifications",
                                icon = Icons.Default.Notifications,
                                type = SettingsItemType.Switch(notifications) { notifications = it }
                            ),
                            SettingsItem(
                                title = "Haptic Feedback",
                                subtitle = "Vibrate on touch",
                                icon = Icons.Default.Vibration,
                                type = SettingsItemType.Switch(hapticFeedback) { hapticFeedback = it }
                            ),
                            SettingsItem(
                                title = "Auto-hide Status Bar",
                                subtitle = "Hide status bar in launcher",
                                icon = Icons.Default.Visibility,
                                type = SettingsItemType.Switch(false) { /* Handle toggle */ }
                            )
                        )
                    )
                }
                
                item {
                    SettingsSection(
                        title = "About",
                        items = listOf(
                            SettingsItem(
                                title = "Version",
                                subtitle = "1.0.0",
                                icon = Icons.Default.Info,
                                type = SettingsItemType.Info
                            ),
                            SettingsItem(
                                title = "Privacy Policy",
                                subtitle = "Read our privacy policy",
                                icon = Icons.Default.PrivacyTip,
                                type = SettingsItemType.Action { /* Open privacy policy */ }
                            ),
                            SettingsItem(
                                title = "Rate App",
                                subtitle = "Rate us on Play Store",
                                icon = Icons.Default.Star,
                                type = SettingsItemType.Action { /* Open Play Store */ }
                            )
                        )
                    )
                }
            }
        }
    }
}

@Composable
fun SettingsSection(
    title: String,
    items: List<SettingsItem>
) {
    Column {
        Text(
            text = title,
            fontSize = 16.sp,
            fontWeight = FontWeight.Medium,
            color = Color(0xFF9CA3AF),
            modifier = Modifier.padding(vertical = 8.dp)
        )
        
        Card(
            modifier = Modifier.fillMaxWidth(),
            colors = CardDefaults.cardColors(
                containerColor = Color(0xFF1F2937)
            ),
            shape = RoundedCornerShape(12.dp)
        ) {
            Column {
                items.forEachIndexed { index, item ->
                    SettingsItemRow(
                        item = item,
                        showDivider = index < items.size - 1
                    )
                }
            }
        }
        
        Spacer(modifier = Modifier.height(16.dp))
    }
}

@Composable
fun SettingsItemRow(
    item: SettingsItem,
    showDivider: Boolean
) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .clickable { 
                when (val type = item.type) {
                    is SettingsItemType.Action -> type.onClick()
                    is SettingsItemType.Switch -> type.onToggle(!type.isOn)
                    else -> {}
                }
            }
            .padding(16.dp),
        verticalAlignment = Alignment.CenterVertically
    ) {
        Icon(
            item.icon,
            contentDescription = item.title,
            tint = Color(0xFF6366F1),
            modifier = Modifier.size(24.dp)
        )
        
        Spacer(modifier = Modifier.width(16.dp))
        
        Column(
            modifier = Modifier.weight(1f)
        ) {
            Text(
                text = item.title,
                fontSize = 16.sp,
                fontWeight = FontWeight.Medium,
                color = Color.White
            )
            
            Text(
                text = item.subtitle,
                fontSize = 14.sp,
                color = Color(0xFF9CA3AF)
            )
        }
        
        when (val type = item.type) {
            is SettingsItemType.Switch -> {
                Switch(
                    checked = type.isOn,
                    onCheckedChange = type.onToggle,
                    colors = SwitchDefaults.colors(
                        checkedThumbColor = Color.White,
                        checkedTrackColor = Color(0xFF6366F1),
                        uncheckedThumbColor = Color(0xFF9CA3AF),
                        uncheckedTrackColor = Color(0xFF374151)
                    )
                )
            }
            is SettingsItemType.Action -> {
                Icon(
                    Icons.Default.ChevronRight,
                    contentDescription = "Navigate",
                    tint = Color(0xFF9CA3AF),
                    modifier = Modifier.size(20.dp)
                )
            }
            is SettingsItemType.Info -> {
                // No trailing icon for info items
            }
        }
    }
    
    if (showDivider) {
        HorizontalDivider(
            color = Color(0xFF374151),
            modifier = Modifier.padding(start = 56.dp)
        )
    }
}

data class SettingsItem(
    val title: String,
    val subtitle: String,
    val icon: ImageVector,
    val type: SettingsItemType
)

sealed class SettingsItemType {
    data class Switch(val isOn: Boolean, val onToggle: (Boolean) -> Unit) : SettingsItemType()
    data class Action(val onClick: () -> Unit) : SettingsItemType()
    object Info : SettingsItemType()
}
