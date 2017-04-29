//
//  CBBeaconsRanger.h
//  BeaconsHeatmap
//
//  Created by Luis Floreani on 2/17/15.
//  Copyright (c) 2015 Citrusbyte LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CBBeaconsRanger;

@protocol CBBeaconsRangerDelegate
// NSArray of CBSignal
- (void)beaconsRanger:(CBBeaconsRanger *)ranger didRangeBeacons:(NSArray *)signals;

//- (void)beaconsRanger:(CBBeaconsRanger *)ranger didRangeBeacons:(NSArray *)signals Beacons:(NSArray *)beacons;
@end

@interface CBBeaconsRanger : NSObject

@property (nonatomic, weak) id<CBBeaconsRangerDelegate> delegate;
@property NSString *uuid;

// array of NSNumber
@property(nonatomic,retain) NSArray *minorsFilter; // only log this minors
@property (nonatomic, readwrite) int scanduration;
- (BOOL)startRanging;
- (void)stopRanging;

@end
