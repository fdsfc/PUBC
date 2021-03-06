//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSNumber, NSString;

@interface AWSS3ListObjectsRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_delimiter;	// 16 = 0x10
    long long _encodingType;	// 24 = 0x18
    NSString *_marker;	// 32 = 0x20
    NSNumber *_maxKeys;	// 40 = 0x28
    NSString *_prefix;	// 48 = 0x30
    long long _requestPayer;	// 56 = 0x38
}

+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100c08f40
+ (id)encodingTypeJSONTransformer;	// IMP=0x0000000100c08e68
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c08d5c
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSNumber *maxKeys; // @synthesize maxKeys=_maxKeys;
@property(retain, nonatomic) NSString *marker; // @synthesize marker=_marker;
@property(nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c0910c

@end

