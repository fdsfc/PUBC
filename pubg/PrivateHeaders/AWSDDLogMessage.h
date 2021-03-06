//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface AWSDDLogMessage : NSObject <NSCopying>
{
    NSString *_message;	// 8 = 0x8
    unsigned long long _level;	// 16 = 0x10
    unsigned long long _flag;	// 24 = 0x18
    long long _context;	// 32 = 0x20
    NSString *_file;	// 40 = 0x28
    NSString *_fileName;	// 48 = 0x30
    NSString *_function;	// 56 = 0x38
    unsigned long long _line;	// 64 = 0x40
    id _tag;	// 72 = 0x48
    long long _options;	// 80 = 0x50
    NSDate *_timestamp;	// 88 = 0x58
    NSString *_threadID;	// 96 = 0x60
    NSString *_threadName;	// 104 = 0x68
    NSString *_queueLabel;	// 112 = 0x70
}

@property(readonly, nonatomic) NSString *queueLabel; // @synthesize queueLabel=_queueLabel;
@property(readonly, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(readonly, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) unsigned long long line; // @synthesize line=_line;
@property(readonly, nonatomic) NSString *function; // @synthesize function=_function;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x0000000100bd71a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100bd6f88
- (id)initWithMessage:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(id)arg5 function:(id)arg6 line:(unsigned long long)arg7 tag:(id)arg8 options:(long long)arg9 timestamp:(id)arg10;	// IMP=0x0000000100bd6a28
- (id)init;	// IMP=0x0000000100bd69f0

@end

