# Cocos2dx Plugin
the project is iOS / Android plugin for [Cocos2d-x](http://www.cocos2d-x.org/).

## Description
the project is develoed by Cocos2d-x(3.10),Xcode(9.2),Android Studio(2.2.2),

iOS plugin supported iOS10.0 Later.

Android plugin supported Android 4.3(JELLY_BEAN_MR2/API Level 18) Later.

## Usage
***Notes on use for iOS***

1.build [cocos2dx_ios_plugin](https://github.com/ucreates/cocos2dx_plugin/tree/master/cocos2dx_ios_plugin) or copy [Cocos2dxiOSPlugin.framework](https://github.com/ucreates/cocos2dx_plugin/tree/master/cocos2dx_plugin/proj.ios_mac/ios/frameworks/) to your cocos2d-x ios project.

2.open your cocos2d-x ios project in Xcode. and should to D&D Cocos2dxiOSPlugin.framework to General→Embedded Binaries.

3.you should to change Xcode settings.

 - Architectures→Build Architecture Only:Debug/Release→Yes

 - Architectures→Supported Platform:iphoneos→iOS
 
 - Build Settings→Always Embed Swift Standard Libraries→YES

 - Generarl→Deployment Info→Deployment Target→iOS10.

4.you should to change C++ source type C++ to Objective-C++ in [following directory](https://github.com/ucreates/cocos2dx_plugin/tree/master/cocos2dx_plugin/Classes/plugins)

5.build your cocos2dx ios project with Xcode.

***Notes on use for Android***

1.build [cocos2dx_android_plugin](https://github.com/ucreates/cocos2dx_plugin/tree/master/cocos2dx_android_plugin) or copy [Cocos2dxAndroidPlugin.jar](https://github.com/ucreates/cocos2dx_plugin/tree/master/cocos2dx_plugin/proj.android-studio/app/libs) to your cocos2d-x android project [following directory](https://github.com/ucreates/cocos2dx_plugin/tree/master/cocos2dx_plugin/proj.android-studio/app/libs)

2.build cocos2d-x android project with cocos command for Android Studio.

    cocos compile -s /path/to/your/cocos2d-x android project -p android --android-studio
