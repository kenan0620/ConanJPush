//
//  AppDelegate+JPush.h
//  ConanJPush
//
//  Created by Conan on 2017/4/10.
//  Copyright © 2017年 Conan. All rights reserved.
//

#import "AppDelegate.h"
#import <JPUSHService.h>
// iOS10注册APNs所需头文件
#ifdef NSFoundationVersionNumber_iOS_9_x_Max
#import <UserNotifications/UserNotifications.h>
#endif

static NSString *pushAppKey = @"AppKey";
static NSString *pushChannel = @"Channel";
static BOOL isProduction = true;
@interface AppDelegate (JPush)<JPUSHRegisterDelegate>
/**
 *  激光推送单类
 *
 *  @param application   应用
 *  @param launchOptions 需要传入的launchOptions
 */
-(void)registerJPush:(UIApplication *)application options:(NSDictionary *)launchOptions;
@end
