//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TSESheetPresentationManager, TSETweetComposerViewController, TSETweetShareConfiguration, TSETweetShareNavigationController;

@interface TSETweetShareViewController : UIViewController
{
    TSETweetShareNavigationController *_navigationController;	// 8 = 0x8
    TSETweetComposerViewController *_composerViewController;	// 16 = 0x10
    TSETweetShareConfiguration *_configuration;	// 24 = 0x18
    TSESheetPresentationManager *_sheetPresentationManager;	// 32 = 0x20
}

@property(readonly, nonatomic) TSESheetPresentationManager *sheetPresentationManager; // @synthesize sheetPresentationManager=_sheetPresentationManager;
@property(readonly, nonatomic) TSETweetShareConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) TSETweetComposerViewController *composerViewController; // @synthesize composerViewController=_composerViewController;
@property(readonly, nonatomic) TSETweetShareNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;	// IMP=0x0000000100890834
- (id)childViewControllerForStatusBarStyle;	// IMP=0x00000001008907e8
- (id)childViewControllerForStatusBarHidden;	// IMP=0x00000001008907dc
- (_Bool)modalPresentationCapturesStatusBarAppearance;	// IMP=0x00000001008907d4
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000100890724
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001008905c4
- (void)viewWillLayoutSubviews;	// IMP=0x00000001008904f4
- (void)viewDidLoad;	// IMP=0x000000010089020c
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010089010c

@end

