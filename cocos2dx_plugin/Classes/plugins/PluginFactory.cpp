//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#include "PluginFactory.h"
#include "WebViewPlugin.h"
template <typename T>
T* PluginFactory::getPlugin() {
    return new T();
}
template WebViewPlugin* PluginFactory::getPlugin<WebViewPlugin>();
