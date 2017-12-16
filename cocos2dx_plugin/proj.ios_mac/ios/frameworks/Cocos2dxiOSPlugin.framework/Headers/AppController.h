//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#import <UIKit/UIKit.h>
@class RootViewController;
@interface AppController : NSObject<UIApplicationDelegate> {
    UIWindow* window;
}
@property(nonatomic, readonly) RootViewController* viewController;
@end
