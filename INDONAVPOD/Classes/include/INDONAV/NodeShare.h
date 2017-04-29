//
//  NodeShare.h
//  Wish Qatar
//
//  Created by tasol on 7/13/16.
//  Copyright © 2016 Tailored solution. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NodeShare : NSObject
@property (nonatomic, strong) NSString *nodeID;
@property (nonatomic, strong) NSString *floorPlanID;
@property (nonatomic, strong) NSString *nodeName;
@property (nonatomic, strong) NSString *nodeType;
@property (nonatomic, strong) NSString *nodeLocationX;
@property (nonatomic, strong) NSString *nodeLocationY;
@property (nonatomic) double nodeScaleLocationX;
@property (nonatomic) double nodeScaleLocationY;

@end
