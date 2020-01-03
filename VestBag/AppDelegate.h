//
//  AppDelegate.h
//  VestBag
//
//  Created by XLaws on 2020/1/3.
//  Copyright © 2020 XLaws. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

