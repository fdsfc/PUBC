//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSNumber, NSString;

@interface AWSS3CompletedPart : AWSModel
{
    NSString *_ETag;	// 8 = 0x8
    NSNumber *_partNumber;	// 16 = 0x10
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bf87c8
@property(retain, nonatomic) NSNumber *partNumber; // @synthesize partNumber=_partNumber;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
- (void).cxx_destruct;	// IMP=0x0000000100bf889c

@end

