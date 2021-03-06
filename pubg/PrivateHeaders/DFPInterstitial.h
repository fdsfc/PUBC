//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADInterstitial.h"

#import "DFPCustomRenderedAdEventHandler.h"

@class GADCorrelator, NSString;

@interface DFPInterstitial : GADInterstitial <DFPCustomRenderedAdEventHandler>
{
    unsigned int _previousCorrelationID;	// 44 = 0x2c
    _Bool _customAdRenderingEnabled;	// 48 = 0x30
    id <GADAppEventDelegate> _appEventDelegate;	// 56 = 0x38
    id <DFPCustomRenderedInterstitialDelegate> _customRenderedInterstitialDelegate;	// 64 = 0x40
}

@property(nonatomic, getter=isCustomAdRenderingEnabled) _Bool customAdRenderingEnabled; // @synthesize customAdRenderingEnabled=_customAdRenderingEnabled;
@property(nonatomic) __weak id <DFPCustomRenderedInterstitialDelegate> customRenderedInterstitialDelegate; // @synthesize customRenderedInterstitialDelegate=_customRenderedInterstitialDelegate;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void).cxx_destruct;	// IMP=0x000000010098abd0
- (void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;	// IMP=0x000000010098aad0
- (_Bool)slotShouldPreemptInProgressRequest:(id)arg1;	// IMP=0x000000010098aa54
- (void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000010098a9a8
- (void)presentFromRootViewController:(id)arg1;	// IMP=0x000000010098a8bc
- (_Bool)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id *)arg3;	// IMP=0x000000010098a664
@property(retain, nonatomic) GADCorrelator *correlator;
- (void)finishedRenderingAdView:(id)arg1;	// IMP=0x000000010098a540
- (void)recordCustomAdImpression;	// IMP=0x000000010098a4c4
- (void)recordClick;	// IMP=0x000000010098a484

// Remaining properties
@property(readonly, copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

