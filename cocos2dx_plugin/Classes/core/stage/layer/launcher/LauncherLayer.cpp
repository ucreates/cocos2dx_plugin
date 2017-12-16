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
#include "LauncherLayer.h"
#include "PluginScene.h"
bool LauncherLayer::init() {
    if (false == Layer::init()) {
        return false;
    }
    cocos2d::FileUtils::getInstance()->addSearchPath("res");
    Node* node = cocos2d::CSLoader::createNode("scene/launcher/ui.csb");
    node->setScale(0.5f);
    node->setPosition(0, 0);
    cocos2d::ui::ListView* listView = node->getChildByName<cocos2d::ui::ListView*>("PluginListView");
    listView->addEventListener(CC_CALLBACK_2(LauncherLayer::onClick, this));
    this->addChild(node);
    return true;
}
void LauncherLayer::onExit() { BaseLayer::onExit(); }
void LauncherLayer::onClick(Ref* sender, cocos2d::ui::ListView::EventType type) {
    if (type != cocos2d::ui::ListView::EventType::ON_SELECTED_ITEM_START) {
        return;
    }
    cocos2d::ui::ListView* listView = static_cast<cocos2d::ui::ListView*>(sender);
    long selectedIndex = listView->getCurSelectedIndex();
    PluginScene* pluginScene = new PluginScene();
    cocos2d::Scene* scene = pluginScene->create(selectedIndex);
    cocos2d::Director* director = cocos2d::Director::getInstance();
    director->replaceScene(scene);
    return;
}
