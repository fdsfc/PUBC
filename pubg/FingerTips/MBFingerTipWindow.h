//
//  MBFingerTipWindow.h
//
//  Created by Justin R. Miller on 3/29/11.
//  Copyright 2011-2013 MapBox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSObject+AssociatedObjects.h"

/** A MBFingerTipWindow gives you automatic presentation mode in your iOS app. Note that currently, this is only designed for the iPad 2 and iPhone 4S (or later), which feature hardware video mirroring support. This library does not do the mirroring for you!
*
*   Use MBFingerTipWindow in place of UIWindow and your app will automatically determine when an external screen is available. It will show every touch on-screen with a nice partially-transparent graphic that automatically fades out when the touch ends. */
@interface UIWindow (MBFingerTipWindow)

/** A custom image to use to show touches on screen. If unset, defaults to a partially-transparent stroked circle. */
@property (nonatomic) UIImage *touchImage;

/** The alpha transparency value to use for the touch image. Defaults to 0.5. */
@property (nonatomic) CGFloat touchAlpha;

/** The time over which to fade out touch images. Defaults to 0.3. */
@property (nonatomic) NSTimeInterval fadeDuration;

/** If using the default touchImage, the color with which to stroke the shape. Defaults to black. */
@property (nonatomic, strong) UIColor *strokeColor;

/** If using the default touchImage, the color with whicih to fill the shape. Defaults to white. */
@property (nonatomic) UIColor *fillColor;

@property (nonatomic) UIWindow *overlayWindow;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL fingerTipRemovalScheduled;

- (void)MBFingerTipWindow_commonInit;
- (BOOL)anyScreenIsMirrored;
- (void)updateFingertipsAreActive;
- (void)scheduleFingerTipRemoval;
- (void)cancelScheduledFingerTipRemoval;
- (void)removeInactiveFingerTips;
- (void)removeFingerTipWithHash:(NSUInteger)hash animated:(BOOL)animated;
- (BOOL)shouldAutomaticallyRemoveFingerTipForTouch:(UITouch *)touch;

@end
