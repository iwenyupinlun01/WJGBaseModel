//
//  WJGBaseModel.h
//  WJGBaseModel
//
//  Created by 王俊钢 on 2019/6/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString* _Nullable const UserKey0 = @"UserKey0";
static NSString* _Nullable const UserKey1 = @"UserKey1";

@interface WJGBaseModel : NSObject
+ (instancetype)sharedInstance:(NSString *)key;
+ (void)saveData:(NSString *)key;
+ (void)clearData:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
