//
//  LQDefaults.h
//  LiquidApp
//
//  Created by Liquid Data Intelligence, S.A. (lqd.io) on 3/28/14.
//  Copyright (c) 2014 Liquid Data Intelligence, S.A. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kLQVersion @"0.6.1-beta"
#define kLQBundle @"io.lqd.ios"
#define kLQServerUrl @"https://api.lqd.io/collect/"
#define kLQDevicePlatform @"iOS"
#define kLQNotificationLQDidReceiveValues @"io.lqd.ios.Notifications:LQDidReceiveValues"
#define kLQNotificationLQDidLoadValues @"io.lqd.ios.Notifications:DidLoadValues"
#define kLQISO8601DateFormat @"yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ"
#define kLQISO8601DateFormatWithoutMilliseconds @"yyyy-MM-dd'T'HH:mm:ssZZZZZ"

#define kLQLogLevelPaths       7
#define kLQLogLevelHttp        6
#define kLQLogLevelData        5
#define kLQLogLevelInfoVerbose 4
#define kLQLogLevelWarning     3
#define kLQLogLevelInfo        2
#define kLQLogLevelError       1
#define kLQLogLevelNone        0

#define kLQLogLevel kLQLogLevelError
#define kLQDefaultSessionTimeout 30 //seconds
#define kLQHttpQueueSizeLimit 500 // datapoints
#ifdef DEBUG
#    define kLQDefaultFlushInterval 5 //seconds
#else
#    define kLQDefaultFlushInterval 15 //seconds
#endif
#define kLQHttpUnreachableWait 60.0f // seconds
#define kLQHttpRejectedWait 3600.0f // seconds
#define kLQHttpMaxTries 40
#define kLQDefaultFlushOnBackground YES
#define kLQDirectory kLQBundle
#define kLQSendFallbackValuesInDevelopmentMode YES
#define kLQDefaultSessionMaxLimit 7200 // seconds (if for some reason the applicationWillResignActive: code doesn't run)

#define kLQErrorValueNotFound 1

#ifdef DEBUG
#   define LQLog(level,...) if(level<=kLQLogLevel) NSLog(__VA_ARGS__)
#else
#   define LQLog(...)
#endif
