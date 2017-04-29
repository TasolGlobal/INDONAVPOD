//
//  BeaconsMap.h
//  BeaconsHeatmap
//
//  Created by Luis Floreani on 1/23/15.
//  Copyright (c) 2015 Citrusbyte LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CBEstimationMethod.h"

@class CBBeaconsMap;

@protocol CBBeaconsMapDelegate
// array of CGPoints
- (void)beaconMap:(CBBeaconsMap *)beaconMap lastMeasuredPoints:(NSArray *)points;

// array of CBBeacon
- (void)beaconMap:(CBBeaconsMap *)beaconMap beaconsPropertiesChanged:(NSArray *)beacons;
-(void)estimatedPositionUpdated :(CGPoint)center;
@end

@interface CBBeaconsMap : UIView
{
    
    UIImage *image;
    CGPoint newAvg;

}
@property(nonatomic,retain)UIImage *image;
@property(nonatomic,retain) UIImageView *myImageView;
@property(nonatomic) CGPoint estimatedPosition;
@property CGSize physicalSize;

@property (weak) id<CBBeaconsMapDelegate> delegate;

@property NSMutableArray *beacons;

@property CBEstimationMethod method;

@property CBDrawMethod drawMethod;

@property double zoomscale;
// will look for updates
- (void)updateBeacons;
- (void)NewupdateBeacons:(NSArray *)sortedArray;

// to clean any noise cancelling history
- (void)resetPreviousData;

- (CGRect)pixelRoomRect;

@property (nonatomic) double x_scale ;
@property (nonatomic) double y_scale ;


@end
