//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef BasePlugin_h
#define BasePlugin_h
#include "cocos2d.h"
class BasePlugin {
   public:
    BasePlugin(const char* className, const char* signeture);
    virtual ~BasePlugin();
   protected:
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    jclass classId;
    jmethodID constructorId;
    jobject instance;
#endif
    bool enable;
};
#endif /* BasePlugin_h */
