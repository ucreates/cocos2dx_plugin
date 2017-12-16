//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#include "LauncherScene.h"
#include "LauncherLayer.h"
#include "LayerFactory.h"
LauncherScene::LauncherScene() {}
LauncherScene::~LauncherScene() {}
cocos2d::Scene* LauncherScene::create() {
    cocos2d::Scene* scene = cocos2d::Scene::create();
    cocos2d::Layer* layer = LayerFactory::factoryMethod(LauncherLayer::LAYER_ID);
    scene->addChild(layer);
    return scene;
}
