//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTAStatus : NSObject
{
    NSString *_openUDID;	// 8 = 0x8
    NSString *_mtaMid;	// 16 = 0x10
    id <MTAStatusDelegate> _delegate;	// 24 = 0x18
}

+ (id)getInstance;	// IMP=0x00000001014fed50
@property(nonatomic) __weak id <MTAStatusDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *mtaMid; // @synthesize mtaMid=_mtaMid;
@property(copy, nonatomic) NSString *openUDID; // @synthesize openUDID=_openUDID;
- (void).cxx_destruct;	// IMP=0x00000001014fee90
- (id)init;	// IMP=0x00000001014fed18

@end

