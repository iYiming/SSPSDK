//
//  RYErrorManager.h
//  SSPSDK
//
//  Created by ReYun on 2020/11/1.
//

#import <Foundation/Foundation.h>

// 错误类型
typedef NS_ENUM(NSInteger, SSPErrorType) {
    SSPErrorTypeUnknown = -1,  // 未知
    SSPErrorTypeSSPSDKNotInitialized = 800000,  // SSP SDK 未初始化
    SSPErrorTypeSSPSDKParamNotValid,  // SSP SDK 参数错误
    SSPErrorTypeAdRequestFailed,  // 广告请求失败
    SSPErrorTypeUnderdevelopment,  // 功能未开放
    SSPErrorTypeNativeAdFailed,  // 原生广告失败
    SSPErrorTypePluginNotFound,  // 未找到相应插件
    SSPErrorTypeThirdPartyAdSDKInitFailed,  // 第三方广告SDK初始化失败
    SSPErrorTypeSSPSDKServerAPIRequestFailed,  // SSP SDK 服务端接口请求错误
    SSPErrorTypeSSPSDKServerAPIResponseFailed,  // SSP SDK 服务端接口响应错误
    SSPErrorTypePluginMaterialLoadFailed,  // 素材加载失败
    SSPErrorTypeRewardedVideoAdFailed,  // 激励视屏广告错误
};

NS_ASSUME_NONNULL_BEGIN

@interface RYErrorManager : NSObject

+ (instancetype)sharedManager;

/// 返回 NSError 对象
/// @param errorType 错误类型
/// @param detailMsg 错误详细信息
- (NSError *)errorWithErrorType:(SSPErrorType)errorType detailMsg:(nullable NSString *)detailMsg;

@end

NS_ASSUME_NONNULL_END
