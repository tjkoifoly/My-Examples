//
//  RootViewController.h
//  Chart
//
//  Created by Nguyen Chi Cong on 10/2/12.
//  Copyright (c) 2012 HUT. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "CPTGraphHostingView+Action.h"

@interface RootViewController : UIViewController <CPTPlotDataSource, UIActionSheetDelegate>

@property (nonatomic, strong) CPTGraphHostingView *hostView;
@property (nonatomic, strong) CPTTheme *selectedTheme;

-(IBAction)themeTapped:(id)sender;
-(IBAction)testTapped:(id)sender;

-(void)initPlot;
-(void)configureHost;
-(void)configureGraph;
-(void)configureChart;
-(void)configureLegend;

@end
