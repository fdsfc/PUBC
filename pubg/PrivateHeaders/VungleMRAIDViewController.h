//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class VungleCustomPresentationViewController, VungleFlexViewPresentationManager;

@interface VungleMRAIDViewController : UIViewController
{
    _Bool _interstitial;	// 8 = 0x8
    _Bool _playCommandEnabled;	// 9 = 0x9
    unsigned long long _orientationMask;	// 16 = 0x10
    UIViewController *_presenterController;	// 24 = 0x18
    VungleCustomPresentationViewController *_parentPresentationController;	// 32 = 0x20
    VungleFlexViewPresentationManager *_presentationManager;	// 40 = 0x28
}

+ (id)playCommand;	// IMP=0x0000000100abe178
@property(nonatomic) _Bool playCommandEnabled; // @synthesize playCommandEnabled=_playCommandEnabled;
@property(nonatomic, getter=isInterstitial) _Bool interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) VungleFlexViewPresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property(retain, nonatomic) VungleCustomPresentationViewController *parentPresentationController; // @synthesize parentPresentationController=_parentPresentationController;
@property(retain, nonatomic) UIViewController *presenterController; // @synthesize presenterController=_presenterController;
@property(nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
- (void).cxx_destruct;	// IMP=0x0000000100abe2a0
- (void)disableRemoteCommandCenterControls:(id)arg1;	// IMP=0x0000000100abe0dc
- (void)restoreCommandCenterControls;	// IMP=0x0000000100abe018
- (void)enableAVPlayerObservation;	// IMP=0x0000000100abdf8c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100abdf80
- (_Bool)shouldAutorotate;	// IMP=0x0000000100abdf78
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100abdf70
- (void)dismissInterstitialAdAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100abdd98
- (void)presentIOS8orHigherTransparentController:(id)arg1 fromViewController:(id)arg2;	// IMP=0x0000000100abdc44
- (void)presentIOS7TransparentController:(id)arg1 fromViewController:(id)arg2;	// IMP=0x0000000100abd9f8
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2;	// IMP=0x0000000100abd90c
- (void)didDismissInterstitialAd;	// IMP=0x0000000100abd908
- (void)willDismissInterstitialAd;	// IMP=0x0000000100abd8fc
- (void)didPresentInterstitialAd;	// IMP=0x0000000100abd8f8
- (void)willPresentInterstitialAd;	// IMP=0x0000000100abd8f4
- (void)presentAdFromViewController:(id)arg1 isInterstitial:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100abd6c4
- (id)init;	// IMP=0x0000000100abd654

@end

