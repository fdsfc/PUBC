//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol HSResourceCache <NSObject>
- (_Bool)removeAllResourcesWithAdditionalInfo:(NSDictionary *)arg1;
- (_Bool)removeResourceForKey:(NSString *)arg1 additionalInfo:(NSDictionary *)arg2;
- (id <HSResource>)resourceForKey:(NSString *)arg1 additionalInfo:(NSDictionary *)arg2;
- (id <HSResource>)addResource:(NSData *)arg1 forKey:(NSString *)arg2 additionalInfo:(NSDictionary *)arg3;
@end

