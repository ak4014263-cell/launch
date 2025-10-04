package com.example.launcher

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.*
import androidx.compose.material3.*
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun OnboardingScreen1(onStartNowClick: () -> Unit) {
    BoxWithConstraints(
        modifier = Modifier
            .fillMaxSize()
            .background(
                Brush.verticalGradient(
                    listOf(Color(0xFF1A1A2E), Color(0xFF16213E))
                )
            )
    ) {
        val screenHeight = maxHeight
        val screenWidth = maxWidth
        val isLandscape = screenWidth > screenHeight
        val isTablet = screenWidth > 600.dp

        val horizontalPadding = screenWidth * 0.05f
        val verticalPadding = screenHeight * 0.04f
        val scrollState = rememberScrollState()

        if (isLandscape && isTablet) {
            // ✅ Tablet Landscape
            Row(
                modifier = Modifier
                    .fillMaxSize()
                    .padding(horizontal = horizontalPadding, vertical = verticalPadding),
                verticalAlignment = Alignment.CenterVertically
            ) {
                Column(
                    modifier = Modifier.weight(1f),
                    horizontalAlignment = Alignment.CenterHorizontally
                ) {
                    NewTitleSection(screenHeight, screenWidth)
                    Spacer(modifier = Modifier.height(screenHeight * 0.04f))
                    NewFeatureList(screenHeight, screenWidth)
                }
                Spacer(modifier = Modifier.width(screenWidth * 0.06f))
                Column(
                    modifier = Modifier.weight(1f),
                    horizontalAlignment = Alignment.CenterHorizontally
                ) {
                    NewVisualSection(screenHeight, screenWidth)
                    Spacer(modifier = Modifier.height(screenHeight * 0.04f))
                    NewStartButtonSection(onStartNowClick, screenHeight, screenWidth, isTablet)
                }
            }
        } else {
            // ✅ Portrait & Phone Landscape (scrollable if needed)
            Column(
                modifier = Modifier
                    .fillMaxSize()
                    .padding(horizontal = horizontalPadding, vertical = verticalPadding)
                    .verticalScroll(scrollState),
                horizontalAlignment = Alignment.CenterHorizontally
            ) {
                Spacer(modifier = Modifier.height(screenHeight * 0.05f))
                NewVisualSection(screenHeight, screenWidth)
                Spacer(modifier = Modifier.height(screenHeight * 0.05f))
                NewTitleSection(screenHeight, screenWidth)
                Spacer(modifier = Modifier.height(screenHeight * 0.05f))
                NewFeatureList(screenHeight, screenWidth)
                Spacer(modifier = Modifier.weight(1f, fill = false))
                NewStartButtonSection(onStartNowClick, screenHeight, screenWidth, isTablet)
                Spacer(modifier = Modifier.height(screenHeight * 0.05f))
            }
        }
    }
}

@Composable
fun NewVisualSection(screenHeight: Dp, screenWidth: Dp) {
    val size = screenWidth * 0.4f

    Box(modifier = Modifier.size(size), contentAlignment = Alignment.Center) {
        Box(
            modifier = Modifier
                .size(size)
                .clip(CircleShape)
                .background(
                    Brush.radialGradient(
                        listOf(
                            Color(0xFF6366F1).copy(alpha = 0.3f),
                            Color(0xFF8B5CF6).copy(alpha = 0.1f)
                        )
                    )
                )
        )
        Column(horizontalAlignment = Alignment.CenterHorizontally) {
            Icon(
                imageVector = Icons.Default.PhoneAndroid,
                contentDescription = "Phone",
                tint = Color.White,
                modifier = Modifier.size(size * 0.4f)
            )
            Spacer(modifier = Modifier.height(size * 0.05f))
            Text(
                text = "Launcher",
                fontSize = (screenWidth * 0.06f).value.sp,
                color = Color.White,
                fontWeight = FontWeight.Bold
            )
        }
    }
}

@Composable
fun NewTitleSection(screenHeight: Dp, screenWidth: Dp) {
    val titleFontSize = (screenWidth * 0.08f).value.sp
    val subtitleFontSize = (screenWidth * 0.045f).value.sp

    Column(horizontalAlignment = Alignment.CenterHorizontally) {
        Text("Welcome to", fontSize = subtitleFontSize, color = Color(0xFF9CA3AF))
        Spacer(modifier = Modifier.height(screenHeight * 0.01f))
        Text("Arc Launcher", fontSize = titleFontSize, fontWeight = FontWeight.Bold, color = Color.White)
        Spacer(modifier = Modifier.height(screenHeight * 0.02f))
        Text(
            text = "Transform your Android experience with our powerful, customizable launcher",
            fontSize = subtitleFontSize,
            color = Color(0xFF9CA3AF),
            textAlign = TextAlign.Center,
            lineHeight = (subtitleFontSize * 1.4f)
        )
    }
}

@Composable
fun NewFeatureList(screenHeight: Dp, screenWidth: Dp) {
    val features = listOf(
        NewFeatureItem(Icons.Default.Speed, "Lightning Fast", "Optimized for speed and performance"),
        NewFeatureItem(Icons.Default.Palette, "Beautiful Design", "Modern UI with stunning visuals"),
        NewFeatureItem(Icons.Default.Settings, "Highly Customizable", "Personalize every aspect of your launcher")
    )
    val spacing = screenHeight * 0.03f

    Column(verticalArrangement = Arrangement.spacedBy(spacing)) {
        features.forEach { NewFeatureItemView(it, screenHeight, screenWidth) }
    }
}

@Composable
fun NewFeatureItemView(feature: NewFeatureItem, screenHeight: Dp, screenWidth: Dp) {
    val iconSize = screenWidth * 0.07f
    val titleFontSize = (screenWidth * 0.045f).value.sp
    val descFontSize = (screenWidth * 0.04f).value.sp

    Row(verticalAlignment = Alignment.CenterVertically, modifier = Modifier.fillMaxWidth()) {
        Box(
            modifier = Modifier
                .size(screenWidth * 0.13f)
                .clip(CircleShape)
                .background(Color(0xFF6366F1).copy(alpha = 0.2f)),
            contentAlignment = Alignment.Center
        ) {
            Icon(feature.icon, contentDescription = feature.title, tint = Color(0xFF6366F1), modifier = Modifier.size(iconSize))
        }
        Spacer(modifier = Modifier.width(screenWidth * 0.04f))
        Column {
            Text(feature.title, fontSize = titleFontSize, fontWeight = FontWeight.Bold, color = Color.White)
            Text(feature.description, fontSize = descFontSize, color = Color(0xFF9CA3AF))
        }
    }
}

@Composable
fun NewStartButtonSection(onStartNowClick: () -> Unit, screenHeight: Dp, screenWidth: Dp, isTablet: Boolean) {
    val buttonHeight = screenHeight * 0.08f
    val fontSize = (screenWidth * 0.045f).value.sp
    val buttonWidthFraction = if (isTablet) 0.6f else 0.9f

    Column(horizontalAlignment = Alignment.CenterHorizontally, modifier = Modifier.fillMaxWidth()) {
        Button(
            onClick = onStartNowClick,
            modifier = Modifier
                .fillMaxWidth(buttonWidthFraction)
                .height(buttonHeight),
            colors = ButtonDefaults.buttonColors(containerColor = Color(0xFF6366F1)),
            shape = RoundedCornerShape(16.dp)
        ) {
            Text("GET STARTED", fontSize = fontSize, fontWeight = FontWeight.Bold, color = Color.White)
        }
        Spacer(modifier = Modifier.height(screenHeight * 0.02f))
        Text(
            text = "By continuing, you agree to our Terms of Service and Privacy Policy",
            fontSize = (screenWidth * 0.03f).value.sp,
            color = Color(0xFF9CA3AF),
            textAlign = TextAlign.Center
        )
    }
}

data class NewFeatureItem(val icon: ImageVector, val title: String, val description: String)
