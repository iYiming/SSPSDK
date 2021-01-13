//
//  SSPBuyerModel.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/15.
//

#import <Foundation/Foundation.h>
#import <SSPSDK/SSPNativeAd.h>

NS_ASSUME_NONNULL_BEGIN

@class SSPAdParams;
@class SSPMaterialModel;
@class SSPAPIRequestModel;

@interface SSPBuyerModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, assign) SSPBuyerType type;  // 购买方类型
@property (nonatomic, copy) NSString *mediaCodeStr;  // 媒体码
@property (nonatomic, copy) NSString *positionCodeStr;  // 广告位码
@property (nonatomic, assign) BOOL isSelfRendering;  // 是否自渲染
@property (nonatomic, copy) NSString *templateStyleStr;  // 模板样式
@property (nonatomic, copy) NSArray *clickedReportURLsArray;  // 点击上报地址
@property (nonatomic, copy) NSArray *exposuredReportURLsArray;  // 曝光上报地址
@property (nonatomic, copy) NSDictionary *macroDictionary;  // 点击 URL 数组 和 曝光 URL 数组所用到的数据
@property (nonatomic, strong) SSPMaterialModel *materialModel;  // 物料类型
@property (nonatomic, strong) SSPAdParams *adExtParams;  // 广告额外配置参数

@property (nonatomic, copy) NSString *sspServerpPositionCodeStr;  // ssp服务器原始广告位 ID
@property (nonatomic, strong) SSPAPIRequestModel *requestModel;  // 请求 model

/// 根据购买方类型字符串获取购买方枚举类型
/// @param buyerTypeStr  购买方类型字符串
+ (SSPBuyerType)buyerTypeForStr:(NSString *)buyerTypeStr;

/// 根据购买方枚举类型获取购买方类型字符串
/// @param buyerType 购买方类型
+ (NSString *)buyerCodeForBuyerType:(SSPBuyerType)buyerType;

/// 根据购买方枚举类型获取购买方名字
/// @param buyerType 购买方类型
+ (NSString *)buyerNameForBuyerType:(SSPBuyerType)buyerType;

@end

NS_ASSUME_NONNULL_END
