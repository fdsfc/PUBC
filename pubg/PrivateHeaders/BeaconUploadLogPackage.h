//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaNSObjTransToJceBufferProtocol.h"

@class NSString;

@interface BeaconUploadLogPackage : NSObject <AnaNSObjTransToJceBufferProtocol>
{
    NSString *log;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *log; // @synthesize log;
- (void).cxx_destruct;	// IMP=0x00000001007e0a50
- (void)dealloc;	// IMP=0x00000001007e09b0
- (id)createWUPModel;	// IMP=0x00000001007e0944
- (id)getDataToBuffer;	// IMP=0x00000001007e0938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

