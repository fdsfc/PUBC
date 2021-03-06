//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSS3PutObjectRequest.h"

@class AWSS3UploadPartRequest, NSMutableArray, NSString, NSURL;

@interface AWSS3TransferManagerUploadRequest : AWSS3PutObjectRequest
{
    long long _state;	// 8 = 0x8
    unsigned long long _currentUploadingPartNumber;	// 16 = 0x10
    NSMutableArray *_completedPartsArray;	// 24 = 0x18
    NSString *_uploadId;	// 32 = 0x20
    NSString *_cacheIdentifier;	// 40 = 0x28
    AWSS3UploadPartRequest *_currentUploadingPart;	// 48 = 0x30
    long long _totalSuccessfullySentPartsDataLength;	// 56 = 0x38
}

@property long long totalSuccessfullySentPartsDataLength; // @synthesize totalSuccessfullySentPartsDataLength=_totalSuccessfullySentPartsDataLength;
@property(retain) AWSS3UploadPartRequest *currentUploadingPart; // @synthesize currentUploadingPart=_currentUploadingPart;
@property(retain, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSMutableArray *completedPartsArray; // @synthesize completedPartsArray=_completedPartsArray;
@property(nonatomic) unsigned long long currentUploadingPartNumber; // @synthesize currentUploadingPartNumber=_currentUploadingPartNumber;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x0000000100bf5c1c
- (id)pause;	// IMP=0x0000000100bf56f0
- (id)cancel;	// IMP=0x0000000100bf5528
- (id)init;	// IMP=0x0000000100bf54e0

// Remaining properties
@property(retain, nonatomic) NSURL *body; // @dynamic body;

@end

