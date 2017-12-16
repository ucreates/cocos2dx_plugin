//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef WebViewPluginLayer_h
#define WebViewPluginLayer_h
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BaseLayer.h"
#include "WebViewPlugin.h"
class WebViewPluginLayer : public BaseLayer {
   public:
    static const int LAYER_ID = 0;
    bool init() override;
    void onShowButtonClick(Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void onHideButtonClick(Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void onExit() override;
    CREATE_FUNC(WebViewPluginLayer);
   private:
    WebViewPlugin* plugin;
};
#endif /* WebViewPluginLayer_h */
