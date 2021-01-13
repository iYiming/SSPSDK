//
//  SSPSDK.h
//  SSPSDK
//
//  Created by ReYun on 2020/9/25.
//

#import <UIKit/UIKit.h>

#import <SSPSDK/SSPNativeAd.h>
#import <SSPSDK/SSPRewardedVideoAd.h>

#import <SSPSDK/SSPAdParams.h>
#import <SSPSDK/SSPRewardedVideoAdParams.h>
#import <SSPSDK/SSPBannerAdParams.h>
#import <SSPSDK/SSPInterstitialAdParams.h>

#import <SSPSDK/SSPNativeAdsManagerDelegate.h>
#import <SSPSDK/SSPNativeAdDelegate.h>
#import <SSPSDK/SSPNativeTempAdDelegate.h>
#import <SSPSDK/SSPSplashAdDelegate.h>
#import <SSPSDK/SSPRewardedVideoAdDelegate.h>
#import <SSPSDK/SSPBannerAdDelegate.h>
#import <SSPSDK/SSPInterstitialAdDelegate.h>

#import <SSPSDK/SSPNativeAdPluginDelegate.h>
#import <SSPSDK/SSPSplashAdPluginDelegate.h>
#import <SSPSDK/SSPRewardedVideoAdPluginDelegate.h>
#import <SSPSDK/SSPInterstitialAdPluginDelegate.h>
#import <SSPSDK/SSPBannerAdPluginDelegate.h>

#import <SSPSDK/SSPBuyerModel.h>
#import <SSPSDK/RYErrorManager.h>
#import <SSPSDK/SSPLogManager.h>

//! Project version number for SSPSDK.
FOUNDATION_EXPORT double SSPSDKVersionNumber;

//! Project version string for SSPSDK.
FOUNDATION_EXPORT const unsigned char SSPSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SSPSDK/PublicHeader.h>

@interface SSPSDK : NSObject

/// 初始化 SSPSDK
/// @param appId SSP 后台 注册生成的 AppID
+ (void)startWithAppId:(NSString *)appId;

/// 加载原生广告
/// @param adCode 广告位 ID
/// @param adExtParams 广告扩展参数
/// @param delegate 回调代理
+ (void)loadNativeAdWithAdCode:(NSString *)adCode adExtParams:(SSPAdParams *)adExtParams delegate:(id<SSPNativeAdsManagerDelegate>)delegate;

/// 加载开屏广告
/// @param window 窗体
/// @param adCode 广告位 ID
/// @param delegate 回调代理
+ (void)loadSplashAdWithWindow:(UIWindow *)window adCode:(NSString *)adCode delegate:(id<SSPSplashAdDelegate>)delegate;

/// 加载激励视频广告
/// @param viewController 展示激励视频控制器
/// @param adCode 广告位 ID
/// @param adExtParams 广告扩展参数
/// @param delegate 回调代理
+ (void)loadRewardVideoAdFromRootViewController:(UIViewController *)viewController adCode:(NSString *)adCode adExtParams:(SSPRewardedVideoAdParams *)adExtParams delegate:(id<SSPRewardedVideoAdDelegate>)delegate;

/// 加载 Banner 广告
/// @param viewController 展示 Banner 广告的控制器
/// @param adCode 广告位 ID
/// @param adExtParams 广告扩展参数
/// @param delegate 回调代理
+ (void)loadBannerAdToViewController:(UIViewController *)viewController adCode:(NSString *)adCode adExtParams:(SSPBannerAdParams *)adExtParams delegate:(id<SSPBannerAdDelegate>)delegate;

/// 加载插屏广告
/// @param viewController 展示插屏广告的控制器
/// @param adCode 广告位 ID
/// @param adExtParams 广告扩展参数
/// @param delegate 回调代理
+ (void)loadInterstitialAdFromRootViewController:(UIViewController *)viewController adCode:(NSString *)adCode adExtParams:(SSPInterstitialAdParams *)adExtParams delegate:(id<SSPInterstitialAdDelegate>)delegate;

/// 是否开启日志 默认不开启
/// @param enableState 开启状态
+ (void)enableLog:(BOOL)enableState;

@end
