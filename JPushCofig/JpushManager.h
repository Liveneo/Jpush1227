//
//  JpushManager.h
//  0900
//
//  Created by yang Gao on 16/12/27.
//  Copyright © 2016年 yang Gao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JpushManager : NSObject

+ (JpushManager *)sharedInstance;

@property (strong, nonatomic) NSString *gyJPushAppKey;
@property (strong, nonatomic) NSString *gyJPushChannel;
@property (strong, nonatomic) NSString *gyJPushApsForProduction;

@end
