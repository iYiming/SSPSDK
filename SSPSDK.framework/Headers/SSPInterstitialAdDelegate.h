//
//  SSPInterstitialAdDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/12/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SSPInterstitialAdDelegate <NSObject>

@optional

/// 插屏广告成功加载
- (void)interstitialAdLoadSuccess;

/// 插屏广告曝光回调
- (void)interstitialAdDidExposed;

/// 插屏广告点击回调
- (void)interstitialAdDidClicked;

/// 插屏广告关闭回调
- (void)interstitialAdDidClosed;

/// 插屏广告失败回调
/// @param error 具体错误信息
- (void)interstitialAdFailedWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
