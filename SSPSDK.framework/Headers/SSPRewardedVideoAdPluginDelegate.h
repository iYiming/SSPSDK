//
//  SSPRewardAdPluginDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/16.
//

#import <UIKit/UIKit.h>
#import <SSPSDK/SSPRewardedVideoAdDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@class SSPBuyerModel;
@class SSPAdParams;

@protocol SSPRewardedVideoAdPluginDelegate <NSObject>

/// 设置激励视频广告代理
/// @param delegate 激励视频广告代理
- (void)setRewardedAdDelegate:(id<SSPRewardedVideoAdDelegate>)delegate;

/// 设置购买方
/// @param buyerModel 购买方实例
- (void)setBuyer:(SSPBuyerModel *)buyerModel;

/// 设置激励视频广告展示控制器
/// @param viewController 显示激励视频广告的控制器
- (void)setRewardedAdDisplayViewController:(UIViewController *)viewController;

/// 加载激励视频广告
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
