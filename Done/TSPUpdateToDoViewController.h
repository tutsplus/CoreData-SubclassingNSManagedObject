//
//  TSPUpdateToDoViewController.h
//  Done
//
//  Created by Bart Jacobs on 27/07/14.
//  Copyright (c) 2014 Tuts+. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class TSPItem;

@interface TSPUpdateToDoViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) TSPItem *record;

@end
