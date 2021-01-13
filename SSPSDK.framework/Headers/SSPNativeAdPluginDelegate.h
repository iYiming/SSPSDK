//
//  SSPNativeAdPluginDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/18.
//

#import <Foundation/Foundation.h>
#import <SSPSDK/SSPNativeAdsManagerDelegate.h>

@class SSPBuyerModel;

NS_ASSUME_NONNULL_BEGIN

@protocol SSPNativeAdPluginDelegate <NSObject>

/// 设置原生广告代理
/// @param delegate 原生广告代理
- (void)setNativeAdsManagerDelegate:(id<SSPNativeAdsManagerDelegate>)delegate;

/// 设置购买方
/// @param buyerModel 购买方实例
- (void)setBuyer:(SSPBuyerModel *)buyerModel;

/// 加载广告
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
