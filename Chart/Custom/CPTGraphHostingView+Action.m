//
//  CPTGraphHostingView+Action.m
//  Chart
//
//  Created by Nguyen Chi Cong on 10/2/12.
//  Copyright (c) 2012 HUT. All rights reserved.
//

#import "CPTGraphHostingView+Action.h"

@implementation CPTGraphHostingView(Action)

//-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    CGPoint activePoint = [[touches anyObject] locationInView:self];
//    
//    CPTLegend *legend = self.hostedGraph.legend;
//    CGRect legendFrame = [legend frame];
//    CGFloat y = self.frame.size.height - legendFrame.origin.y - legendFrame.size.height;
//    legendFrame.origin.y = y;
//    //NSLog(@"%@", legend);
//    //NSLog(@"FRAME = %f %f %f %f", legendFrame.origin.x, legendFrame.origin.y,legendFrame.size.width, legendFrame.size.height);
//    NSUInteger numOfRows = legend.numberOfRows;
//    
//    if([self checkPoint:activePoint inFrame:legendFrame])
//    {
//        NSUInteger index = (activePoint.y - legendFrame.origin.y)/(legendFrame.size.height/numOfRows);
//        NSLog(@"IN %i", index);
//        NSDictionary *options = [NSDictionary dictionaryWithObjectsAndKeys:[NSNumber numberWithInt:index], @"index", nil];
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"TouchPlot" object:self userInfo:options];
//    }else
//    {
//        NSLog(@"OUT");
//    }
//    
//    //NSLog(@"TOUCH = %f x %f", activePoint.x, activePoint.y);
//}

-(BOOL)checkPoint:(CGPoint)point inFrame:(CGRect)frame
{
    
    if(point.x > frame.origin.x &&
       point.x < (frame.origin.x + frame.size.width) &&
       point.y > frame.origin.y &&
       point.y < frame.origin.y + frame.size.height)
    {
        return YES;
    }else
        return NO;
}

@end
