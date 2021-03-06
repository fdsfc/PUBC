//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSString;

@interface FBSDKLogger : NSObject
{
    _Bool _isActive;	// 8 = 0x8
    unsigned long long _loggerSerialNumber;	// 16 = 0x10
    NSString *_loggingBehavior;	// 24 = 0x18
    NSMutableString *_internalContents;	// 32 = 0x20
}

+ (void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2;	// IMP=0x00000001006b7e6c
+ (void)registerCurrentTime:(id)arg1 withTag:(id)arg2;	// IMP=0x00000001006b7cd8
+ (void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3;	// IMP=0x00000001006b7aec
+ (void)singleShotLogEntry:(id)arg1 formatString:(id)arg2;	// IMP=0x00000001006b79f8
+ (void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2;	// IMP=0x00000001006b7920
+ (unsigned long long)generateSerialNumber;	// IMP=0x00000001006b790c
@property(readonly, nonatomic) NSMutableString *internalContents; // @synthesize internalContents=_internalContents;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, copy, nonatomic) NSString *loggingBehavior; // @synthesize loggingBehavior=_loggingBehavior;
@property(readonly, nonatomic) unsigned long long loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
- (void).cxx_destruct;	// IMP=0x00000001006b7f84
- (void)emitToNSLog;	// IMP=0x00000001006b7698
- (void)appendKey:(id)arg1 value:(id)arg2;	// IMP=0x00000001006b75fc
- (void)appendFormat:(id)arg1;	// IMP=0x00000001006b7554
- (void)appendString:(id)arg1;	// IMP=0x00000001006b7528
@property(copy, nonatomic) NSString *contents;
- (id)initWithLoggingBehavior:(id)arg1;	// IMP=0x00000001006b7380

@end

