//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AppController.h"
UIViewController* getRootViewController() {
    UIApplication* app = [UIApplication sharedApplication];
    AppController* appController = (AppController*)app.delegate;
    return (UIViewController*)appController.viewController;
}
