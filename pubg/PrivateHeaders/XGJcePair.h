//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XGJcePair : NSObject
{
    id _key;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)pairWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001014d51f0
+ (id)pairFromExtStr:(id)arg1;	// IMP=0x00000001014ce178
+ (id)analyzeExtStr:(id)arg1;	// IMP=0x00000001014cde58
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x00000001014d543c
- (id)description;	// IMP=0x00000001014d5300
- (id)init;	// IMP=0x00000001014d5290

@end

