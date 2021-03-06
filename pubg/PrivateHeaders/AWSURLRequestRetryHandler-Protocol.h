//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSNetworkingRequest, NSData, NSDictionary, NSError, NSHTTPURLResponse;

@protocol AWSURLRequestRetryHandler <NSObject>
@property(nonatomic) unsigned int maxRetryCount;
- (double)timeIntervalForRetry:(unsigned int)arg1 response:(NSHTTPURLResponse *)arg2 data:(NSData *)arg3 error:(NSError *)arg4;
- (long long)shouldRetry:(unsigned int)arg1 originalRequest:(AWSNetworkingRequest *)arg2 response:(NSHTTPURLResponse *)arg3 data:(NSData *)arg4 error:(NSError *)arg5;

@optional
- (NSDictionary *)resetParameters:(NSDictionary *)arg1;
@end

