//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HsFaqSearchDb : NSObject
{
    NSObject<OS_dispatch_queue> *workerQueue;	// 8 = 0x8
}

+ (id)scoreFromString:(id)arg1;	// IMP=0x00000001014260a4
+ (id)stringOfScore:(id)arg1;	// IMP=0x0000000101425e6c
+ (void)clear;	// IMP=0x0000000101425d58
+ (id)query:(id)arg1;	// IMP=0x00000001014259c0
+ (void)store:(id)arg1;	// IMP=0x00000001014255d8
+ (id)sharedInstance;	// IMP=0x0000000101425500
- (void).cxx_destruct;	// IMP=0x000000010142633c

@end

