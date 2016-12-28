//
//  JpushManager.m
//  0900
//
//  Created by yang Gao on 16/12/27.
//  Copyright © 2016年 yang Gao. All rights reserved.
//

#import "JpushManager.h"

@implementation JpushManager

+ (JpushManager *)sharedInstance{
    static JpushManager *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [JpushManager new];
    });
    
    return instance;
}

@end
