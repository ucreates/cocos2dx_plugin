//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#include "WebViewPlugin.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#import <Cocos2dxiOSPlugin/Cocos2dxiOSPlugin-Swift.h>
WebViewiOSPlugin* webViewiOSPlugin;
#endif
WebViewPlugin::WebViewPlugin() : BasePlugin("com/frontend/view/WebViewAndroidPlugin", "()V") {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    webViewiOSPlugin = [WebViewiOSPlugin alloc];
#elif(CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    JNIEnv* env = cocos2d::JniHelper::getEnv();
    jobject obj = env->NewObject(this->classId, this->constructorId);
    this->instance = env->NewGlobalRef(obj);
    env->DeleteLocalRef(obj);
#endif
}
WebViewPlugin::~WebViewPlugin() {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    webViewiOSPlugin = nil;
#endif
}
void WebViewPlugin::show(std::string requestUrl, float left, float top, float right, float bottom) {
    if (false == this->enable) {
        return;
    }
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    NSString* url = [NSString stringWithCString:requestUrl.c_str() encoding:NSUTF8StringEncoding];
    [webViewiOSPlugin create:url left:left top:top right:right bottom:bottom];
    [webViewiOSPlugin show];
#elif(CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    JNIEnv* env = cocos2d::JniHelper::getEnv();
    jstring url = env->NewStringUTF(requestUrl.c_str());
    jmethodID createMethodId = env->GetMethodID(this->classId, "create", "(Ljava/lang/String;IIII)V");
    jmethodID showMethodId = env->GetMethodID(this->classId, "show", "()V");
    env->CallVoidMethod(this->instance, createMethodId, url, (jint)left, (jint)top, (jint)right, (jint)bottom);
    env->CallVoidMethod(this->instance, showMethodId);
    env->DeleteLocalRef(url);
#endif
    this->enable = false;
    return;
}
void WebViewPlugin::hide() {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    [webViewiOSPlugin hide];
    [webViewiOSPlugin destroy];
#elif(CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    JNIEnv* env = cocos2d::JniHelper::getEnv();
    jmethodID hideMethodId = env->GetMethodID(this->classId, "hide", "()V");
    jmethodID destroyMethodId = env->GetMethodID(this->classId, "destroy", "()V");
    env->CallVoidMethod(this->instance, hideMethodId);
    env->CallVoidMethod(this->instance, destroyMethodId);
#endif
    this->enable = true;
    return;
}
