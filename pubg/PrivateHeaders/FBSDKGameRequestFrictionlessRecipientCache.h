//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface FBSDKGameRequestFrictionlessRecipientCache : NSObject
{
    NSSet *_recipientIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100723af0
- (void)_updateCache;	// IMP=0x000000010072385c
- (void)_accessTokenDidChangeNotification:(id)arg1;	// IMP=0x00000001007237a4
- (void)updateWithResults:(id)arg1;	// IMP=0x0000000100723710
- (_Bool)recipientsAreFrictionless:(id)arg1;	// IMP=0x00000001007235e8
- (void)dealloc;	// IMP=0x000000010072356c
- (id)init;	// IMP=0x00000001007234c0

@end

