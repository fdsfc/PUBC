//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject
{
    FBSDKGraphRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSDictionary *_batchParameters;	// 24 = 0x18
}

@property(copy, nonatomic) NSDictionary *batchParameters; // @synthesize batchParameters=_batchParameters;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FBSDKGraphRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x00000001006d4758
- (id)description;	// IMP=0x00000001006d45d4
- (void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3;	// IMP=0x00000001006d450c
- (id)init;	// IMP=0x00000001006d4450
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;	// IMP=0x00000001006d4344

@end

