//
//  TSPUser.h
//  Done
//
//  Created by Bart Jacobs on 06/09/14.
//  Copyright (c) 2014 Tuts+. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TSPItem;

@interface TSPUser : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *items;
@end

@interface TSPUser (CoreDataGeneratedAccessors)

- (void)addItemsObject:(TSPItem *)value;
- (void)removeItemsObject:(TSPItem *)value;
- (void)addItems:(NSSet *)values;
- (void)removeItems:(NSSet *)values;

@end
