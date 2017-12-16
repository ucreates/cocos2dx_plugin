//======================================================================
// Project Name    : cocos2dx plugin
//
// Copyright © 2017 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
package com.frontend.activity;
import android.app.Activity;
import org.cocos2dx.lib.Cocos2dxHelper;
public class ActivityAndroidPlugin {
    public static final int ACTIVITY_ID = 1;
    public static Activity getInstance() {
        return Cocos2dxHelper.getActivity();
    }
}
