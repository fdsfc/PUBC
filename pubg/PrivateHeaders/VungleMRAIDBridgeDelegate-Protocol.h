//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURL, VungleMRAIDBridge;

@protocol VungleMRAIDBridgeDelegate <NSObject>
- (void)MRAIDBridgeDidLoadAd:(VungleMRAIDBridge *)arg1;
- (void)MRAIDBridge:(VungleMRAIDBridge *)arg1 didFailToLoad:(NSError *)arg2;

@optional
- (void)handleNativePresentStoreView;
- (void)handleNativePrepareStoreView:(NSString *)arg1;
- (void)handleNativeCommandCriticalErrorWithBridge:(VungleMRAIDBridge *)arg1;
- (void)bridge:(VungleMRAIDBridge *)arg1 handleNativeCommandIsSuccessfulView:(_Bool)arg2;
- (void)bridge:(VungleMRAIDBridge *)arg1 handleNativeCommandTPATKey:(NSString *)arg2;
- (void)bridge:(VungleMRAIDBridge *)arg1 handleNativeCommandSetOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2;
- (void)bridge:(VungleMRAIDBridge *)arg1 handleNativeCommandUseCustomClose:(long long)arg2;
- (void)bridge:(VungleMRAIDBridge *)arg1 handleDisplayForDestinationURL:(NSURL *)arg2;
- (void)handleNativeCommandCloseWithBridge:(VungleMRAIDBridge *)arg1;
@end

