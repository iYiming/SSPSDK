//
//  NSJSONSerialization+RYUtil.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSJSONSerialization (RYUtil)

/// 对象转 JSON
/// @param obj 对象
+ (NSString *)ry_stringFromObject:(id)obj;

/// JSON 转对象
/// @param jsonStr JSON
+ (id)ry_objectFromString:(NSString *)jsonStr;

@end

NS_ASSUME_NONNULL_END
