//
//  KCParser.h
//  Thesis
//
//  Created by Kromyko Cruzado on 03/10/2016.
//  Copyright © 2016 Ateneo de Davao University. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KCParser : NSObject

//+ (KCApplication *)getApplication;
//+ (void)setApplication:(KCApplication *)application;
//+ (NSData *)getJSONData;
//+ (void)setJSONData:(NSData *)data;

+ (NSData *)getJSONDataFromRemote;
+ (NSDictionary *)parseData:(NSData *)data;


@end
