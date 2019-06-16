//
//  WifeModel.h
//  WJGBaseModel
//
//  Created by 王俊钢 on 2019/6/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WJGBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WifeModel : WJGBaseModel
@property (nonatomic ,copy  )NSString      *name;
@property (nonatomic ,assign)double         height;
@property (nonatomic ,assign)float          weight;
@end

NS_ASSUME_NONNULL_END
