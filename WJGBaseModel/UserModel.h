//
//  UserModel.h
//  WJGBaseModel
//
//  Created by 王俊钢 on 2019/6/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WJGBaseModel.h"
@class FatherModel;
NS_ASSUME_NONNULL_BEGIN

@interface UserModel : WJGBaseModel
@property (nonatomic ,strong)FatherModel   *father;
@property (nonatomic ,strong)NSDictionary  *dic;
@property (nonatomic ,copy  )NSString      *name;
@property (nonatomic ,assign)int            age;

@end

NS_ASSUME_NONNULL_END
