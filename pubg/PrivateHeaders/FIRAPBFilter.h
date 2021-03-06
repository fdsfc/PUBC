//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NANOMessageBase.h"

@class NSString;

@interface FIRAPBFilter : NSObject <NANOMessageBase>
{
    CDStruct_e1a27b1c *_messageInfo;	// 8 = 0x8
}

@property(readonly, nonatomic) CDStruct_e1a27b1c *messageInfo; // @synthesize messageInfo=_messageInfo;
@property(readonly, nonatomic) CDUnknownFunctionPointerType copyMessageInfoFn;
@property(readonly, nonatomic) CDUnknownFunctionPointerType deallocMessageFieldFn;
@property(readonly, nonatomic) CDUnknownFunctionPointerType initMessageInfoFn;
- (id)protoBuffer;	// IMP=0x00000001008f3a18
- (id)initWithBuffer:(id)arg1;	// IMP=0x00000001008f3934
- (id)initWithMessageInfo:(CDStruct_e1a27b1c *)arg1;	// IMP=0x00000001008f3870
@property(readonly, nonatomic) const char *messageID;
- (void)dealloc;	// IMP=0x00000001008f380c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

