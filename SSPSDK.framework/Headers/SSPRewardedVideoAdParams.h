//
//  SSPRewardedVideoAdParams.h
//  SSPSDK
//
//  Created by ReYun on 2020/11/1.
//

#import <SSPSDK/SSPAdParams.h>

NS_ASSUME_NONNULL_BEGIN

@interface SSPRewardedVideoAdParams : SSPAdParams

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *rewardName;
@property (nonatomic, assign) NSInteger rewardAmount;
@property (nonatomic, copy) NSString *extra;

@end

NS_ASSUME_NONNULL_END
