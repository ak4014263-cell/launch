package com.example.launcher

import androidx.compose.foundation.background
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
fun OnboardingScreen3(
    onGetStartedClick: () -> Unit,
    onBackClick: () -> Unit,
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
                        Color(0xFFEC4899), // Pink-500
                        Color(0xFF10B981)  // Green-500
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
            
            // Icon section
            Screen3IconSection(screenHeight = screenHeight)
            
            Spacer(modifier = Modifier.height(if (screenHeight < 600.dp) 16.dp else 32.dp))
            
            // Title and subtitle
            Screen3TitleSection(screenHeight = screenHeight)
            
            Spacer(modifier = Modifier.height(if (screenHeight < 600.dp) 16.dp else 32.dp))
            
            // Benefits list
            BenefitsList(screenHeight = screenHeight)
            
            Spacer(modifier = Modifier.weight(1f))
            
            // Action buttons
            Screen3ActionButtonsSection(
                onGetStartedClick = onGetStartedClick,
                onBackClick = onBackClick,
                onSkipToGameClick = onSkipToGameClick,
                screenHeight = screenHeight
            )
            
            Spacer(modifier = Modifier.height(if (screenHeight < 600.dp) 16.dp else 32.dp))
        }
    }
}

@Composable
fun Screen3IconSection(screenHeight: androidx.compose.ui.unit.Dp) {
    val iconSize = if (screenHeight < 600.dp) 80.dp else 120.dp
    
    Box(
        modifier = Modifier
            .size(iconSize)
            .clip(CircleShape)
            .background(Color.White.copy(alpha = 0.2f)),
        contentAlignment = Alignment.Center
    ) {
        Icon(
            imageVector = Icons.Default.RocketLaunch,
            contentDescription = "Rocket Launch",
            tint = Color.White,
            modifier = Modifier.size(iconSize * 0.6f)
        )
    }
}

@Composable
fun Screen3TitleSection(screenHeight: androidx.compose.ui.unit.Dp) {
    val titleFontSize = if (screenHeight < 600.dp) 24.sp else 28.sp
    val subtitleFontSize = if (screenHeight < 600.dp) 16.sp else 18.sp
    
    Column(
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Text(
            text = "YOU'RE ALL SET!",
            fontSize = titleFontSize,
            fontWeight = FontWeight.Bold,
            color = Color.White,
            textAlign = TextAlign.Center
        )
        
        Spacer(modifier = Modifier.height(8.dp))
        
        Text(
            text = "Your personalized launcher is ready to transform your phone experience",
            fontSize = subtitleFontSize,
            color = Color(0xFFB9B9C3),
            textAlign = TextAlign.Center
        )
    }
}

@Composable
fun BenefitsList(screenHeight: androidx.compose.ui.unit.Dp) {
    val benefits = listOf(
        BenefitItem(
            icon = Icons.Default.CheckCircle,
            title = "Optimized Performance",
            description = "Smooth and fast launcher experience"
        ),
        BenefitItem(
            icon = Icons.Default.Security,
            title = "Privacy Focused",
            description = "Your data stays on your device"
        ),
        BenefitItem(
            icon = Icons.Default.Update,
            title = "Regular Updates",
            description = "Always get the latest features"
        )
    )
    
    val itemSpacing = if (screenHeight < 600.dp) 12.dp else 16.dp
    
    Column(
        verticalArrangement = Arrangement.spacedBy(itemSpacing)
    ) {
        benefits.forEach { benefit ->
            BenefitListItem(benefit = benefit, screenHeight = screenHeight)
        }
    }
}

@Composable
fun BenefitListItem(
    benefit: BenefitItem,
    screenHeight: androidx.compose.ui.unit.Dp
) {
    val iconSize = if (screenHeight < 600.dp) 20.dp else 24.dp
    val titleFontSize = if (screenHeight < 600.dp) 14.sp else 16.sp
    val descFontSize = if (screenHeight < 600.dp) 12.sp else 14.sp
    
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
                imageVector = benefit.icon,
                contentDescription = benefit.title,
                tint = Color.White,
                modifier = Modifier.size(iconSize)
            )
        }
        
        Spacer(modifier = Modifier.width(16.dp))
        
        Column {
            Text(
                text = benefit.title,
                fontSize = titleFontSize,
                fontWeight = FontWeight.Bold,
                color = Color.White
            )
            Text(
                text = benefit.description,
                fontSize = descFontSize,
                color = Color(0xFFB9B9C3)
            )
        }
    }
}

@Composable
fun Screen3ActionButtonsSection(
    onGetStartedClick: () -> Unit,
    onBackClick: () -> Unit,
    onSkipToGameClick: () -> Unit,
    screenHeight: androidx.compose.ui.unit.Dp
) {
    val buttonHeight = if (screenHeight < 600.dp) 48.dp else 56.dp
    val fontSize = if (screenHeight < 600.dp) 16.sp else 18.sp
    
    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        modifier = Modifier.fillMaxWidth()
    ) {
        Button(
            onClick = onGetStartedClick,
            modifier = Modifier
                .fillMaxWidth()
                .height(buttonHeight),
            colors = ButtonDefaults.buttonColors(
                containerColor = Color(0xFF28C76F) // Primary green
            ),
            shape = RoundedCornerShape(12.dp)
        ) {
            Text(
                text = "GET STARTED",
                fontSize = fontSize,
                fontWeight = FontWeight.Bold,
                color = Color.White
            )
        }
        
        Spacer(modifier = Modifier.height(12.dp))
        
        // Skip to game button
        Button(
            onClick = onSkipToGameClick,
            modifier = Modifier
                .fillMaxWidth()
                .height(buttonHeight),
            colors = ButtonDefaults.buttonColors(
                containerColor = Color(0xFF10B981)
            ),
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
        
        Spacer(modifier = Modifier.height(12.dp))
        
        TextButton(
            onClick = onBackClick,
            modifier = Modifier.fillMaxWidth()
        ) {
            Text(
                text = "Go Back",
                fontSize = fontSize,
                color = Color.White.copy(alpha = 0.8f)
            )
        }
    }
}

data class BenefitItem(
    val icon: ImageVector,
    val title: String,
    val description: String
)
