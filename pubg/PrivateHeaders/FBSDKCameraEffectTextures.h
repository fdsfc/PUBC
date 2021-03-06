//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSString;

@interface FBSDKCameraEffectTextures : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSMutableDictionary *_textures;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001006fa858
- (void).cxx_destruct;	// IMP=0x00000001006fab10
- (id)_valueOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00000001006faaac
- (id)_valueForKey:(id)arg1;	// IMP=0x00000001006fa9fc
- (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001006fa98c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001006fa924
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001006fa8fc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001006fa860
- (_Bool)isEqualToCameraEffectTextures:(id)arg1;	// IMP=0x00000001006fa7e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001006fa750
@property(readonly) unsigned long long hash;
- (id)allTextures;	// IMP=0x00000001006fa728
- (id)imageForKey:(id)arg1;	// IMP=0x00000001006fa6b0
- (void)setImage:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001006fa65c
- (id)init;	// IMP=0x00000001006fa5e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

