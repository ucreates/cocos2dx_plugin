//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef BaseLayer_h
#define BaseLayer_h
#include "cocos2d.h"
class BaseLayerBuilder;
class BaseLayer : public cocos2d::Layer {
   public:
    BaseLayer();
    void onExit() override;
};
#endif
