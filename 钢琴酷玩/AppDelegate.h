//
//  AppDelegate.h
//  钢琴酷玩
//
//  Created by chang on 15-5-1.
//  Copyright (c) 2015年 CYL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
@protocol AppDelegateDelegate<NSObject>

-(void)socketDisConnected:(NSError *)error;
-(void)socketConnecting;
-(void)socketConnected;

@end

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (weak, nonatomic)id<AppDelegateDelegate> delegate;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

