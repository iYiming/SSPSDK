//
//  SSPNativeTempAdEventDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/20.
//

#import <Foundation/Foundation.h>
@class SSPNativeAd;
NS_ASSUME_NONNULL_BEGIN

@protocol SSPNativeTempAdDelegate <NSObject>

@optional

/// 原生模板广告点击回调
/// @param nativeAdView 原生模板广告视图
- (void)nativeAdViewDidClicked:(UIView *)nativeAdView;

/// 原生模板广告渲染成功回调
/// @param nativeAdView 原生模板广告视图
- (void)nativeAdViewRenderSuccess:(UIView *)nativeAdView;

/// 原生模板广告渲染失败回调
/// @param nativeAdView 原生模板广告视图
/// @param error 错误信息
- (void)nativeAdViewRenderFail:(UIView *)nativeAdView error:(NSError *)error;

/// 原生模板广告曝光回调
/// @param nativeAdView 原生模板广告视图
- (void)nativeAdViewDidExposed:(UIView *)nativeAdView;

/// 原生模板广告关闭回调
/// @param nativeAdView 原生模板广告视图
- (void)nativeAdViewDidClosed:(UIView *)nativeAdView;

@end

NS_ASSUME_NONNULL_END
