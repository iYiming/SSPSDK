//
//  SSPLogManager.h
//  SSPSDK
//
//  Created by ReYun on 2020/11/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SSPLogManager : NSObject

@property (nonatomic, assign) BOOL isDebugMode;  // 是否为调试模式
@property (nonatomic, assign) BOOL isDevelopmentMode;  // 是否为开发模式 内部使用

+ (instancetype)sharedManager;

/// 详细日志
/// @param verboseMsg 详细日志
- (void)verbose:(NSString *)verboseMsg;

/// 调试日志
/// @param debugMsg 调试日志
- (void)debug:(NSString *)debugMsg;

/// 信息日志
/// @param infoMsg 信息日志
- (void)info:(NSString *)infoMsg;

/// 警告日志
/// @param warnMsg 警告日志
- (void)warn:(NSString *)warnMsg;

/// 错误日志
/// @param errorMsg 错误日志
- (void)error:(NSString *)errorMsg;

/// 详细日志
/// @param verboseMsg 详细日志
- (void)devVerbose:(NSString *)verboseMsg;

/// 调试日志
/// @param debugMsg 调试日志
- (void)devDebug:(NSString *)debugMsg;

/// 信息日志
/// @param infoMsg 信息日志
- (void)devInfo:(NSString *)infoMsg;

/// 警告日志
/// @param warnMsg 警告日志
- (void)devWarn:(NSString *)warnMsg;

/// 错误日志
/// @param errorMsg 错误日志
- (void)devError:(NSString *)errorMsg;

@end

NS_ASSUME_NONNULL_END
