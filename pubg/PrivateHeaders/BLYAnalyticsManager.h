//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstractModule.h"

@interface BLYAnalyticsManager : BLYAbstractModule
{
    long long _launchTimestamp;	// 8 = 0x8
    long long _activeTimestamp;	// 16 = 0x10
    long long _inActiveTimestamp;	// 24 = 0x18
    _Bool _coldStart;	// 32 = 0x20
    _Bool _inProgress;	// 33 = 0x21
    _Bool _crashedLastSession;	// 34 = 0x22
    long long _previousActiveTimestamp;	// 40 = 0x28
    long long _previousInActiveTimestamp;	// 48 = 0x30
    long long _previousUsedTime;	// 56 = 0x38
}

+ (id)constructSelector;	// IMP=0x00000001007450f8
+ (id)sharedManager;	// IMP=0x0000000100745020
@property(nonatomic) _Bool crashedLastSession; // @synthesize crashedLastSession=_crashedLastSession;
@property(nonatomic) long long previousUsedTime; // @synthesize previousUsedTime=_previousUsedTime;
@property(nonatomic) long long previousInActiveTimestamp; // @synthesize previousInActiveTimestamp=_previousInActiveTimestamp;
@property(nonatomic) long long previousActiveTimestamp; // @synthesize previousActiveTimestamp=_previousActiveTimestamp;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(nonatomic, getter=isColdStart) _Bool coldStart; // @synthesize coldStart=_coldStart;
@property(nonatomic) long long inActiveTimestamp; // @synthesize inActiveTimestamp=_inActiveTimestamp;
@property(nonatomic) long long activeTimestamp; // @synthesize activeTimestamp=_activeTimestamp;
@property(nonatomic) long long launchTimestamp; // @synthesize launchTimestamp=_launchTimestamp;
- (void)recordPrevUseTime;	// IMP=0x0000000100746028
- (void)startLogicWithSummaryInfo:(id)arg1;	// IMP=0x0000000100745f88
- (void)recordEvent;	// IMP=0x0000000100745e5c
- (id)lastSessionUseInfo;	// IMP=0x0000000100745b18
- (id)createSummaryInfo;	// IMP=0x0000000100745710
- (void)didEnterBackgroundHandler;	// IMP=0x00000001007456d4
- (void)willEnterForegroundHandler;	// IMP=0x00000001007456d0
- (void)didBecomeActiveHandler;	// IMP=0x0000000100745640
- (void)didFinishLaunchingHandler;	// IMP=0x000000010074563c
- (void)willTerminateHandler;	// IMP=0x00000001007455bc
- (void)willResignActiveHandler;	// IMP=0x0000000100745554
- (void)applicationDidCrashed:(id)arg1;	// IMP=0x00000001007454a8
- (void)receivedEventNotification:(id)arg1;	// IMP=0x00000001007453bc
- (_Bool)disableModule;	// IMP=0x0000000100745330
- (_Bool)enableModule;	// IMP=0x000000010074510c
- (id)strategyGetterSelector;	// IMP=0x0000000100745104
- (id)init;	// IMP=0x00000001007450a0

@end

