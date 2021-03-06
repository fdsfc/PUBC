//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFAppLink, NSDictionary;

@interface BFAppLinkNavigation : NSObject
{
    NSDictionary *_extras;	// 8 = 0x8
    NSDictionary *_appLinkData;	// 16 = 0x10
    BFAppLink *_appLink;	// 24 = 0x18
}

+ (void)setDefaultResolver:(id)arg1;	// IMP=0x00000001006a65a0
+ (id)defaultResolver;	// IMP=0x00000001006a6560
+ (long long)navigationTypeForLink:(id)arg1;	// IMP=0x00000001006a6228
+ (long long)navigateToAppLink:(id)arg1 error:(id *)arg2;	// IMP=0x00000001006a61c4
+ (id)navigateToURLInBackground:(id)arg1 resolver:(id)arg2;	// IMP=0x00000001006a6004
+ (id)navigateToURLInBackground:(id)arg1;	// IMP=0x00000001006a5f78
+ (id)resolveAppLinkInBackground:(id)arg1;	// IMP=0x00000001006a5eec
+ (id)resolveAppLinkInBackground:(id)arg1 resolver:(id)arg2;	// IMP=0x00000001006a5e9c
+ (id)callbackAppLinkDataForAppWithName:(id)arg1 url:(id)arg2;	// IMP=0x00000001006a5004
+ (id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3;	// IMP=0x00000001006a4f34
@property(retain, nonatomic) BFAppLink *appLink; // @synthesize appLink=_appLink;
@property(copy, nonatomic) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
- (void).cxx_destruct;	// IMP=0x00000001006a660c
- (long long)navigationType;	// IMP=0x00000001006a627c
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3;	// IMP=0x00000001006a5a30
- (long long)navigate:(id *)arg1;	// IMP=0x00000001006a5610
- (id)appLinkURLWithTargetURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001006a5174
- (id)stringByEscapingQueryString:(id)arg1;	// IMP=0x00000001006a5130

@end

