//
//  AppDelegate.h
//  TutorialBatteryMonitorApp
//
//  Created by Nick Saxelby on 05/05/2018.
//  Copyright © 2018 scan dev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <AVFoundation/AVFoundation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) AVPlayer *player;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

