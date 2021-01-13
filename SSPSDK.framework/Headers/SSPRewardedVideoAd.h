//
//  SSPRewardedVideoAd.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/16.
//

#import <UIKit/UIKit.h>

@protocol SSPRewardedVideoAdDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface SSPRewardedVideoAd : NSObject

@property (nonatomic, copy) NSString *userId;  // 用户 ID (可选)
@property (nonatomic, copy) NSString *name;  // 激励奖励名称 (可选)
@property (nonatomic, assign) NSInteger amount;  // 激励奖励数量 (可选)
@property (nonatomic, copy) NSString *extra;  // 参数透传 (可选)
@property (nonatomic, weak) id<SSPRewardedVideoAdDelegate> delegate;  // 激励视频委托对象

/// 显示激励视频
- (void)show;

@end

NS_ASSUME_NONNULL_END
