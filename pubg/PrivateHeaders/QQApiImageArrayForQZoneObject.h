//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSArray, NSDictionary;

@interface QQApiImageArrayForQZoneObject : QQApiObject
{
    NSArray *_imageDataArray;	// 40 = 0x28
    NSDictionary *_extMap;	// 48 = 0x30
}

+ (id)objectWithimageDataArray:(id)arg1 title:(id)arg2 extMap:(id)arg3;	// IMP=0x0000000100b31a80
@property(retain, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(retain, nonatomic) NSArray *imageDataArray; // @synthesize imageDataArray=_imageDataArray;
- (void)dealloc;	// IMP=0x0000000100b31ad8
- (id)initWithImageArrayData:(id)arg1 title:(id)arg2 extMap:(id)arg3;	// IMP=0x0000000100b319e4

@end

