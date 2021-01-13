//
//  SSPMacro.h
//  SSPSDK
//
//  Created by ReYun on 2020/10/26.
//

#import <Foundation/Foundation.h>

// 接口
#ifdef DEBUG
     #define RYURL @"https://api.ssp.zhaidw.com"  // 开发环境
//    #define RYURL @"https://api.qa.hotssp.com"  // QA环境
    // #define RYURL @"https://api.debug.zhaidw.com"  // 开发环境
#else
    #define RYURL @"https://api.ssp.zhaidw.com"  // 开发环境
   // #define RYURL @"https://api.hotssp.com"  // 线上环境
    // #define RYURL @"https://api.qa.hotssp.com"  // QA环境
#endif

// 开屏广告加密秘钥
#define SSPSDK_SPLASH_XXXTEA_SECRET @"Q3Uc5YyBpYGZ4403"

// 缓存
#define SSPSDK_DATA_INTERFACE  @"com.reyun.ssp.interface"  // 秘钥协商接口
#define SSPSDK_DATA_CONFIGURATION  @"com.reyun.ssp.configuration"  // 配比接口

#define RYPUBLICKEY @"MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA1JZCrGkwrnD8zMbLNSwSlwGMvvkZkMVc2KKnLicWPFSSmA2D8GTHtfCs80o9KBKUfPcg6fmQqTYaP2dt9GLTmoA3DG3QnH5kIOCRLpaLyTxQh1h+aO2uxMA5dZJVJumU222RF9opNSeUKo1gHxe48IY1rRe/TeDYsNZA1fNbwXM0QzoHcg1MbW406fG1ZXK929ePhID5ukAUJqqqCpZf2qMg32/fxzZGk0CywiTmUcK2MqS9GMjvJ7RiUGoIwXrJwavmmTqGMet6R3D+vten1HJSYxrj5M08ThiXkN6I4Y7fW7t//6ZKATHGqgIUfYKlOoULvlZIFNoR2dDjZfWt3wIDAQAB"

#define SSPSDK_RSAKey @"yefw0sj1v66akh3ejbced5owf77dyi1990wij1y8xsnt2oweowy9vq9igr69kolhf6czj46qkmumtxoas03btuk5q5v23ovs921wuylksmm45allh550aosim6al277h4ozttdy3i76geglydseqdwq0ubofijummfnyogi90f5pus3ct8k9rxjc51f2964d188fnq7zbw7o51v8fc4bnpcjukvqx4jzaqc0pr6269uygm9rq2yl2sc47g0gxks3v5ordbyyabecdjaptiogcpxo1lltyqqqm207sf62z79m0vw7e3sspl4dhx8rh9gqr9e8etwyhclt2ekye6d3hm08lddhgae9rqnibebeijyywtik0u9cji2jhlc4dvyz3am177koi7mqbtc9tvq51epqv5d0evbn7xvwyk22rkgy2h77yrynndrvh8xqadsin5b9r0h"

NS_ASSUME_NONNULL_BEGIN

@interface SSPMacro : NSObject

extern void SSPSDKRunOnMainThread(void (^block)(void));

@end

NS_ASSUME_NONNULL_END
