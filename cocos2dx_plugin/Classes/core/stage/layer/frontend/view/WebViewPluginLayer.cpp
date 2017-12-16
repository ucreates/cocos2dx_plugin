//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#include "cocostudio/CocoStudio.h"
#include "WebViewPluginLayer.h"
#include "PluginFactory.h"
bool WebViewPluginLayer::init() {
    if (false == Layer::init()) {
        return false;
    }
    cocos2d::FileUtils::getInstance()->addSearchPath("res");
    cocos2d::Node* node = cocos2d::CSLoader::createNode("scene/plugin/webview/ui.csb");
    node->setScale(0.5f);
    node->setPosition(0, 0);
    cocos2d::ui::Button* showButton = node->getChildByName<cocos2d::ui::Button*>("showButton");
    cocos2d::ui::Button* hideButton = node->getChildByName<cocos2d::ui::Button*>("hideButton");
    showButton->addTouchEventListener(CC_CALLBACK_2(WebViewPluginLayer::onShowButtonClick, this));
    hideButton->addTouchEventListener(CC_CALLBACK_2(WebViewPluginLayer::onHideButtonClick, this));
    this->addChild(node);
    return true;
}
void WebViewPluginLayer::onExit() { BaseLayer::onExit(); }
void WebViewPluginLayer::onShowButtonClick(Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
    if (type != cocos2d::ui::Widget::TouchEventType::BEGAN || NULL != this->plugin) {
        return;
    }
    this->plugin = PluginFactory::getPlugin<WebViewPlugin>();
    this->plugin->show("https://www.yahoo.co.jp/", 100.0f, 100.0f, 100.0f, 100.0f);
    return;
}
void WebViewPluginLayer::onHideButtonClick(Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
    if (type != cocos2d::ui::Widget::TouchEventType::BEGAN || NULL == this->plugin) {
        return;
    }
    this->plugin->hide();
    delete this->plugin;
    this->plugin = NULL;
    return;
}
