//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADJResponseData.h"

@class NSURL;

@interface ADJAttributionResponseData : ADJResponseData
{
    NSURL *_deeplink;	// 64 = 0x40
}

@property(retain, nonatomic) NSURL *deeplink; // @synthesize deeplink=_deeplink;
- (void).cxx_destruct;	// IMP=0x000000010078ae64
- (id)description;	// IMP=0x000000010078acc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010078ac88
- (id)initWithActivityPackage:(id)arg1;	// IMP=0x000000010078ac20

@end

