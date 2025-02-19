//
//  CBEstimationMethod.h
//  BeaconsHeatmap
//
//  Created by Luis Floreani on 2/18/15.
//  Copyright (c) 2015 Citrusbyte LLC. All rights reserved.
//

typedef NS_ENUM(NSInteger, CBEstimationMethod) {
    CBEstimationMethodLevenberg,
    CBEstimationMethodHeuristic
};

typedef NS_ENUM(NSInteger, CBDrawMethod) {
    CBDrawMethodEstimatedPosition,
    CBDrawMethodHeatmap,
    CBDrawMethodNearestBeacon
};