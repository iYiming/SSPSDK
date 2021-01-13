//
//  SSPBannerAdPluginDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/12/24.
//

#import <Foundation/Foundation.h>
#import <SSPSDK/SSPBannerAdDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@class SSPBuyerModel;
@class SSPAdParams;

@protocol SSPBannerAdPluginDelegate <NSObject>

/// 设置 Banner 广告代理
/// @param delegate Banner 广告代理
- (void)setBannerAdDelegate:(id<SSPBannerAdDelegate>)delegate;

/// 设置购买方
/// @param buyerModel 购买方实例
- (void)setBuyer:(SSPBuyerModel *)buyerModel;

/// 设置 Banner 广告展示控制器
/// @param viewController 显示激励视频广告的控制器
- (void)setBannerAdDisplayViewController:(UIViewController *)viewController;

/// 加载 Banner 广告
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
