//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsSyncListener.h"

@class HsNetworkManager, HsSyncController, NSArray;

@interface HsSwitchUserNetworkManager : HsSyncListener
{
    HsNetworkManager *_networkManager;	// 8 = 0x8
    id <HsNetworkDataProvider> _dataProvider;	// 16 = 0x10
    id <HsNetworkResponseDelegate> _responseProvider;	// 24 = 0x18
    HsSyncController *_syncController;	// 32 = 0x20
    id <HsDataSyncCoordinator> _dataSyncCoordinator;	// 40 = 0x28
    NSArray *_dependentDataTypes;	// 48 = 0x30
}

@property(retain) NSArray *dependentDataTypes; // @synthesize dependentDataTypes=_dependentDataTypes;
@property(nonatomic) __weak id <HsDataSyncCoordinator> dataSyncCoordinator; // @synthesize dataSyncCoordinator=_dataSyncCoordinator;
@property(nonatomic) __weak HsSyncController *syncController; // @synthesize syncController=_syncController;
@property(nonatomic) __weak id <HsNetworkResponseDelegate> responseProvider; // @synthesize responseProvider=_responseProvider;
@property(nonatomic) __weak id <HsNetworkDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak HsNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;	// IMP=0x00000001014a5f4c
- (_Bool)isFullSyncEnabled;	// IMP=0x00000001014a5e24
- (void)sync;	// IMP=0x00000001014a5c9c
- (id)getDependentDataTypes;	// IMP=0x00000001014a5c90
- (void)initWithDependentDataTypes;	// IMP=0x00000001014a5be8
- (id)initWithNetworkManager:(id)arg1 forSwitchUserController:(id)arg2 andSyncController:(id)arg3 andDataSyncCoordinator:(id)arg4;	// IMP=0x00000001014a59ac

@end

