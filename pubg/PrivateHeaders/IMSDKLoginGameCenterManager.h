//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKLoginDelegate.h"

@class NSString;

@interface IMSDKLoginGameCenterManager : NSObject <IMSDKLoginDelegate>
{
    CDUnknownBlockType completeHandler;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler;
- (void).cxx_destruct;	// IMP=0x0000000100930d3c
- (void)sendUserIdentityToServ:(CDUnknownBlockType)arg1 state:(long long)arg2;	// IMP=0x000000010092f054
- (void)authenticateLocalPlayer:(CDUnknownBlockType)arg1 state:(long long)arg2;	// IMP=0x000000010092e918
- (_Bool)isIMSDKLoginGameCenterManagerAvailable;	// IMP=0x000000010092e844
- (void)loginGameCenterWithState:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010092e5c4
- (_Bool)isSupportApi;	// IMP=0x000000010092e5b8
- (_Bool)isInstalled;	// IMP=0x000000010092e5b0
- (void)logout;	// IMP=0x000000010092e5ac
- (void)bindWithSubChannel:(id)arg1 extra:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x000000010092e50c
- (void)checkAndLoginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x000000010092e46c
- (void)loginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x000000010092e3cc
- (id)channelID;	// IMP=0x000000010092e3a0
- (id)init;	// IMP=0x000000010092e31c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

