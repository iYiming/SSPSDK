//
//  SSPBannerAdDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/12/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SSPBannerAdDelegate <NSObject>

@optional

/// Banner 广告成功加载
/// @param bannerAdView Banner 广告视图
- (void)bannerAdDidLoad:(UIView *)bannerAdView;

/// Banner 广告曝光回调
- (void)bannerAdDidExposed;

/// Banner 广告点击回调
- (void)bannerAdDidClicked;

/// Banner 广告关闭回调
- (void)bannerAdDidClosed;

/// Banner 广告失败回调
/// @param error 具体错误信息
- (void)bannerAdFailedWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
