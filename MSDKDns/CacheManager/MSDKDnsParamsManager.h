/**
 * Copyright (c) Tencent. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import "MSDKDns.h"

@interface MSDKDnsParamsManager : NSObject

@property (nonatomic, strong, readwrite)NSArray * hijackDomainArray;
@property (nonatomic, strong, readwrite)NSArray * noHijackDomainArray;

+ (instancetype)shareInstance;

- (void)switchDnsServer;

- (void)msdkDnsSetMDnsIp:(NSString *) mdnsIp;
- (void)msdkDnsSetMOpenId:(NSString *) mdnsOpenId;
- (void)msdkDnsSetMAppId:(NSString *) mdnsAppId MTimeOut:(int)mdnsTimeOut MEncryptType:(HttpDnsEncryptType)mdnsEncryptType;
- (void)msdkDnsSetMDnsId:(int) mdnsId MDnsKey:(NSString *)mdnsKey MToken:(NSString* )mdnsToken;
- (void)msdkDnsSetRouteIp:(NSString *)routeIp;
- (void)msdkDnsSetHttpOnly:(BOOL)httpOnly;

- (NSString *) msdkDnsGetMDnsIp;
- (NSString *) msdkDnsGetMOpenId;
- (NSString *) msdkDnsGetMAppId;
- (int) msdkDnsGetMDnsId;
- (NSString *) msdkDnsGetMDnsKey;
- (float) msdkDnsGetMTimeOut;
- (HttpDnsEncryptType)msdkDnsGetEncryptType;
- (NSString *)msdkDnsGetMToken;
- (NSString *)msdkDnsGetRouteIp;
- (BOOL)msdkDnsGetHttpOnly;
@end
