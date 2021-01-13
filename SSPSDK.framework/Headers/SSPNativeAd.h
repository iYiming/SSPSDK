//
//  SSPNativeAd.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/18.
//

#import <UIKit/UIKit.h>
@protocol SSPNativeTempAdDelegate;
@protocol SSPNativeAdDelegate;

@class GADUnifiedNativeAdView;

/// 原生广告类型
typedef NS_ENUM(NSUInteger, SSPNativeAdType) {
    /// 未知
    SSPNativeAdTypeUnknown = 0,
    /// 自渲染
    SSPNativeAdTypeSelfRender,
    /// 模板
    SSPNativeAdTypeTemplate,
};

/// 原生广告物料类型
typedef NS_ENUM(NSUInteger, SSPNativeAdMaterialType) {
    /// 未知
    SSPNativeAdMaterialTypeUnknown = 0,
    /// 图文
    SSPNativeAdMaterialTypeImageAndText,
    /// 组图
    SSPNativeAdMaterialTypeGroupImage,
    /// 视频
    SSPNativeAdMaterialTypeVideo
};

typedef NS_ENUM(NSUInteger, SSPBuyerType) {
    SSPBuyerTypeUnknown,  // 未知
    SSPBuyerTypeGDT,  // 腾讯广点通
    SSPBuyerTypeCSJ,  // 头条穿山甲
    SSPBuyerTypeKuaiShou,  // 快手
    SSPBuyerTypeAdMob,  // 谷歌 AdMob
    SSPBuyerTypeDirectMail,  // 直投
};

NS_ASSUME_NONNULL_BEGIN

@interface SSPNativeAd : NSObject

/// 广告标题
@property (nonatomic, copy, readonly) NSString *title;

/// 广告描述
@property (nonatomic, copy, readonly) NSString *desc;

/// 广告大图Url
@property (nonatomic, copy, readonly) NSString *imageUrl;

/// 应用类广告App 图标Url
@property (nonatomic, copy, readonly) NSString *iconUrl;

/// 原生自渲染广告物料类型
@property (nonatomic, assign, readonly) SSPNativeAdMaterialType materialType;

/// 素材宽度，单图广告代表大图 imageUrl 宽度、多图广告代表小图 mediaUrlList 宽度
@property (nonatomic, readonly) NSInteger imageWidth;

/// 素材高度，单图广告代表大图 imageUrl 高度、多图广告代表小图 mediaUrlList 高度
@property (nonatomic, readonly) NSInteger imageHeight;

/// 应用类广告的价格
@property (nonatomic, strong, readonly) NSNumber *appPrice;

/// 视频类广告视频时长，单位 ms
@property (nonatomic, readonly) CGFloat videoDuration;

/// 应用类广告的星级（5星制度）
@property (nonatomic, readonly) CGFloat appRating;

/// 返回广告的eCPM，单位：分  成功返回一个大于等于0的值，-1表示无权限或后台出现异常
@property (nonatomic, readonly) NSInteger eCPM;

/// 三小图广告的图片Url集合
@property (nonatomic, copy, readonly) NSArray *imageUrlsArray;

/// 原生广告类型
@property (nonatomic, readonly) SSPNativeAdType adType;

/// 原生广告购买方类型
@property (nonatomic, readonly) SSPBuyerType buyerType;

/// 用于处理广告动作的根视图控制器。动作方法包括'pushViewController' 和 'presentViewController'.
@property (nonatomic, weak) UIViewController *rootViewController;

/// 原生自渲染广告事件委托对象
@property (nonatomic, weak) id<SSPNativeAdDelegate> nativeAdDelegate;

/// 原生模板广告事件委托对象
@property (nonatomic, weak) id<SSPNativeTempAdDelegate> nativeTempAdDelegate;

/// 原生模板广告视图
@property (nonatomic, strong, readonly) UIView *nativeTempAdView;

/// 原生自渲染广告视频视图
@property (nonatomic, strong, readonly) UIView *videoAdView;

/// 原生自渲染广告注册容器视图和可点击视图
/// @param containerView 原生广告容器视图
/// @param clickableViews 可点击视图数组
- (void)registerContainer:(UIView *)containerView withClickableViews:(NSArray<UIView *> *)clickableViews;

/// 原生模板广告渲染
- (void)render;

@end

NS_ASSUME_NONNULL_END
