//
//  DbManager.h
//  Wish Qatar
//
//  Created by tasol on 7/12/16.
//  Copyright © 2016 Tailored solution. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKDatabase.h"

@interface DbManager : NSObject{
    //SKDatabase *db;
}
+ (DbManager *)sharedSingleton;
-(void)insertFloorPlan:(NSArray *)floorplans;
-(void)insertBeacons:(NSArray *)beacons;
-(void)insertspottedBeacons:(NSArray *)beacons;
-(void)insertNodes:(NSArray *)Nodes;
-(void)insertpathNodes:(NSArray *)pathNodes;

#pragma mark - get data
-(NSArray *)getAllMinors;
-(NSString *)getFloor:(NSString *)str;
-(NSDictionary *)getFloorDetail:(NSString *)floorPlanID;
-(NSArray *)getBeaconsFromFloarPlanID: (NSString *)floorPlanID;
-(NSArray *)getSpottedBeaconsFromFloarPlanID: (NSString *)floorPlanID;
-(NSArray *)getNodesFromFloarPlanID: (NSString *)floorPlanID;
-(NSArray *)getPOINodesFromFloarPlanID: (NSString *)floorPlanID;
-(NSArray *)getPathNodesFromFloarPlanID: (NSString *)floorPlanID;
-(NSArray *)getAllBeacons;

@end
