//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSSTSCredentials, AWSSTSFederatedUser, NSNumber;

@interface AWSSTSGetFederationTokenResponse : AWSModel
{
    AWSSTSCredentials *_credentials;	// 8 = 0x8
    AWSSTSFederatedUser *_federatedUser;	// 16 = 0x10
    NSNumber *_packedPolicySize;	// 24 = 0x18
}

+ (id)federatedUserJSONTransformer;	// IMP=0x0000000100bddcf4
+ (id)credentialsJSONTransformer;	// IMP=0x0000000100bddcb0
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bddc04
@property(retain, nonatomic) NSNumber *packedPolicySize; // @synthesize packedPolicySize=_packedPolicySize;
@property(retain, nonatomic) AWSSTSFederatedUser *federatedUser; // @synthesize federatedUser=_federatedUser;
@property(retain, nonatomic) AWSSTSCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;	// IMP=0x0000000100bddda4

@end

