//
//  PathView.h
//  BeconRanging
//
//  Created by tasol on 7/4/16.
//  Copyright © 2016 tasol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NodeShare.h"
#import "FootNodePoint.h"

@interface PathView : UIView
@property NSMutableArray *nodes;
@property NSMutableArray *pathnodes;

@property double x_scale;
@property double y_scale;

-(void)drawNode;
-(void)drawNode1:(CGPoint)A B:(CGPoint)B;
-(void)drawPathLine:(NSMutableArray *)patharray;
-(void)drawFootNode :(NSMutableArray *)footnode;
@end
