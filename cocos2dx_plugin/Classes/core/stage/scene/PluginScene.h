//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef PluginScene_h
#define PluginScene_h
#include "cocos2d.h"
#include "BaseScene.h"
class PluginScene : public BaseScene {
   public:
    static const int SCENE_ID = 2;
    PluginScene();
    virtual ~PluginScene();
    cocos2d::Scene* create(int layerId) override;
};
#endif /* PluginScene_h */
