//
//  SSPNativeAdsManagerDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/21.
//

#import <Foundation/Foundation.h>

@class SSPNativeAd;

NS_ASSUME_NONNULL_BEGIN

@protocol SSPNativeAdsManagerDelegate <NSObject>

@optional

/// 加载原生广告成功回调
/// @param nativeAdsArray 原生广告数组
- (void)loadAdsSucceedWithAdsArray:(NSArray<SSPNativeAd *> * _Nullable)nativeAdsArray;

/// 加载广告失败回调
/// @param error 错误信息
- (void)loadAdsFailedWithError:(NSError * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
