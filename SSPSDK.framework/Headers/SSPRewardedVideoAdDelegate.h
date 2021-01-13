//
//  SSPRewardedVideoAdDelegate.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class SSPRewardedVideoAd;

@protocol SSPRewardedVideoAdDelegate <NSObject>

@optional

/// 激励视频广告成功加载
/// @param rewardedVideoAd 激励视频广告
- (void)rewardedVideoAdDidLoad:(SSPRewardedVideoAd *)rewardedVideoAd;

/// 激励视频广告曝光回调
- (void)rewardedVideoAdDidExposed;

/// 激励视频广告点击回调
- (void)rewardedVideoAdDidClicked;

/// 激励视频广告关闭回调
- (void)rewardedVideoAdDidClosed;

/// 激励视频广告失败回调
/// @param error 具体错误信息
- (void)rewardedVideoAdFailedWithError:(NSError *)error;

/// 激励视频素材已经加载
- (void)rewardedVideoAdVideoDidLoad;

/// 激励视频广告播放完成回调
- (void)rewardedVideoAdDidPlayFinish;

/// 激励视频广告播放失败回调
/// @param error 具体错误信息
- (void)rewardedVideoAdDidPlayFailedWithError:(NSError *)error;

/// 激励视频广告播放达到激励条件回调
/// @param rewardedVideoAd 激励视频广告
/// @param hasReward 是否激励
- (void)rewardedVideoAd:(SSPRewardedVideoAd *)rewardedVideoAd hasReward:(BOOL)hasReward;

@end

NS_ASSUME_NONNULL_END
