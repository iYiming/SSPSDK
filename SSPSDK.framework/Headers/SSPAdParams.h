//
//  SSPAdParams.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SSPAdParams : NSObject

/// 广告数
@property (nonatomic, assign) NSInteger adsCount;
/// 广告尺寸
@property (nonatomic, assign) CGSize adSize;
/// 视频广告是否静音
@property (nonatomic, assign) BOOL videoMuted;
/// 用于开屏广告。拉取广告超时时间，默认为 3 秒。详解：拉取广告超时时间，开发者调用loadAd方法以后会立即展示 backgroundImage，然后在该超时时间内，如果广告拉取成功，则立马展示开屏广告，否则放弃此次广告展示机会。
@property (nonatomic, assign) CGFloat fetchDelay;

@end

NS_ASSUME_NONNULL_END
