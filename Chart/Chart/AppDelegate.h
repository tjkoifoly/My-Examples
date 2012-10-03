//
//  AppDelegate.h
//  Chart
//
//  Created by Nguyen Chi Cong on 10/2/12.
//  Copyright (c) 2012 HUT. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;
@class BarChartVC;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) RootViewController *rootViewController;
@property (strong, nonatomic) BarChartVC *barChartVC;

@end
