//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef WEBVIEWPLUGIN_H
#define WEBVIEWPLUGIN_H
#include <string>
#include "BasePlugin.h"
class WebViewPlugin : BasePlugin {
   public:
    WebViewPlugin();
    virtual ~WebViewPlugin();
    void show(std::string requestUrl, float left, float top, float right, float bottom);
    void hide();
};
#endif  // WEBVIEWPLUGIN_H
