//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKMessengerURLHandler : NSObject
{
    id <FBSDKMessengerURLHandlerDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <FBSDKMessengerURLHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001006f9e24
- (id)_valueForKey:(id)arg1 fromComponents:(id)arg2;	// IMP=0x00000001006f9a64
- (void)_processCancel;	// IMP=0x00000001006f9974
- (void)_processOpenFromComposer:(id)arg1;	// IMP=0x00000001006f9800
- (void)_processReply:(id)arg1;	// IMP=0x00000001006f968c
- (id)_appIDsForExtras:(id)arg1;	// IMP=0x00000001006f95e8
- (id)_appLinkParamsForURL:(id)arg1;	// IMP=0x00000001006f9574
- (id)_appLinksDictionary:(id)arg1;	// IMP=0x00000001006f94c8
- (_Bool)openURL:(id)arg1 sourceApplication:(id)arg2;	// IMP=0x00000001006f9358
- (_Bool)canOpenURL:(id)arg1 sourceApplication:(id)arg2;	// IMP=0x00000001006f9140

@end

