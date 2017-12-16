//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef LauncherScene_h
#define LauncherScene_h
#include "cocos2d.h"
#include "BaseScene.h"
class LauncherScene : public BaseScene {
   public:
    static const int SCENE_ID = 1;
    LauncherScene();
    virtual ~LauncherScene();
    cocos2d::Scene* create() override;
};
#endif
