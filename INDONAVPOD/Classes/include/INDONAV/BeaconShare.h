//
//  BeaconShare.h
//  BeconRanging
//
//  Created by tasol on 7/4/16.
//  Copyright © 2016 tasol. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeaconShare : NSObject
    
 @property (nonatomic, strong) NSString *beaconID;
 @property (nonatomic, strong) NSString *beaconLocationX;
 @property (nonatomic, strong) NSString *beaconLocationY;
 @property (nonatomic, strong) NSString *beaconMajorID;
 @property (nonatomic, strong) NSString *beaconMinorID;
 @property (nonatomic, strong) NSString *beaconName;
 @property (nonatomic, strong) NSString *beaconType;
 @property (nonatomic, strong) NSString *beaconUUID;
 @property (nonatomic, strong) NSString *floorPlanID;
    
@end
