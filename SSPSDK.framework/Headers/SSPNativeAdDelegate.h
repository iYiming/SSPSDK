//
//  SSPNativeAdDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/18.
//

#import <UIKit/UIKit.h>

@class SSPNativeAd;

NS_ASSUME_NONNULL_BEGIN

@protocol SSPNativeAdDelegate <NSObject>

/// 原生自渲染广告加载成功回调
- (void)nativeAdLoadSuccess;

/// 原生自渲染广告点击回调
/// @param view 点击视图
- (void)nativeAdDidClickedWithView:(UIView *_Nullable)view;

/// 原生自渲染广告曝光回调
- (void)nativeAdDidExposed;

/// 原生自渲染广告失败回调
/// @param error 错误信息
- (void)nativeAdFailedWithError:(NSError *_Nullable)error;

@end

NS_ASSUME_NONNULL_END
