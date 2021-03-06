//
//  LQDevice.h
//  Liquid
//
//  Created by Liquid Data Intelligence, S.A. (lqd.io) on 09/01/14.
//  Copyright (c) 2014 Liquid Data Intelligence, S.A. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LQUser.h"

@interface LQDevice : NSObject

-(id)initWithLiquidVersion:(NSString*)liquidVersion;

-(void)setAttribute:(id<NSCoding>)attribute forKey:(NSString *)key;
-(id)attributeForKey:(NSString *)key;

-(NSDictionary*)jsonDictionary;
-(NSDictionary*)jsonDictionaryWithUser:(LQUser*)user;
-(BOOL)reachesInternet;

+(NSString*)deviceModel;
+(NSString*)uid;

@property(nonatomic, strong, readonly) NSString* vendor;
@property(nonatomic, strong, readonly) NSString* deviceModel;
@property(nonatomic, strong, readonly) NSString* systemVersion;
@property(nonatomic, strong, readonly) NSString* deviceName;
@property(nonatomic, strong, readonly) NSString* screenSize;
@property(nonatomic, strong, readonly) NSString* carrier;
@property(nonatomic, strong, readonly) NSString* internetConnectivity;
@property(nonatomic, strong, readonly) NSString* uid;
@property(nonatomic, strong, readonly) NSString* appBundle;
@property(nonatomic, strong, readonly) NSString* appName;
@property(nonatomic, strong, readonly) NSString* appVersion;
@property(nonatomic, strong, readonly) NSString* releaseVersion;
@property(nonatomic, strong, readonly) NSString* liquidVersion;
@property(nonatomic, strong, readonly) NSDictionary* attributes;

@end
