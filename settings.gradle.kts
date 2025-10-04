pluginManagement {
    repositories {
        google {
            content {
                includeGroupByRegex("com\\.android.*")
                includeGroupByRegex("com\\.google.*")
                includeGroupByRegex("androidx.*")
            }
        }
        mavenCentral()
        gradlePluginPortal()
    }
}
dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google()
        mavenCentral()
        maven { url("https://artifact.bytedance.com/repository/pangle/") }
        maven { url("https://dl-maven-android.mintegral.com/repository/mbridge_android_sdk_oversea") }
        maven { url("https://maven.singular.net/repository/maven/releases") }
        maven { url("https://maven-android.solar-engine.com/repository/se_sdk_for_android/") }
        // Provide local AARs from the Unity export
        flatDir {
            dirs(file("Brainrot_exportV5/unityLibrary/libs"))
        }
    }
}

rootProject.name = "Launcher"
include(":app")
// Include Unity export modules
include(":unityLibrary")
include(":unityLibrary:FirebaseApp.androidlib")
include(":unityLibrary:GoogleMobileAdsPlugin.androidlib")

// Point included modules to the Unity export locations
project(":unityLibrary").projectDir = file("Brainrot_exportV5/unityLibrary")
project(":unityLibrary:FirebaseApp.androidlib").projectDir =
    file("Brainrot_exportV5/unityLibrary/FirebaseApp.androidlib")
project(":unityLibrary:GoogleMobileAdsPlugin.androidlib").projectDir =
    file("Brainrot_exportV5/unityLibrary/GoogleMobileAdsPlugin.androidlib")
