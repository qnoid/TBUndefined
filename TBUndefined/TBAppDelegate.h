//
//  TBAppDelegate.h
//  TBUndefined
//
//  Created by Markos Charatzas on 11/02/2013.
//  Copyright (c) 2013 Markos Charatzas (@qnoid). All rights reserved.
//

#import <UIKit/UIKit.h>

@class TBViewController;

@interface TBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TBViewController *viewController;

@end
