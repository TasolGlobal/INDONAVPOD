//
//  DrawPathLine.h
//  Wish Qatar
//
//  Created by tasol on 7/18/16.
//  Copyright © 2016 Tailored solution. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NodeShare.h"
#import "FootNodePoint.h"

@interface DrawPathLine : UIView
@property NSMutableArray *nodes;
@property double x_scale;
@property double y_scale;

-(void)drawPath:(NSMutableArray *)patharray;
-(void)ClearPath;
@end
