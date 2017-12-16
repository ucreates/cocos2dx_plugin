//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef PluginFactory_h
#define PluginFactory_h
class PluginFactory {
   public:
    PluginFactory();
    template <typename T>
    static T* getPlugin();
};
#endif /* PluginFactory_h */
