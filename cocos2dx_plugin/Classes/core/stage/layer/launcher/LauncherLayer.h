//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef LauncherLayer_h
#define LauncherLayer_h
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BaseLayer.h"
class LauncherLayer : public BaseLayer {
   public:
    static const int LAYER_ID = 99;
    bool init() override;
    void onClick(Ref* sender, cocos2d::ui::ListView::EventType type);
    void onExit() override;
    CREATE_FUNC(LauncherLayer);
};
#endif
