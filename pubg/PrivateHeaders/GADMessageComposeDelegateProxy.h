//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class MFMessageComposeViewController, NSString;

@interface GADMessageComposeDelegateProxy : NSObject <MFMessageComposeViewControllerDelegate>
{
    GADMessageComposeDelegateProxy *_strongSelf;	// 8 = 0x8
    id <MFMessageComposeViewControllerDelegate> _messageComposeDelegate;	// 16 = 0x10
    MFMessageComposeViewController *_messageComposeViewController;	// 24 = 0x18
}

+ (id)associatedDelegateProxyForController:(id)arg1;	// IMP=0x00000001009da5bc
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(nonatomic) __weak id <MFMessageComposeViewControllerDelegate> messageComposeDelegate; // @synthesize messageComposeDelegate=_messageComposeDelegate;
- (void).cxx_destruct;	// IMP=0x00000001009da9a8
- (void)stopProxying;	// IMP=0x00000001009da928
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000001009da72c
- (id)initInternal;	// IMP=0x00000001009da644
- (id)init;	// IMP=0x00000001009da62c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

