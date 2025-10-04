package com.example.launcher

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
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
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun OnboardingScreen2(
    onSetDefaultClick: () -> Unit
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
                        Color(0xFF7C3AED), // Purple-600
                        Color(0xFFEC4899)  // Pink-500
                    )
                )
            )
    ) {
        if (isLandscape && isTablet) {
            // Landscape tablet layout
            Row(
                modifier = Modifier
                    .fillMaxSize()
                    .padding(horizontal = horizontalPadding, vertical = verticalPadding),
                verticalAlignment = Alignment.CenterVertically
            ) {
                // Left side - icon and title
                Column(
                    modifier = Modifier.weight(1f),
                    horizontalAlignment = Alignment.CenterHorizontally
                ) {
                    Screen2IconSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                    Spacer(modifier = Modifier.height(24.dp))
                    Screen2TitleSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                }
                
                Spacer(modifier = Modifier.width(32.dp))
                
                // Right side - features and buttons
                Column(
                    modifier = Modifier.weight(1f),
                    horizontalAlignment = Alignment.CenterHorizontally
                ) {
                    FeaturesList(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                    Spacer(modifier = Modifier.height(32.dp))
                    Screen2ActionButtonsSection(
                        onSetDefaultClick = onSetDefaultClick,
                        screenHeight = screenHeight,
                        isLandscape = isLandscape,
                        isTablet = isTablet
                    )
                }
            }
        } else {
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
                
                // Icon section
                Screen2IconSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                
                val middleSpacer = when {
                    isVerySmallScreen -> 8.dp
                    isSmallScreen -> 16.dp
                    isTablet -> 24.dp
                    else -> 32.dp
                }
                Spacer(modifier = Modifier.height(middleSpacer))
                
                // Title and subtitle
                Screen2TitleSection(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                
                Spacer(modifier = Modifier.height(middleSpacer))
                
                // Features list
                FeaturesList(screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
                
                Spacer(modifier = Modifier.weight(1f))
                
                // Action buttons
                Screen2ActionButtonsSection(
                    onSetDefaultClick = onSetDefaultClick,
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

@Composable
fun Screen2IconSection(
    screenHeight: androidx.compose.ui.unit.Dp,
    isLandscape: Boolean = false,
    isTablet: Boolean = false
) {
    val iconSize = when {
        screenHeight < 500.dp -> 60.dp
        screenHeight < 600.dp -> 80.dp
        isTablet -> if (isLandscape) 100.dp else 120.dp
        else -> 120.dp
    }
    
    Box(
        modifier = Modifier
            .size(iconSize)
            .clip(CircleShape)
            .background(Color.White.copy(alpha = 0.2f)),
        contentAlignment = Alignment.Center
    ) {
        Icon(
            imageVector = Icons.Default.Settings,
            contentDescription = "Settings",
            tint = Color.White,
            modifier = Modifier.size(iconSize * 0.6f)
        )
    }
}

@Composable
fun Screen2TitleSection(
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
            text = "CUSTOMIZE YOUR EXPERIENCE",
            fontSize = titleFontSize,
            fontWeight = FontWeight.Bold,
            color = Color.White,
            textAlign = TextAlign.Center
        )
        
        Spacer(modifier = Modifier.height(8.dp))
        
        Text(
            text = "Personalize your launcher with powerful customization options",
            fontSize = subtitleFontSize,
            color = Color(0xFFB9B9C3),
            textAlign = TextAlign.Center
        )
    }
}

@Composable
fun FeaturesList(
    screenHeight: androidx.compose.ui.unit.Dp,
    isLandscape: Boolean = false,
    isTablet: Boolean = false
) {
    val features = listOf(
        FeatureItem(
            icon = Icons.Default.Palette,
            title = "Custom Themes",
            description = "Choose from beautiful color schemes"
        ),
        FeatureItem(
            icon = Icons.Default.Widgets,
            title = "Smart Widgets",
            description = "Add useful widgets to your home screen"
        ),
        FeatureItem(
            icon = Icons.Default.GridView,
            title = "Flexible Layouts",
            description = "Arrange apps exactly how you want"
        )
    )
    
    val itemSpacing = when {
        screenHeight < 500.dp -> 8.dp
        screenHeight < 600.dp -> 12.dp
        isTablet -> if (isLandscape) 16.dp else 20.dp
        else -> 16.dp
    }
    
    Column(
        verticalArrangement = Arrangement.spacedBy(itemSpacing)
    ) {
        features.forEach { feature ->
            FeatureListItem(feature = feature, screenHeight = screenHeight, isLandscape = isLandscape, isTablet = isTablet)
        }
    }
}

@Composable
fun FeatureListItem(
    feature: FeatureItem,
    screenHeight: androidx.compose.ui.unit.Dp,
    isLandscape: Boolean = false,
    isTablet: Boolean = false
) {
    val iconSize = when {
        screenHeight < 500.dp -> 16.dp
        screenHeight < 600.dp -> 20.dp
        isTablet -> if (isLandscape) 22.dp else 24.dp
        else -> 24.dp
    }
    val titleFontSize = when {
        screenHeight < 500.dp -> 12.sp
        screenHeight < 600.dp -> 14.sp
        isTablet -> if (isLandscape) 15.sp else 16.sp
        else -> 16.sp
    }
    val descFontSize = when {
        screenHeight < 500.dp -> 10.sp
        screenHeight < 600.dp -> 12.sp
        isTablet -> if (isLandscape) 13.sp else 14.sp
        else -> 14.sp
    }
    
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .padding(horizontal = 16.dp, vertical = 8.dp),
        verticalAlignment = Alignment.CenterVertically
    ) {
        Box(
            modifier = Modifier
                .size(40.dp)
                .clip(CircleShape)
                .background(Color.White.copy(alpha = 0.2f)),
            contentAlignment = Alignment.Center
        ) {
            Icon(
                imageVector = feature.icon,
                contentDescription = feature.title,
                tint = Color.White,
                modifier = Modifier.size(iconSize)
            )
        }
        
        Spacer(modifier = Modifier.width(16.dp))
        
        Column {
            Text(
                text = feature.title,
                fontSize = titleFontSize,
                fontWeight = FontWeight.Bold,
                color = Color.White
            )
            Text(
                text = feature.description,
                fontSize = descFontSize,
                color = Color(0xFFB9B9C3)
            )
        }
    }
}

@Composable
fun Screen2ActionButtonsSection(
    onSetDefaultClick: () -> Unit,
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
        Button(
            onClick = onSetDefaultClick,
            modifier = Modifier
                .fillMaxWidth()
                .height(buttonHeight),
            colors = ButtonDefaults.buttonColors(
                containerColor = Color(0xFF6366F1)
            ),
            shape = RoundedCornerShape(12.dp)
        ) {
            Row(
                verticalAlignment = Alignment.CenterVertically
            ) {
                Icon(
                    imageVector = Icons.Default.Settings,
                    contentDescription = "Settings",
                    tint = Color.White,
                    modifier = Modifier.size(20.dp)
                )
                
                Spacer(modifier = Modifier.width(8.dp))
                
                Text(
                    text = "SET AS DEFAULT LAUNCHER",
                    fontSize = fontSize,
                    fontWeight = FontWeight.Bold,
                    color = Color.White
                )
            }
        }
        
        Spacer(modifier = Modifier.height(16.dp))
        
        Text(
            text = "This will set Arc Launcher as your default home screen",
            fontSize = 12.sp,
            color = Color(0xFF9CA3AF),
            textAlign = TextAlign.Center
        )
    }
}

data class FeatureItem(
    val icon: ImageVector,
    val title: String,
    val description: String
)
