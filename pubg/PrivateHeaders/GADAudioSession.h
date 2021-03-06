//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface GADAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    _Bool _audioSessionStateSaved;	// 16 = 0x10
    NSString *_savedAudioSessionCategory;	// 24 = 0x18
    NSString *_savedAudioSessionMode;	// 32 = 0x20
    unsigned long long _savedAudioSessionCategoryOption;	// 40 = 0x28
    _Bool _enabled;	// 48 = 0x30
    _Bool _wasOtherAppAudioInterrupted;	// 49 = 0x31
}

+ (id)sharedInstance;	// IMP=0x00000001009c9258
- (void).cxx_destruct;	// IMP=0x00000001009c9f7c
- (void)resumeBackgroundAppAudioIfInterrupted;	// IMP=0x00000001009c9cf4
- (void)setMixable:(_Bool)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000001009c98b8
- (void)restoreState;	// IMP=0x00000001009c94b8
- (void)disable;	// IMP=0x00000001009c9400
- (void)enable;	// IMP=0x00000001009c9364
- (id)init;	// IMP=0x00000001009c92d8

@end

