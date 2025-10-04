package com.example.launcher

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.grid.GridCells
import androidx.compose.foundation.lazy.grid.LazyVerticalGrid
import androidx.compose.foundation.lazy.grid.items
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.*
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.draw.rotate
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun AppTracerScreen2(
    onContinueClick: () -> Unit,
    onSkipClick: () -> Unit
) {
    val configuration = androidx.compose.ui.platform.LocalConfiguration.current
    val screenHeight = configuration.screenHeightDp.dp
    val screenWidth = configuration.screenWidthDp.dp
    
    // Responsive padding based on screen size
    val horizontalPadding = if (screenWidth < 400.dp) 16.dp else 24.dp
    val verticalPadding = if (screenHeight < 600.dp) 16.dp else 24.dp
    
    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(
                brush = Brush.verticalGradient(
                    colors = listOf(
                        Color(0xFFEC4899), // Pink-500
                        Color(0xFF8B5CF6)  // Purple-500
                    )
                )
            )
    ) {
        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(horizontal = horizontalPadding, vertical = verticalPadding),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            // Top spacer - responsive
            Spacer(modifier = Modifier.height(if (screenHeight < 600.dp) 16.dp else 32.dp))
            
            // Page indicator
            PageIndicator(currentPage = 2, totalPages = 9, screenHeight = screenHeight)
            
            Spacer(modifier = Modifier.height(if (screenHeight < 600.dp) 16.dp else 24.dp))
            
            // Title section
            AppTracer2TitleSection(screenHeight = screenHeight)
            
            Spacer(modifier = Modifier.height(if (screenHeight < 600.dp) 16.dp else 24.dp))
            
            // Phone mockup with different App Tracer features
            PhoneMockup2Section(screenHeight = screenHeight)
            
            Spacer(modifier = Modifier.weight(1f))
            
            // Action buttons
            AppTracer2ActionButtonsSection(
                onContinueClick = onContinueClick,
                onSkipClick = onSkipClick,
                screenHeight = screenHeight
            )
            
            Spacer(modifier = Modifier.height(if (screenHeight < 600.dp) 16.dp else 32.dp))
        }
    }
}

@Composable
fun AppTracer2TitleSection(screenHeight: androidx.compose.ui.unit.Dp) {
    val titleFontSize = if (screenHeight < 600.dp) 24.sp else 28.sp
    val subtitleFontSize = if (screenHeight < 600.dp) 16.sp else 18.sp
    
    Column(
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Text(
            text = "App Tracer 2",
            fontSize = titleFontSize,
            fontWeight = FontWeight.Bold,
            color = Color(0xFF1F2937),
            textAlign = TextAlign.Center
        )
        
        Spacer(modifier = Modifier.height(8.dp))
        
        // Divider line
        Box(
            modifier = Modifier
                .width(40.dp)
                .height(2.dp)
                .background(Color(0xFF1F2937))
        )
        
        Spacer(modifier = Modifier.height(8.dp))
        
        Text(
            text = "Daily usage info at a glance",
            fontSize = subtitleFontSize,
            color = Color(0xFF6B7280),
            textAlign = TextAlign.Center
        )
    }
}

@Composable
fun PhoneMockup2Section(screenHeight: androidx.compose.ui.unit.Dp) {
    val phoneWidth = if (screenHeight < 600.dp) 200.dp else 250.dp
    val phoneHeight = if (screenHeight < 600.dp) 360.dp else 450.dp
    
    Box(
        modifier = Modifier
            .size(phoneWidth, phoneHeight)
            .rotate(-3f)
            .clip(RoundedCornerShape(20.dp))
            .background(Color(0xFF1F2937))
            .border(2.dp, Color.White.copy(alpha = 0.3f), RoundedCornerShape(20.dp))
    ) {
        // Phone screen content with landscape background
        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(16.dp)
        ) {
            // Phone status bar
            Row(
                modifier = Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.SpaceBetween,
                verticalAlignment = Alignment.CenterVertically
            ) {
                Text(
                    text = "Sun, May 11",
                    fontSize = 12.sp,
                    color = Color.White,
                    fontWeight = FontWeight.Medium
                )
                Text(
                    text = "9:41",
                    fontSize = 12.sp,
                    color = Color.White,
                    fontWeight = FontWeight.Bold
                )
            }
            
            Spacer(modifier = Modifier.height(16.dp))
            
            // App icons grid
            AppIconsGrid()
            
            Spacer(modifier = Modifier.height(16.dp))
            
            // App Tracer widget
            AppTracerWidget(screenHeight = screenHeight)
        }
    }
}

@Composable
fun AppIconsGrid() {
    val appIcons = listOf(
        AppIconData("G", Color(0xFF4285F4)), // Google
        AppIconData("▶", Color(0xFFEA4335)), // Play Store
        AppIconData("📞", Color(0xFF34A853)), // Phone
        AppIconData("📷", Color(0xFFEA4335)), // Camera
        AppIconData("🔍", Color(0xFF9AA0A6)), // Search
        AppIconData("⚙️", Color(0xFF9AA0A6)), // Settings
    )
    
    LazyVerticalGrid(
        columns = GridCells.Fixed(3),
        horizontalArrangement = Arrangement.spacedBy(8.dp),
        verticalArrangement = Arrangement.spacedBy(8.dp),
        modifier = Modifier.height(120.dp)
    ) {
        items(appIcons.size) { index ->
            val app = appIcons[index]
            Box(
                modifier = Modifier
                    .size(40.dp)
                    .clip(RoundedCornerShape(8.dp))
                    .background(app.color),
                contentAlignment = Alignment.Center
            ) {
                Text(
                    text = app.icon,
                    fontSize = 16.sp,
                    color = Color.White
                )
            }
        }
    }
}

@Composable
fun AppTracerWidget(screenHeight: androidx.compose.ui.unit.Dp) {
    Card(
        modifier = Modifier.fillMaxWidth(),
        colors = CardDefaults.cardColors(containerColor = Color.White.copy(alpha = 0.95f)),
        shape = RoundedCornerShape(12.dp)
    ) {
        Column(
            modifier = Modifier.padding(16.dp)
        ) {
            // Widget header
            Row(
                modifier = Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.SpaceBetween,
                verticalAlignment = Alignment.CenterVertically
            ) {
                Text(
                    text = "App Tracer",
                    fontSize = 14.sp,
                    fontWeight = FontWeight.Bold,
                    color = Color(0xFF1F2937)
                )
                
                Icon(
                    imageVector = Icons.Default.MoreVert,
                    contentDescription = "More",
                    tint = Color(0xFF6B7280),
                    modifier = Modifier.size(16.dp)
                )
            }
            
            Spacer(modifier = Modifier.height(12.dp))
            
            // Usage stats
            Row(
                modifier = Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.SpaceBetween
            ) {
                UsageStatItem("Today", "2h 15m", Color(0xFF10B981))
                UsageStatItem("This Week", "12h 30m", Color(0xFF3B82F6))
                UsageStatItem("Top App", "Instagram", Color(0xFFEC4899))
            }
            
            Spacer(modifier = Modifier.height(12.dp))
            
            // Progress bar
            UsageProgressBar()
        }
    }
}

@Composable
fun UsageStatItem(
    label: String,
    value: String,
    color: Color
) {
    Column(
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Text(
            text = value,
            fontSize = 12.sp,
            fontWeight = FontWeight.Bold,
            color = color
        )
        Text(
            text = label,
            fontSize = 8.sp,
            color = Color(0xFF6B7280)
        )
    }
}

@Composable
fun UsageProgressBar() {
    Column {
        Row(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.SpaceBetween
        ) {
            Text(
                text = "Daily Goal",
                fontSize = 10.sp,
                color = Color(0xFF6B7280)
            )
            Text(
                text = "75%",
                fontSize = 10.sp,
                color = Color(0xFF10B981),
                fontWeight = FontWeight.Bold
            )
        }
        
        Spacer(modifier = Modifier.height(4.dp))
        
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(6.dp)
                .clip(RoundedCornerShape(3.dp))
                .background(Color(0xFFE5E7EB))
        ) {
            Box(
                modifier = Modifier
                    .fillMaxWidth(0.75f)
                    .height(6.dp)
                    .clip(RoundedCornerShape(3.dp))
                    .background(Color(0xFF10B981))
            )
        }
    }
}

@Composable
fun AppTracer2ActionButtonsSection(
    onContinueClick: () -> Unit,
    onSkipClick: () -> Unit,
    screenHeight: androidx.compose.ui.unit.Dp
) {
    val buttonHeight = if (screenHeight < 600.dp) 48.dp else 56.dp
    val fontSize = if (screenHeight < 600.dp) 16.sp else 18.sp
    
    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        modifier = Modifier.fillMaxWidth()
    ) {
        // Settings text
        Text(
            text = "Settings",
            fontSize = 12.sp,
            color = Color(0xFF6B7280),
            modifier = Modifier.padding(bottom = 16.dp)
        )
        
        // Continue button
        Button(
            onClick = onContinueClick,
            modifier = Modifier
                .fillMaxWidth()
                .height(buttonHeight),
            colors = ButtonDefaults.buttonColors(containerColor = Color.White),
            shape = RoundedCornerShape(12.dp)
        ) {
            Text(
                text = "CONTINUE",
                fontSize = fontSize,
                fontWeight = FontWeight.Bold,
                color = Color(0xFF1F2937)
            )
        }
        
        Spacer(modifier = Modifier.height(12.dp))
        
        // Skip to game button
        Button(
            onClick = onSkipClick,
            modifier = Modifier
                .fillMaxWidth()
                .height(buttonHeight),
            colors = ButtonDefaults.buttonColors(containerColor = Color(0xFF10B981)),
            shape = RoundedCornerShape(12.dp)
        ) {
            Row(
                verticalAlignment = Alignment.CenterVertically
            ) {
                // Game character icon
                Box(
                    modifier = Modifier
                        .size(24.dp)
                        .clip(CircleShape)
                        .background(Color.White.copy(alpha = 0.2f)),
                    contentAlignment = Alignment.Center
                ) {
                    Icon(
                        imageVector = Icons.Default.Person,
                        contentDescription = "Game Character",
                        tint = Color.White,
                        modifier = Modifier.size(16.dp)
                    )
                }
                
                Spacer(modifier = Modifier.width(8.dp))
                
                Text(
                    text = "SKIP TO THE GAME",
                    fontSize = fontSize,
                    fontWeight = FontWeight.Bold,
                    color = Color.White
                )
            }
        }
    }
}

data class AppIconData(
    val icon: String,
    val color: Color
)
