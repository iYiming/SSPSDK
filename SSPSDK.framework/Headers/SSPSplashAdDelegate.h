//
//  SSPSplashAdDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class SSPSplashAd;

@protocol SSPSplashAdDelegate <NSObject>

@optional

/// 开屏广告加载成功回调
- (void)splashAdLoadSuccess;

/// 开屏广告失败回调
/// @param error 错误信息
- (void)splashAdFailedWithError:(NSError *)error;

/// 开屏广告曝光回调
- (void)splashAdExposured;

/// 开屏广告点击回调
- (void)splashAdClicked;

/// 开屏广告关闭回调
- (void)splashAdClosed;

/// 开屏广告剩余时间回调
/// @param time 剩余时间
- (void)splashAdTick:(NSUInteger)time;

@end

NS_ASSUME_NONNULL_END
