//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class UIView;

@interface TWTRMediaPresentationController : UIPresentationController
{
    UIView *_dimmingView;	// 8 = 0x8
}

@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void).cxx_destruct;	// IMP=0x0000000100855d1c
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000100855cb0
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000100855c6c
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000100855c24
- (void)presentationTransitionWillBegin;	// IMP=0x0000000100855940
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000100855890

@end

