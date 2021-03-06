//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSEBaseTableViewCell.h"

@class UILabel, UIView;

@interface TSEGeoPlaceTableViewCell : TSEBaseTableViewCell
{
    UIView *_labelsContainerView;	// 8 = 0x8
    UILabel *_placeNameLabel;	// 16 = 0x10
    UILabel *_placeAddressLabel;	// 24 = 0x18
}

@property(readonly, nonatomic) UILabel *placeAddressLabel; // @synthesize placeAddressLabel=_placeAddressLabel;
@property(readonly, nonatomic) UILabel *placeNameLabel; // @synthesize placeNameLabel=_placeNameLabel;
@property(readonly, nonatomic) UIView *labelsContainerView; // @synthesize labelsContainerView=_labelsContainerView;
- (void).cxx_destruct;	// IMP=0x00000001008959c0
- (void)configureWithNullSelectionSelected:(_Bool)arg1;	// IMP=0x00000001008958a0
- (void)configureWithPlace:(id)arg1 selected:(_Bool)arg2;	// IMP=0x0000000100895778
- (long long)accessoryTypeForSelected:(_Bool)arg1;	// IMP=0x0000000100895768
- (void)prepareForReuse;	// IMP=0x000000010089568c
- (void)setUpConstraints;	// IMP=0x0000000100894d20
- (id)init;	// IMP=0x0000000100894ab8

@end

