//
//  BarChartVC.h
//  Chart
//
//  Created by Nguyen Chi Cong on 10/2/12.
//  Copyright (c) 2012 HUT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BarChartVC : UIViewController <CPTBarPlotDataSource, CPTBarPlotDelegate>

@property (nonatomic, strong) IBOutlet CPTGraphHostingView *hostView;
@property (nonatomic, strong) CPTBarPlot *aaplPlot;
@property (nonatomic, strong) CPTBarPlot *googPlot;
//@property (nonatomic, strong) CPTBarPlot *msftPlot;
@property (nonatomic, strong) CPTPlotSpaceAnnotation *priceAnnotation;

-(void)initPlot;
-(void)configureGraph;
-(void)configurePlots;
-(void)configureAxes;
-(void)hideAnnotation:(CPTGraph *)graph;

@end
