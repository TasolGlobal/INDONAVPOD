//
//  pathFinder.h
//  Wish Qatar
//
//  Created by tasol on 7/14/16.
//  Copyright © 2016 Tailored solution. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface pathFinder : NSObject{
    NSMutableDictionary *dijArray;
}
@property(nonatomic) NSMutableArray *ConnectionArray;
-(id) initWithArray:(NSMutableArray *)arry ;
-(NSArray *)findPath :(NSString *)start :(NSString *)end;
@end
