# Arc Launcher

A modern, customizable Android launcher inspired by the Figma design with Material Design 3 and Jetpack Compose.

## Features

### 🎨 Modern UI Design
- **Material Design 3** components with custom Arc theme
- **Dark theme** with purple/blue gradient accents
- **Smooth animations** and transitions
- **Edge-to-edge** display support

### 📱 Core Launcher Features
- **Home Screen** with app grid and quick access
- **App Drawer** with categorized apps and search
- **Widget System** with clock, weather, and quick actions
- **Search Functionality** across all installed apps
- **Settings** with customization options

### 🚀 Technical Features
- **Jetpack Compose** for modern UI
- **Material Design 3** components
- **Smooth animations** with Compose Animation
- **App categorization** (Social, Games, Productivity, etc.)
- **Real-time search** with filtering
- **Responsive design** for different screen sizes

## Architecture

### Activities
- `MainActivity` - Main launcher home screen
- `AppDrawerActivity` - App drawer with categories
- `WidgetsActivity` - Widget management and customization
- `SettingsActivity` - Launcher settings and preferences
- `OnboardingActivity` - First-time setup flow

### Key Components
- **App Grid** - Displays installed apps in customizable grid
- **Search Bar** - Real-time app search with filtering
- **Category Tabs** - Organize apps by category
- **Widget Cards** - Interactive widgets for home screen
- **Bottom Navigation** - Quick access to main features

## Design System

### Colors
```kotlin
// Primary Colors
arc_primary: #6366F1 (Purple)
arc_secondary: #EC4899 (Pink)

// Background Colors
arc_background: #0F0F23 (Dark Blue)
arc_surface: #1A1A2E (Darker Blue)

// Accent Colors
arc_accent: #10B981 (Green)
arc_warning: #F59E0B (Orange)
```

### Typography
- **Headings**: 28sp, Bold
- **Body**: 16sp, Regular
- **Captions**: 12sp, Medium

## Installation

1. Clone the repository
2. Open in Android Studio
3. Sync Gradle files
4. Build and run on device/emulator

## Usage

### Setting as Default Launcher
1. Complete the onboarding flow
2. Grant necessary permissions
3. Set as default launcher when prompted

### Customization
- **App Icons**: Automatically categorized by app type
- **Widgets**: Add clock, weather, and quick action widgets
- **Settings**: Customize appearance and behavior
- **Search**: Find apps quickly with real-time search

## Permissions

The launcher requires the following permissions:
- `ACCESS_FINE_LOCATION` - For location-based widgets
- `READ_SMS` - For SMS-related features
- `READ_EXTERNAL_STORAGE` - For media access
- `READ_MEDIA_IMAGES` - For image widgets
- `READ_MEDIA_VIDEO` - For video widgets

## Dependencies

### Core
- **AndroidX Core KTX**
- **Material Design 3**
- **Jetpack Compose**
- **Navigation Compose**

### UI Components
- **RecyclerView** for app lists
- **ConstraintLayout** for complex layouts
- **Glide** for image loading
- **Lottie** for animations

## Development

### Project Structure
```
app/src/main/java/com/example/launcher/
├── MainActivity.kt              # Main launcher screen
├── AppDrawerActivity.kt         # App drawer with categories
├── WidgetsActivity.kt           # Widget management
├── SettingsActivity.kt          # Settings and preferences
├── OnboardingActivity.kt        # First-time setup
└── ui/theme/                    # Compose theme system
    ├── Color.kt
    ├── Theme.kt
    └── Type.kt
```

### Key Features Implementation

#### App Categorization
Apps are automatically categorized based on package names:
- **Social**: WhatsApp, Telegram, Instagram, etc.
- **Games**: Game-related packages
- **Productivity**: Office apps, note-taking apps
- **Entertainment**: Media players, streaming apps
- **Communication**: Phone, SMS, email apps
- **Utilities**: System and utility apps

#### Search Functionality
- Real-time filtering as user types
- Searches app names and package names
- Case-insensitive search
- Instant results with smooth animations

#### Widget System
- **Clock Widget**: Real-time clock with date
- **Weather Widget**: Weather information display
- **Quick Actions**: Camera, call, messages, email shortcuts
- **Customizable**: Add/remove widgets from home screen

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Submit a pull request

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- **Figma Design**: Based on the Arc Launcher design
- **Material Design 3**: Google's design system
- **Jetpack Compose**: Modern Android UI toolkit
- **Android Community**: For inspiration and guidance

## Future Enhancements

- [ ] Custom app icons and themes
- [ ] Gesture navigation support
- [ ] Advanced widget customization
- [ ] Backup and restore settings
- [ ] Performance optimizations
- [ ] Accessibility improvements
