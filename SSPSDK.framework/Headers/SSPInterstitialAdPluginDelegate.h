//
//  SSPInterstitialAdPluginDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/12/24.
//

#import <UIKit/UIKit.h>
#import <SSPSDK/SSPInterstitialAdDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@class SSPBuyerModel;
@class SSPAdParams;

@protocol SSPInterstitialAdPluginDelegate <NSObject>

/// 设置插屏广告代理
/// @param delegate 插屏广告代理
- (void)setInterstitialAdDelegate:(id<SSPInterstitialAdDelegate>)delegate;

/// 设置购买方
/// @param buyerModel 购买方实例
- (void)setBuyer:(SSPBuyerModel *)buyerModel;

/// 设置插屏广告展示控制器
/// @param viewController 显示激励视频广告的控制器
- (void)setInterstitialAdDisplayViewController:(UIViewController *)viewController;

/// 加载插屏广告
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
