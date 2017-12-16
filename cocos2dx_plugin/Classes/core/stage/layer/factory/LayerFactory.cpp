//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#include "LayerFactory.h"
#include "LauncherLayer.h"
#include "WebViewPluginLayer.h"
cocos2d::Layer* LayerFactory::factoryMethod(int layerId) {
    cocos2d::Layer* layer = NULL;
    switch (layerId) {
        case LauncherLayer::LAYER_ID:
            layer = LauncherLayer::create();
            break;
        case WebViewPluginLayer::LAYER_ID:
            layer = WebViewPluginLayer::create();
            break;
        default:
            break;
    }
    return layer;
}
