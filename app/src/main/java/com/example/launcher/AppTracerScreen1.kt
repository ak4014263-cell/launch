package com.example.launcher

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.*
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
fun AppTracerScreen1(
    onContinueClick: () -> Unit,
    onSkipClick: () -> Unit,
    onSkipToGameClick: () -> Unit
) {
    val configuration = androidx.compose.ui.platform.LocalConfiguration.current
    val screenHeight = configuration.screenHeightDp.dp
    val screenWidth = configuration.screenWidthDp.dp
    val isLandscape = screenWidth > screenHeight
    val isTablet = screenWidth >= 600.dp
    val isSmallScreen = screenHeight < 600.dp
    val isVerySmallScreen = screenHeight < 500.dp
    
    // Responsive padding based on screen size and orientation
    val horizontalPadding = when {
        isVerySmallScreen -> 12.dp
        isSmallScreen -> 16.dp
        isTablet -> if (isLandscape) 32.dp else 24.dp
        else -> 24.dp
    }
    val verticalPadding = when {
        isVerySmallScreen -> 8.dp
        isSmallScreen -> 12.dp
        isTablet -> if (isLandscape) 16.dp else 24.dp
        else -> 24.dp
    }
    
    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(
                brush = Brush.verticalGradient(
                    colors = listOf(
                        Color(0xFF8B5CF6), // Purple-500
                        Color(0xFFEC4899)  // Pink-500
                    )
                )
            )
    ) {
        when {
            isLandscape && isTablet -> {
                // Landscape tablet layout
                Row(
                    modifier = Modifier
                        .fillMaxSize()
                        .padding(horizontal = horizontalPadding, vertical = verticalPadding),
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    // Left side - title and phone mockup
                    Column(
                        modifier = Modifier.weight(1f),
                        horizontalAlignment = Alignment.CenterHorizontally
                    ) {
                        PageIndicator(currentPage = 1, totalPages = 9, screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                        Spacer(modifier = Modifier.height(24.dp))
                        AppTracerTitleSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                        Spacer(modifier = Modifier.height(24.dp))
                        PhoneMockupSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                    }
                    
                    Spacer(modifier = Modifier.width(32.dp))
                    
                    // Right side - action buttons
                    Column(
                        modifier = Modifier.weight(1f),
                        horizontalAlignment = Alignment.CenterHorizontally
                    ) {
                            AppTracerActionButtonsSection(
                                onContinueClick = onContinueClick,
                                onSkipClick = onSkipClick,
                                onSkipToGameClick = onSkipToGameClick,
                                screenHeight = screenHeight,
                                isLandscape = isLandscape,
                                isTablet = isTablet
                            )
                    }
                }
            }
            isLandscape && !isTablet -> {
                // Landscape phone layout - more compact
                Row(
                    modifier = Modifier
                        .fillMaxSize()
                        .padding(horizontal = horizontalPadding, vertical = verticalPadding),
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    // Left side - phone mockup
                    Column(
                        modifier = Modifier.weight(1f),
                        horizontalAlignment = Alignment.CenterHorizontally
                    ) {
                        PhoneMockupSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                    }
                    
                    Spacer(modifier = Modifier.width(16.dp))
                    
                    // Right side - content and buttons
                    Column(
                        modifier = Modifier.weight(1f),
                        horizontalAlignment = Alignment.CenterHorizontally
                    ) {
                        PageIndicator(currentPage = 1, totalPages = 9, screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                        Spacer(modifier = Modifier.height(16.dp))
                        AppTracerTitleSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                        Spacer(modifier = Modifier.height(16.dp))
                            AppTracerActionButtonsSection(
                                onContinueClick = onContinueClick,
                                onSkipClick = onSkipClick,
                                onSkipToGameClick = onSkipToGameClick,
                                screenHeight = screenHeight,
                                isLandscape = isLandscape,
                                isTablet = isTablet
                            )
                    }
                }
            }
            else -> {
                // Portrait or phone layout
                Column(
                    modifier = Modifier
                        .fillMaxSize()
                        .padding(horizontal = horizontalPadding, vertical = verticalPadding),
                    horizontalAlignment = Alignment.CenterHorizontally
                ) {
                    // Top spacer - responsive
                    val topSpacer = when {
                        isVerySmallScreen -> 8.dp
                        isSmallScreen -> 16.dp
                        isTablet -> 24.dp
                        else -> 32.dp
                    }
                    Spacer(modifier = Modifier.height(topSpacer))
                    
                    // Page indicator
                    PageIndicator(currentPage = 1, totalPages = 9, screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                    
                    val middleSpacer = when {
                        isVerySmallScreen -> 8.dp
                        isSmallScreen -> 16.dp
                        isTablet -> 24.dp
                        else -> 32.dp
                    }
                    Spacer(modifier = Modifier.height(middleSpacer))
                    
                    // Title section
                    AppTracerTitleSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                    
                    Spacer(modifier = Modifier.height(middleSpacer))
                    
                    // Phone mockup with App Tracer popup
                    PhoneMockupSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                    
                    Spacer(modifier = Modifier.weight(1f))
                    
                    // Action buttons
                            AppTracerActionButtonsSection(
                                onContinueClick = onContinueClick,
                                onSkipClick = onSkipClick,
                                onSkipToGameClick = onSkipToGameClick,
                                screenHeight = screenHeight,
                                isLandscape = isLandscape,
                                isTablet = isTablet
                            )
                    
                    val bottomSpacer = when {
                        isVerySmallScreen -> 8.dp
                        isSmallScreen -> 16.dp
                        isTablet -> 24.dp
                        else -> 32.dp
                    }
                    Spacer(modifier = Modifier.height(bottomSpacer))
                }
            }
        }
    }
}

@Composable
fun PageIndicator(
    currentPage: Int,
    totalPages: Int,
    screenHeight: androidx.compose.ui.unit.Dp,
    isLandscape: Boolean = false,
    isTablet: Boolean = false
) {
    val dotSize = when {
        screenHeight < 500.dp -> 4.dp
        screenHeight < 600.dp -> 6.dp
        isTablet -> if (isLandscape) 8.dp else 10.dp
        else -> 8.dp
    }
    val spacing = when {
        screenHeight < 500.dp -> 3.dp
        screenHeight < 600.dp -> 4.dp
        isTablet -> if (isLandscape) 6.dp else 8.dp
        else -> 6.dp
    }
    
    Row(
        horizontalArrangement = Arrangement.spacedBy(spacing),
        verticalAlignment = Alignment.CenterVertically
    ) {
        repeat(totalPages) { index ->
            Box(
                modifier = Modifier
                    .size(dotSize)
                    .clip(CircleShape)
                    .background(
                        if (index == currentPage - 1) Color.White else Color.White.copy(alpha = 0.3f)
                    )
            )
        }
    }
}

@Composable
fun AppTracerTitleSection(
    screenHeight: androidx.compose.ui.unit.Dp,
    isLandscape: Boolean = false,
    isTablet: Boolean = false
) {
    val titleFontSize = when {
        screenHeight < 500.dp -> 20.sp
        screenHeight < 600.dp -> 24.sp
        isTablet -> if (isLandscape) 26.sp else 28.sp
        else -> 28.sp
    }
    val subtitleFontSize = when {
        screenHeight < 500.dp -> 14.sp
        screenHeight < 600.dp -> 16.sp
        isTablet -> if (isLandscape) 16.sp else 18.sp
        else -> 18.sp
    }
    
    Column(
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Text(
            text = "App Tracer",
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
            text = "Stay informed with detailed app activity and usage stats",
            fontSize = subtitleFontSize,
            color = Color(0xFF6B7280),
            textAlign = TextAlign.Center
        )
    }
}

@Composable
fun PhoneMockupSection(
    screenHeight: androidx.compose.ui.unit.Dp,
    isLandscape: Boolean = false,
    isTablet: Boolean = false
) {
    val phoneWidth = when {
        screenHeight < 500.dp -> 150.dp
        screenHeight < 600.dp -> 200.dp
        isTablet -> if (isLandscape) 220.dp else 250.dp
        else -> 250.dp
    }
    val phoneHeight = when {
        screenHeight < 500.dp -> 270.dp
        screenHeight < 600.dp -> 360.dp
        isTablet -> if (isLandscape) 400.dp else 450.dp
        else -> 450.dp
    }
    
    Box(
        modifier = Modifier
            .size(phoneWidth, phoneHeight)
            .rotate(5f)
            .clip(RoundedCornerShape(20.dp))
            .background(Color(0xFF1F2937))
            .border(2.dp, Color.White.copy(alpha = 0.3f), RoundedCornerShape(20.dp))
    ) {
        // Phone screen content
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
            
            // App Tracer popup
            AppTracerPopup(screenHeight = screenHeight)
        }
    }
}

@Composable
fun AppTracerPopup(screenHeight: androidx.compose.ui.unit.Dp) {
    Card(
        modifier = Modifier.fillMaxWidth(),
        colors = CardDefaults.cardColors(containerColor = Color.White),
        shape = RoundedCornerShape(12.dp)
    ) {
        Column(
            modifier = Modifier.padding(16.dp)
        ) {
            // Header
            Row(
                verticalAlignment = Alignment.CenterVertically
            ) {
                Box(
                    modifier = Modifier
                        .size(24.dp)
                        .clip(CircleShape)
                        .background(Color(0xFF1877F2)),
                    contentAlignment = Alignment.Center
                ) {
                    Text(
                        text = "f",
                        fontSize = 14.sp,
                        color = Color.White,
                        fontWeight = FontWeight.Bold
                    )
                }
                
                Spacer(modifier = Modifier.width(8.dp))
                
                Column {
                    Text(
                        text = "App Tracer",
                        fontSize = 14.sp,
                        fontWeight = FontWeight.Bold,
                        color = Color(0xFF1F2937)
                    )
                    Text(
                        text = "Track your usage",
                        fontSize = 10.sp,
                        color = Color(0xFF6B7280)
                    )
                }
            }
            
            Spacer(modifier = Modifier.height(16.dp))
            
            // Today's clicks
            Text(
                text = "Today's Clicks",
                fontSize = 12.sp,
                fontWeight = FontWeight.Medium,
                color = Color(0xFF1F2937)
            )
            
            Text(
                text = "0 clicks",
                fontSize = 16.sp,
                fontWeight = FontWeight.Bold,
                color = Color(0xFF1F2937)
            )
            
            Spacer(modifier = Modifier.height(12.dp))
            
            // Usage chart
            UsageChart()
            
            Spacer(modifier = Modifier.height(8.dp))
            
            Text(
                text = "Move to Home screen",
                fontSize = 10.sp,
                color = Color(0xFF6B7280)
            )
            
            Spacer(modifier = Modifier.height(12.dp))
            
            // Go to app button
            Button(
                onClick = { },
                modifier = Modifier.fillMaxWidth(),
                colors = ButtonDefaults.buttonColors(containerColor = Color(0xFF10B981)),
                shape = RoundedCornerShape(8.dp)
            ) {
                Row(
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    Box(
                        modifier = Modifier
                            .size(16.dp)
                            .clip(CircleShape)
                            .background(Color(0xFF1877F2)),
                        contentAlignment = Alignment.Center
                    ) {
                        Text(
                            text = "f",
                            fontSize = 10.sp,
                            color = Color.White,
                            fontWeight = FontWeight.Bold
                        )
                    }
                    
                    Spacer(modifier = Modifier.width(8.dp))
                    
                    Text(
                        text = "GO TO APP",
                        fontSize = 12.sp,
                        fontWeight = FontWeight.Bold,
                        color = Color.White
                    )
                }
            }
        }
    }
}

@Composable
fun UsageChart() {
    Column {
        // Y-axis labels
        Row(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.SpaceBetween
        ) {
            repeat(6) { index ->
                Text(
                    text = "${index * 0.2}",
                    fontSize = 8.sp,
                    color = Color(0xFF6B7280)
                )
            }
        }
        
        Spacer(modifier = Modifier.height(4.dp))
        
        // Chart area
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(40.dp)
                .background(Color(0xFFF3F4F6))
        ) {
            // Flat line at 0
            Box(
                modifier = Modifier
                    .fillMaxWidth()
                    .height(2.dp)
                    .background(Color(0xFF10B981))
                    .align(Alignment.BottomCenter)
            )
            
            // Cursor pointing at 0.2
            Box(
                modifier = Modifier
                    .size(16.dp)
                    .background(Color.White, CircleShape)
                    .align(Alignment.TopStart)
                    .offset(x = 20.dp, y = 8.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.TouchApp,
                    contentDescription = "Cursor",
                    tint = Color(0xFF10B981),
                    modifier = Modifier.size(12.dp)
                )
            }
        }
        
        // X-axis labels
        Row(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.SpaceEvenly
        ) {
            listOf("Mon", "Tue", "Wed", "Thu", "Fri").forEach { day ->
                Text(
                    text = day,
                    fontSize = 8.sp,
                    color = Color(0xFF6B7280)
                )
            }
        }
    }
}

@Composable
fun AppTracerActionButtonsSection(
    onContinueClick: () -> Unit,
    onSkipClick: () -> Unit,
    onSkipToGameClick: () -> Unit,
    screenHeight: androidx.compose.ui.unit.Dp,
    isLandscape: Boolean = false,
    isTablet: Boolean = false
) {
    val buttonHeight = when {
        screenHeight < 500.dp -> 40.dp
        screenHeight < 600.dp -> 48.dp
        isTablet -> if (isLandscape) 52.dp else 56.dp
        else -> 56.dp
    }
    val fontSize = when {
        screenHeight < 500.dp -> 14.sp
        screenHeight < 600.dp -> 16.sp
        isTablet -> if (isLandscape) 16.sp else 18.sp
        else -> 18.sp
    }
    
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
            onClick = onSkipToGameClick,
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
