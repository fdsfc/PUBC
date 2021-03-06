//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, XGTPNs;

@interface XGDeviceManager : NSObject
{
    unsigned long long _routerServerVersion;	// 8 = 0x8
    unsigned long long _routerServerType;	// 16 = 0x10
    NSString *_currentTag;	// 24 = 0x18
    XGTPNs *_tpns;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001014d6208
+ (id)defaultManager;	// IMP=0x00000001014d5f10
@property(retain, nonatomic) XGTPNs *tpns; // @synthesize tpns=_tpns;
@property(copy, nonatomic) NSString *currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) unsigned long long routerServerType; // @synthesize routerServerType=_routerServerType;
@property(nonatomic) unsigned long long routerServerVersion; // @synthesize routerServerVersion=_routerServerVersion;
- (void).cxx_destruct;	// IMP=0x00000001014d86e4
- (void)synchronizeData;	// IMP=0x00000001014d8494
@property long long deviceGUID;
@property _Bool deviceNotificationStatus;
- (void)removeTokenTag:(id)arg1;	// IMP=0x00000001014d8120
@property(copy, nonatomic) NSString *tokenTag;
- (id)tagsOfToken;	// IMP=0x00000001014d7fbc
- (void)saveTagsOfToken:(id)arg1;	// IMP=0x00000001014d7f20
- (void)removeTokenAccount:(id)arg1;	// IMP=0x00000001014d7e84
@property(copy, nonatomic) NSString *tokenAccount;
- (void)saveClientId:(id)arg1;	// IMP=0x00000001014d7d44
- (id)getSavedClientId;	// IMP=0x00000001014d7cb8
- (void)saveDeviceTokenRetryNum:(id)arg1;	// IMP=0x00000001014d7c1c
- (int)getDeviceTokenRetryNum;	// IMP=0x00000001014d7b54
- (void)saveDeviceTokenRegistered;	// IMP=0x00000001014d7a9c
- (_Bool)ifDeviceTokenRegistered;	// IMP=0x00000001014d7a18
@property(copy, nonatomic) NSString *deviceToken;
- (void)loadRegisterStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000001014d7214
- (void)storeRegisterStatus:(long long)arg1;	// IMP=0x00000001014d70cc
- (id)loadRegisterModel;	// IMP=0x00000001014d6f58
- (long long)loadDeivceNotificationStatus;	// IMP=0x00000001014d6ebc
- (void)updateDeviceNotificationStatus:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001014d6c28
- (void)storeRegisterModel:(id)arg1;	// IMP=0x00000001014d6a3c
@property(copy, nonatomic) NSDate *IPRouterQueryDate;
@property(copy, nonatomic) NSString *IPRouterQueryInterval;
@property(copy, nonatomic) NSString *IPRouterQueryFrequency;
@property(copy, nonatomic) NSString *IPRouterContent;
@property(nonatomic) long long vipStatus;
@property(copy, nonatomic) NSString *xgAccessID;
- (id)copy;	// IMP=0x00000001014d61fc
- (id)init;	// IMP=0x00000001014d61c4

@end

