//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#include "PluginScene.h"
#include "LayerFactory.h"
PluginScene::PluginScene() {}
PluginScene::~PluginScene() {}
cocos2d::Scene* PluginScene::create(int layerId) {
    cocos2d::Scene* scene = cocos2d::Scene::create();
    cocos2d::Layer* layer = LayerFactory::factoryMethod(layerId);
    scene->addChild(layer);
    return scene;
}
