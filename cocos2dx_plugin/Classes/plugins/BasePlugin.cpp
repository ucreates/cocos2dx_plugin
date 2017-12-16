//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#include "BasePlugin.h"
BasePlugin::BasePlugin(const char* className, const char* signeture) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    JNIEnv* env = cocos2d::JniHelper::getEnv();
    jclass cId = env->FindClass(className);
    this->classId = (jclass)env->NewGlobalRef(cId);
    this->constructorId = env->GetMethodID(classId, "<init>", signeture);
#endif
    this->enable = true;
}
BasePlugin::~BasePlugin() {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    JNIEnv* env = cocos2d::JniHelper::getEnv();
    env->DeleteGlobalRef(this->classId);
    env->DeleteGlobalRef(this->instance);
#endif
}
