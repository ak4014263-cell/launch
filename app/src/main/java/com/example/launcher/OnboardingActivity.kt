package com.example.launcher

import android.content.Intent
import android.os.Bundle
import android.app.role.RoleManager
import android.content.Context
import android.os.Build
import androidx.activity.result.contract.ActivityResultContracts
import androidx.core.app.ActivityCompat
import android.content.pm.PackageManager
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.ui.Modifier
import androidx.compose.runtime.*
import com.example.launcher.ui.theme.ArcLauncherTheme

class OnboardingActivity : ComponentActivity() {

    private var currentScreen by mutableStateOf(0)
    private var continueOnboardingAfterPermission: Boolean = false

    private val roleRequestLauncher = registerForActivityResult(ActivityResultContracts.StartActivityForResult()) {
        // After returning from role request, move forward if we are still on page 2
        requestRuntimePermissions()
    }
    private val permissionsLauncher = registerForActivityResult(ActivityResultContracts.RequestMultiplePermissions()) { _ ->
        // After permissions flow, either continue onboarding or finish
        if (continueOnboardingAfterPermission) {
            currentScreen = 2
        } else {
            startActivity(Intent(this, MainActivity::class.java))
            finish()
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            ArcLauncherTheme {
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    OnboardingFlow()
                }
            }
        }
    }
    
    @Composable
    fun OnboardingFlow() {
        when (currentScreen) {
            0 -> OnboardingScreen1(
                onStartNowClick = {
                    currentScreen = 1
                }
            )
            1 -> OnboardingScreen2(
                onSetDefaultClick = {
                    continueOnboardingAfterPermission = true
                    requestSetDefaultLauncher()
                }
            )
            2 -> OnboardingScreen3(
                onGetStartedClick = {
                    currentScreen = 3
                },
                onBackClick = {
                    currentScreen = 1
                },
                onSkipToGameClick = {
                    continueOnboardingAfterPermission = false
                    requestSetDefaultLauncher()
                }
            )
            3 -> AppTracerScreen1(
                onContinueClick = {
                    currentScreen = 4
                },
                onSkipClick = {
                    continueOnboardingAfterPermission = false
                    requestSetDefaultLauncher()
                },
                onSkipToGameClick = {
                    continueOnboardingAfterPermission = false
                    requestSetDefaultLauncher()
                }
            )
            4 -> AppTracerScreen2(
                onContinueClick = {
                    continueOnboardingAfterPermission = false
                    requestSetDefaultLauncher()
                },
                onSkipClick = {
                    continueOnboardingAfterPermission = false
                    requestSetDefaultLauncher()
                }
            )
        }
    }

    private fun requestRuntimePermissions() {
        val permissions = mutableListOf<String>()
        permissions.add(android.Manifest.permission.ACCESS_FINE_LOCATION)
        if (Build.VERSION.SDK_INT >= 33) {
            permissions.add(android.Manifest.permission.READ_MEDIA_IMAGES)
            permissions.add(android.Manifest.permission.READ_MEDIA_VIDEO)
        } else {
            permissions.add(android.Manifest.permission.READ_EXTERNAL_STORAGE)
        }
        permissions.add(android.Manifest.permission.READ_SMS)

        val toRequest = permissions.filter {
            ActivityCompat.checkSelfPermission(this, it) != PackageManager.PERMISSION_GRANTED
        }
        if (toRequest.isEmpty()) {
            if (continueOnboardingAfterPermission) {
                currentScreen = 2
            } else {
                startActivity(Intent(this, MainActivity::class.java))
                finish()
            }
            return
        }
        permissionsLauncher.launch(toRequest.toTypedArray())
    }

    private fun requestSetDefaultLauncher() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            val roleManager = getSystemService(Context.ROLE_SERVICE) as RoleManager
            if (!roleManager.isRoleAvailable(RoleManager.ROLE_HOME)) {
                requestRuntimePermissions()
                return
            }
            if (roleManager.isRoleHeld(RoleManager.ROLE_HOME)) {
                requestRuntimePermissions()
                return
            }
            val intent = roleManager.createRequestRoleIntent(RoleManager.ROLE_HOME)
            roleRequestLauncher.launch(intent)
        } else {
            try {
                val intent = Intent(android.provider.Settings.ACTION_HOME_SETTINGS)
                roleRequestLauncher.launch(intent)
            } catch (e: Exception) {
                requestRuntimePermissions()
            }
        }
    }
}
