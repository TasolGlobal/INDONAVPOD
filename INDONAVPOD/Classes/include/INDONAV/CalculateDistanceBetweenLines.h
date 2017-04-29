//
//  CalculateDistanceBetweenLines.h
//  BeaconsHeatmap
//
//  Created by tasol on 7/12/16.
//  Copyright © 2016 Citrusbyte LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NodeShare.h"


@interface CalculateDistanceBetweenLines : NSObject


+ (CalculateDistanceBetweenLines *)sharedSingleton;
@property (nonatomic, retain)NSMutableArray *AllPathNodes;
@property (nonatomic, retain)NSMutableArray *SelectedPathNodes;
-(CGPoint) getNewLineCoordinate :(CGPoint)p :(NSMutableArray *)ary;
-(CGPoint) getNewPointCoordinate :(CGPoint)p :(NSMutableArray *)ary;
-(NodeShare *) getNearestPOINode :(CGPoint)p :(NSMutableArray *)ary;
-(NSMutableArray *) getNearestPOINodes :(CGPoint)p :(NSMutableArray *)ary;
-(double)distance :(CGPoint) p1 :(CGPoint)p2;
-(double)slope:(CGPoint) p1 :(CGPoint)p2;
-(double)intercept:(CGPoint) p1 :(float)slope;
- (int) compareF: (float) number1 :(float) number2;

-(CGPoint) getNearestPointCoordinate :(CGPoint)p :(NSMutableArray *)ary;
@end
