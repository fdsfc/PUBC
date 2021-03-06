//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APIBaseDelegate.h"
#import "TCLoginViewDelegate.h"
#import "TCWebViewKitDelegate.h"
#import "TencentRequestDelegate.h"
#import "TencentSessionDelegate.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSTimer, TCLoginViewKit, TCOSDKReachability, TencentRequest;

@interface TencentOAuth : NSObject <TencentRequestDelegate, TCWebViewKitDelegate, TCLoginViewDelegate, TencentSessionDelegate, APIBaseDelegate>
{
    NSMutableDictionary *_apiRequests;	// 8 = 0x8
    NSString *_accessToken;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    id <TencentSessionDelegate> _sessionDelegate;	// 32 = 0x20
    NSString *_localAppId;	// 40 = 0x28
    NSString *_openId;	// 48 = 0x30
    NSString *_redirectURI;	// 56 = 0x38
    NSArray *_permissions;	// 64 = 0x40
    TencentRequest *_request;	// 72 = 0x48
    TCLoginViewKit *_loginViewKit;	// 80 = 0x50
    NSString *_userNick;	// 88 = 0x58
    _Bool _userGetUserInfo;	// 96 = 0x60
    NSString *_appId;	// 104 = 0x68
    NSString *_uin;	// 112 = 0x70
    NSString *_skey;	// 120 = 0x78
    NSDictionary *_passData;	// 128 = 0x80
    int _authMode;	// 136 = 0x88
    TCOSDKReachability *_reachHost;	// 144 = 0x90
    NSTimer *_timer;	// 152 = 0x98
    NSMutableDictionary *_loginDict;	// 160 = 0xa0
    NSMutableDictionary *_openIdDict;	// 168 = 0xa8
    NSString *_encryToken;	// 176 = 0xb0
    int _authShareType;	// 184 = 0xb8
    NSString *_unionid;	// 192 = 0xc0
}

+ (unsigned long long)sendRespMessageToTencentApp:(id)arg1;	// IMP=0x0000000100b2b848
+ (id)getLastErrorMsg;	// IMP=0x0000000100b29818
+ (_Bool)CanHandleOpenURL:(id)arg1;	// IMP=0x0000000100b29804
+ (_Bool)HandleOpenURL:(id)arg1;	// IMP=0x0000000100b297f0
+ (_Bool)iphoneTIMSupportSSOLogin;	// IMP=0x0000000100b27d78
+ (_Bool)iphoneTIMInstalled;	// IMP=0x0000000100b27d64
+ (_Bool)iphoneQQSupportSSOLogin;	// IMP=0x0000000100b27d04
+ (_Bool)iphoneQQInstalled;	// IMP=0x0000000100b27cd8
+ (int)iphoneTIMVersion;	// IMP=0x0000000100b27650
+ (int)iphoneQQVersion;	// IMP=0x0000000100b2763c
+ (_Bool)isLiteSDK;	// IMP=0x0000000100b275f0
+ (id)sdkSubVersion;	// IMP=0x0000000100b275e0
+ (id)sdkVersion;	// IMP=0x0000000100b275d0
+ (int *)authorizeState;	// IMP=0x0000000100b275a8
@property(readonly, nonatomic) NSString *encryToken; // @synthesize encryToken=_encryToken;
@property(retain, nonatomic) NSMutableDictionary *openIdDict; // @synthesize openIdDict=_openIdDict;
@property(retain, nonatomic) NSMutableDictionary *loginDict; // @synthesize loginDict=_loginDict;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TCOSDKReachability *reachHost; // @synthesize reachHost=_reachHost;
@property(retain, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) int authShareType; // @synthesize authShareType=_authShareType;
@property(retain, nonatomic) NSString *unionid; // @synthesize unionid=_unionid;
@property(nonatomic) int authMode; // @synthesize authMode=_authMode;
@property(copy, nonatomic) NSDictionary *passData; // @synthesize passData=_passData;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
@property(copy, nonatomic) NSString *localAppId; // @synthesize localAppId=_localAppId;
@property(nonatomic) id <TencentSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void)apiBase:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;	// IMP=0x0000000100b2b790
- (_Bool)shouldAutorotateWithLoginWebkit:(id)arg1;	// IMP=0x0000000100b2b70c
- (unsigned long long)supportedInterfaceOrientationsWithLoginWebkit:(id)arg1;	// IMP=0x0000000100b2b688
- (_Bool)loginViewKit:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;	// IMP=0x0000000100b2b5fc
- (id)stringByTCOSDKReplacingHtmlEscapes:(id)arg1;	// IMP=0x0000000100b2b53c
- (id)encrytoken;	// IMP=0x0000000100b2b534
- (void)request:(id)arg1 didLoad:(id)arg2 dat:(id)arg3;	// IMP=0x0000000100b2b324
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x0000000100b2b320
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100b2b304
- (void)getUserInfoResponse:(id)arg1;	// IMP=0x0000000100b2b178
- (id)JSONValue:(id)arg1;	// IMP=0x0000000100b2b118
- (void)getOpenIdResponse:(id)arg1;	// IMP=0x0000000100b2ae3c
- (_Bool)tencentNeedPerformReAuth:(id)arg1;	// IMP=0x0000000100b2ada0
- (_Bool)tencentNeedPerformIncrAuth:(id)arg1 withPermissions:(id)arg2;	// IMP=0x0000000100b2acd8
- (void)tencentFailedUpdate:(int)arg1;	// IMP=0x0000000100b2ac40
- (void)tencentDidUpdate:(id)arg1;	// IMP=0x0000000100b2aba0
- (void)tencentDidNotNetWork;	// IMP=0x0000000100b2ab14
- (void)tencentDidNotLogin:(_Bool)arg1;	// IMP=0x0000000100b2aa70
- (void)tencentDidLogin;	// IMP=0x0000000100b2a568
- (void)onCGIRequestDidResponse:(id)arg1;	// IMP=0x0000000100b2a46c
- (_Bool)sendAPIRequest:(id)arg1 callback:(id)arg2;	// IMP=0x0000000100b2a1fc
- (id)cgiRequestWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 callback:(id)arg4;	// IMP=0x0000000100b2a158
- (void)cancelAllAPIRequest;	// IMP=0x0000000100b29fe8
- (_Bool)cancel:(id)arg1;	// IMP=0x0000000100b29df8
- (id)localEncrytedToken;	// IMP=0x0000000100b29d5c
- (_Bool)getUserInfo;	// IMP=0x0000000100b29b0c
- (_Bool)getOpenId:(id)arg1;	// IMP=0x0000000100b298fc
- (void)setEncryToken:(id)arg1;	// IMP=0x0000000100b29858
- (_Bool)oldCanhandleOpenURL:(id)arg1;	// IMP=0x0000000100b29838
- (id)getServerSideCode;	// IMP=0x0000000100b2982c
- (_Bool)handleOpenURL:(id)arg1;	// IMP=0x0000000100b297c0
- (_Bool)isOpenIdValid;	// IMP=0x0000000100b29760
- (_Bool)isSessionValid;	// IMP=0x0000000100b296ac
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;	// IMP=0x0000000100b2964c
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3;	// IMP=0x0000000100b29630
- (id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2;	// IMP=0x0000000100b295d0
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;	// IMP=0x0000000100b29570
- (id)requestWithParams:(id)arg1 andDelegate:(id)arg2;	// IMP=0x0000000100b294a8
- (void)logout:(id)arg1;	// IMP=0x0000000100b293a4
- (_Bool)authorizeWithPermissions:(id)arg1 andExtraParams:(id)arg2 delegate:(id)arg3 inSafari:(_Bool)arg4;	// IMP=0x0000000100b2920c
- (_Bool)authorize:(id)arg1 localAppId:(id)arg2 inSafari:(_Bool)arg3;	// IMP=0x0000000100b29198
- (_Bool)authorize:(id)arg1 inSafari:(_Bool)arg2;	// IMP=0x0000000100b290c8
- (_Bool)authorize:(id)arg1;	// IMP=0x0000000100b290b8
- (void)getUnionIdResponse:(id)arg1;	// IMP=0x0000000100b28eec
- (_Bool)RequestUnionId;	// IMP=0x0000000100b28d28
- (_Bool)reauthorizeWithPermissions:(id)arg1;	// IMP=0x0000000100b28c9c
- (_Bool)incrAuthWithPermissions:(id)arg1;	// IMP=0x0000000100b28b7c
- (id)parseURLParams:(id)arg1;	// IMP=0x0000000100b289c0
- (void)onTimer;	// IMP=0x0000000100b288ec
- (void)reachabilityChanged:(id)arg1;	// IMP=0x0000000100b28808
- (void)StopNotifyNetWork;	// IMP=0x0000000100b28758
- (_Bool)StartNotifyNetWork;	// IMP=0x0000000100b28568
- (void)tencentDialogLogin:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100b284d4
- (void)loginViewKit:(id)arg1 didFailuredWithError:(id)arg2 serial:(id)arg3;	// IMP=0x0000000100b282a8
- (void)loginViewKitDidSucceedLogin:(id)arg1 serial:(id)arg2;	// IMP=0x0000000100b280c4
- (_Bool)authorizeWithTencentAppAuthInSafari:(_Bool)arg1 permissions:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000100b280ac
- (_Bool)authorizeWithTencentAppAuthInSafari:(_Bool)arg1 permissions:(id)arg2 andExtraParams:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000100b27d8c
- (id)getOwnBaseUrl;	// IMP=0x0000000100b27c84
- (id)openUrl:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000100b27b30
- (void)dealloc;	// IMP=0x0000000100b2791c
- (id)getUserOpenID;	// IMP=0x0000000100b2790c
@property(copy, nonatomic) NSString *openId;
- (void)retryHandleOpenURL;	// IMP=0x0000000100b276bc
- (void)appBecomeActive;	// IMP=0x0000000100b27664
- (id)initWithAppId:(id)arg1 andDelegate:(id)arg2;	// IMP=0x0000000100b27344
- (void)deleteAPIRequestBySeq:(id)arg1;	// IMP=0x0000000100b2eb84
- (void)cancelWithRequestKey:(id)arg1;	// IMP=0x0000000100b2eab8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

