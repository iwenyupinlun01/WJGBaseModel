//
//  FatherModel.h
//  WJGBaseModel
//
//  Created by 王俊钢 on 2019/6/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WJGBaseModel.h"
@class WifeModel;
NS_ASSUME_NONNULL_BEGIN

@interface FatherModel : WJGBaseModel
@property (nonatomic ,strong)WifeModel     *wife;
@property (nonatomic ,strong)NSArray       *arr;
@property (nonatomic ,copy  )NSString      *name;
@property (nonatomic ,assign)NSInteger      phone;
@end

NS_ASSUME_NONNULL_END
