//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, SKProductsRequest;

@interface FIRAProductsRequest : NSObject <SKProductsRequestDelegate>
{
    SKProductsRequest *_productsRequest;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (void)requestProductsWithProductIdentifiers:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001008e2348
- (void).cxx_destruct;	// IMP=0x00000001008e2cf0
- (void)clearInstance;	// IMP=0x00000001008e2c9c
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001008e2b0c
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001008e2790
- (void)requestWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001008e26e4
- (id)initWithProductIdentifiers:(id)arg1;	// IMP=0x00000001008e262c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

