//
//  SSPSplashAdDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/9/25.
//

#import <UIKit/UIKit.h>
#import <SSPSDK/SSPSplashAdDelegate.h>

@class SSPBuyerModel;

NS_ASSUME_NONNULL_BEGIN

@protocol SSPSplashAdPluginDelegate <NSObject>

/// 设置开屏广告代理
/// @param delegate 开屏广告代理
- (void)setSplashAdDelegate:(id<SSPSplashAdDelegate>)delegate;

/// 设置购买方
/// @param buyerModel 购买方实例
- (void)setBuyer:(SSPBuyerModel *)buyerModel;

/// 在窗体上显示广告
/// @param window 显示窗体
- (void)showAdInWindow:(UIWindow *)window;

@end

NS_ASSUME_NONNULL_END
