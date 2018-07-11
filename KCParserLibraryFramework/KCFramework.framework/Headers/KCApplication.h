//
//  KCApplication.h
//  Thesis
//
//  Created by Kromyko Cruzado on 03/10/2016.
//  Copyright © 2016 Ateneo de Davao University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KCApplication : NSObject

@property (class) NSString *applicationName;
@property (class) UIViewController *rootViewController;

//- (void)setupRootViewController:(NSDictionary *)details;
+ (void)setupApplication;

@end
