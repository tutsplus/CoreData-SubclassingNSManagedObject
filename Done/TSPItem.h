//
//  TSPItem.h
//  Done
//
//  Created by Bart Jacobs on 06/09/14.
//  Copyright (c) 2014 Tuts+. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TSPUser;

@interface TSPItem : NSManagedObject

@property (nonatomic, retain) NSDate * createdAt;
@property (nonatomic, retain) NSNumber * done;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) TSPUser *user;

@end
