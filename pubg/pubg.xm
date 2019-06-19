#import <GameController/GameController.h>
#import "NSObject+AssociatedObjects.h"
#import "UIView-KIFAdditions.h"
#import "PUBGDefines.h"
#import "PUBGControllerManager.h"




@interface IOSAppDelegate : UIResponder <UIApplicationDelegate, UITextFieldDelegate>

@property(retain) UIView *IOSView; // @synthesize IOSView;
- (CGPoint)convertPointForScreen:(CGPoint)inputPoint;
- (CGPoint)pointForActionType:(PGBActionType)type;
- (NSDictionary *)controllerPreferences;
- (PGBActionType)actionTypeFromConstant:(NSString *)constant;
- (PGBActionType)actionTypeForControllerButton:(NSString *)constantString;

@end
/*
//%group ourScience
@interface IOSAppDelegate (pubg)

@property (nonatomic) GCController *gameController;
@property (nonatomic) NSDictionary *gamePlayDictionary;
@end




static NSDictionary *gameplayDict = nil;
static CGFloat lastXMove;
static CGFloat lastYMove;
static UITouch *lastXTouch;
static UITouch *lastYTouch;
static CGPoint previousPoint;
//static GCController* gameController = nil; //Dictionary{index:STTouch}
*/

%hook IOSAppDelegate

/*
%new - (void)setGamePlayDictionary:(NSDictionary *)gpd
{
    [self associateValue:gpd withKey:@selector(gamePlayDictionary)];
}

%new - (NSDictionary *)gamePlayDictionary
{
    return [self associatedValueForKey:@selector(gamePlayDictionary)];
}

%new - (void)setGameController:(GCController *)gameController
{
    [self associateValue:gameController withKey:@selector(gameController)];
}

%new - (GCController *)gameController
{
    return [self associatedValueForKey:@selector(gameController)];
}

%new - (NSDictionary *)controllerPreferences {
    
    if (self.gamePlayDictionary == nil){
        NSString *preferenceFile = @"/var/mobile/Library/Preferences/com.nito.pubc.plist";
        self.gamePlayDictionary = [NSDictionary dictionaryWithContentsOfFile:preferenceFile];
        NSLog(@"gameplay dict: %@", self.gamePlayDictionary);
    }
    return self.gamePlayDictionary;
}

%new - (PGBActionType)actionTypeForControllerButton:(NSString *)constantString {
    
    NSDictionary *controllerDictionary = [self controllerPreferences];
    NSString *controllerValue = controllerDictionary[constantString];
    NSLog(@"controllerValue: %@", controllerValue);
    return [self actionTypeFromConstant:controllerValue];
}



%new - (CGPoint)convertPointForScreen:(CGPoint)inputPoint {

    if (SCREEN_HEIGHT == 667) {
        return inputPoint;
    }
    //x = (OG_VALUE * TARGET_WIDTH) / OG_WIDTH;
    //y = (OG_VALUE * TARGET_HEIGHT / OG_HEIGHT;
    CGFloat x = (inputPoint.x * SCREEN_WIDTH) / 667;
    CGFloat y = (inputPoint.y * SCREEN_HEIGHT) / 375;

    return CGPointMake(x, y);
}


%new - (void)controllerConnected:(NSNotification *)n {
    
    self.gameController = n.object;
    //28/140 = training button
    GCExtendedGamepad *profile = self.gameController.extendedGamepad;
    
    __block NSArray <UITouch *> *touches = nil;
    
    [profile.leftThumbstick.xAxis setValueChangedHandler:^(GCControllerAxisInput *axis, float value) {
        NSInteger v=(NSInteger)(value*127); //-127 ... + 127 range
        
        if (v != 0){
            NSLog(@"Joy X: %i", v);
        }
    }];
    [profile.leftThumbstick.yAxis setValueChangedHandler:^(GCControllerAxisInput *axis, float value) {
        NSInteger v= (NSInteger)(value*127 * - 1); //-127 ... + 127 range
        
        if (v != 0){
            NSLog(@"Joy Y: %i", v);
        }
    }];
    
      self.gameController.controllerPausedHandler = ^(GCController * _Nonnull controller) {
      
        NSLog(@"### pause button??");

        CGPoint menu = PAT([self actionTypeForControllerButton:Menu]);
        [[self IOSView] tapAtPoint:menu];
    };

    profile.leftThumbstick.valueChangedHandler = ^(GCControllerDirectionPad * _Nonnull dpad, float xValue, float yValue) {
        
        
        CGPoint mid = CGPointMake(106,280);
        CGPoint rmin = CGPointMake(145,280);
        CGPoint dmin = CGPointMake(104, 320);
        CGPoint lmin = CGPointMake(67, 280);
        CGPoint umin = CGPointMake(108, 240);
        CGFloat yValueNeutral = 281;
        CGFloat xValueNeutral = 108;
        
        
        if (touches.count > 0) {
            
            if (xValue == 0 && yValue == 0){
                NSLog(@"shit aint null: %@", touches);
                
                //[[self IOSView] endTouches:touches];
                touches = nil;
                
            }
            
        }
    
        
        NSInteger xv=(NSInteger)(xValue*280); 
        NSInteger xy=(NSInteger)(yValue*280); 
        NSLog(@"xv: %i, xy: %i", xv, xy);
        if (CGPointEqualToPoint(previousPoint, CGPointZero)){

        }

            

        }
        /*
        if (xValue != 0){
            NSLog(@"x value: %f", xValue);
           // NSInteger xv=(NSInteger)(xValue*127); //-127 ... + 127 range
            NSLog(@"xv: %i", xv);
            NSInteger xy= (NSInteger)(yValue*280 * - 1); //-127 ... + 127 range
            NSLog(@"xy: %i", xy);
            if (xValue > 0) { //moving right
                
                
                CGFloat newX = 185 * xValue;
                NSLog(@"new x: %f", newX);
                if (yValue != 0){
                    yValueNeutral *= ABS(yValue);
                }
                [[self IOSView] dragFromPoint:CGPointMake(xValue, yValueNeutral) toPoint:lmin];
            } else if (0 > xValue){
                if (yValue != 0){
                    yValueNeutral *= ABS(yValue);
                }
                CGFloat newX = 185 * ABS(xValue);
                NSLog(@"lower new x: %f", newX);
                [[self IOSView] dragFromPoint:lmin toPoint:CGPointMake(xValue, yValueNeutral)];
            } else {
               [[self IOSView] dragFromPoint:mid toPoint:mid];
            }
        } else {
            if (yValue != 0){
                NSLog(@"y value: %f", yValue);
                if (yValue > 0) { //moving up
                    
                    CGFloat newY = 241 * yValue;
                    NSLog(@"new y: %f", newY);
                    if (xValue != 0){
                        xValueNeutral *= ABS(xValue);
                    }
                    [[self IOSView] dragFromPoint:umin toPoint:CGPointMake(xValueNeutral, newY)];
                } else if (0 > yValue){
                    CGFloat newY = 241 * ABS(yValue);
                    NSLog(@"lower new y: %f", newY);
                    [[self IOSView] dragFromPoint:CGPointMake(xValueNeutral, newY) toPoint:dmin];
                } else {
                     [[self IOSView] dragFromPoint:mid toPoint:mid];
                }
            }
        }
        
       
        
    };
    
    profile.leftThumbstickButton.valueChangedHandler = ^(GCControllerButtonInput * _Nonnull button, float value, BOOL pressed) {
        
        if (pressed){
            
            CGPoint hand = PAT([self actionTypeForControllerButton:LeftThumbstickButton]);//PAT(kPGBActionHandAction);
            [[self IOSView] tapAtPoint:hand];
        }
        
    };
    
    profile.rightThumbstickButton.valueChangedHandler = ^(GCControllerButtonInput * _Nonnull button, float value, BOOL pressed) {
        
        if (pressed){
            
            CGPoint first = PAT([self actionTypeForControllerButton:RightThumbstickButton]);//PAT(kPGBActionFirstItemSelect);
            [[self IOSView] tapAtPoint:first];
        }
        
    };
    
    
    profile.dpad.valueChangedHandler = ^(GCControllerDirectionPad * _Nonnull dpad, float xValue, float yValue) {
        
        if (dpad.down.isPressed){
            CGPoint reload = PAT([self actionTypeForControllerButton:DpadDown]);//PAT(kPGBActionTypeReload);
            [[self IOSView] tapAtPoint:reload];
            
        }
        
        if (dpad.left.isPressed){
            CGPoint leftWeapon = PAT([self actionTypeForControllerButton:DpadLeft]);//PAT(kPGBActionTypeFirstWeapon);
            [[self IOSView] tapAtPoint:leftWeapon];
        }
        
        if (dpad.up.isPressed){
            CGPoint aim = PAT([self actionTypeForControllerButton:DpadUp]);//PAT(kPGBActionTypeAim);
            [[self IOSView] tapAtPoint:aim];
        }
        
        if (dpad.right.isPressed){
            CGPoint rightWeapon = PAT([self actionTypeForControllerButton:DpadRight]);//PAT(kPGBActionTypeSecondWeapon);
            [[self IOSView] tapAtPoint:rightWeapon];
        }
        
        
    };
    
    profile.leftShoulder.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        if (pressed){
            CGPoint training = PAT([self actionTypeForControllerButton:LeftShoulder]);//PAT(kPGBActionTypeTrainingButton);
            [[self IOSView] tapAtPoint:training];
            
            CGPoint cancelPoint = PAT(kPGBActionTypeOKCancelButton);
            [[self IOSView] tapAtPoint:cancelPoint];
            
            CGPoint closePoint = [self convertPointForScreen:CGPointMake(610,72)];
            [[self IOSView] tapAtPoint:closePoint];
            
        }
    };
    
    profile.rightShoulder.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        if (pressed){
            CGPoint start = PAT([self actionTypeForControllerButton:RightShoulder]);//PAT(kPGBActionTypeStartButton);
            [[self IOSView] tapAtPoint:start];
            
            CGPoint okPoint = PAT(kPGBActionTypeOKDualButton);
            [[self IOSView] tapAtPoint:okPoint];
            
            CGPoint okSolo = PAT(kPGBActionTypeOKSoloButton);
            [[self IOSView] tapAtPoint:okSolo];
            
            //CGPoint closePoint = PAT(kPGBActionTypeXCloseButton);
            //[[self IOSView] tapAtPoint:closePoint];
            
            //CGPoint cancelPoint2 = [self convertPointForScreen:CGPointMake(610,72)];
            //[[self IOSView] tapAtPoint:cancelPoint2];
            
        }
    };
    
    __block UITouch *currentRightTouch = nil;
    profile.rightTrigger.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        if (pressed){
            CGPoint punchRight = PAT([self actionTypeForControllerButton:RightTrigger]);//PAT(kPGBActionTypeRight);
            if (currentRightTouch){
                [[self IOSView] finishTouch:currentRightTouch];
                currentRightTouch = nil;
            }
            currentRightTouch = [[self IOSView] tapDownAtPoint:punchRight];
        } else {
            
            if (currentRightTouch) {
                [[self IOSView] finishTouch:currentRightTouch];
                currentRightTouch = nil;
            }
        }
    };
    
    __block UITouch *currentLeftTouch = nil;
    profile.leftTrigger.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        
        if (pressed)
        {
            CGPoint punchLeft = PAT([self actionTypeForControllerButton:LeftTrigger]);//PAT(kPGBActionTypeLeft);
            currentLeftTouch = [[self IOSView] tapDownAtPoint:punchLeft];
        } else {
            
            if (currentLeftTouch) {
                [[self IOSView] finishTouch:currentLeftTouch];
                currentLeftTouch = nil;
            }
        }
    };
    
    __block UITouch *jumpTouch = nil;
    profile.buttonA.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        if (pressed)
        {
            CGPoint jump = PAT([self actionTypeForControllerButton:ButtonA]);//PAT(kPGBActionTypeJump);
            //jumpTouch = [[self IOSView] longPressAtPoint: jump duration: .1];
            jumpTouch =  [[self IOSView] tapDownAtPoint:jump];
        } else {
            if (jumpTouch) {
                [[self IOSView] finishTouch:jumpTouch];
                jumpTouch = nil;
            }
            
        }
    };
    
    
    profile.buttonB.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        if (pressed)
        {
            CGPoint laydown = PAT([self actionTypeForControllerButton:ButtonB]);//PAT(kPGBActionTypeConceal);
            [[self IOSView] tapAtPoint:laydown];
        }
    };
    
    profile.buttonX.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        if (pressed)
        {
            CGPoint run = PAT([self actionTypeForControllerButton:ButtonX]);////PAT(kPGBActionTypeRun);
            [[self IOSView] tapAtPoint:run];
        }
    };
    
    profile.buttonY.valueChangedHandler = ^(GCControllerButtonInput *button, float value, BOOL pressed)
    {
        if (pressed)
        {
            CGPoint crouch = PAT([self actionTypeForControllerButton:ButtonY]);//PAT(kPGBActionTypeCrouch);
            [[self IOSView] tapAtPoint:crouch];
            
        }
    };
}

%new - (void)controllerDisconnected:(NSNotification *)n {
    %log;

}
*/

- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    %log;
    PUBGControllerManager *man = [PUBGControllerManager sharedManager];
    [man listenForControllers];
    //[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(controllerConnected:) name:GCControllerDidConnectNotification object:nil];
    //[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(controllerDisconnected:) name:GCControllerDidDisconnectNotification object:nil];
    return %orig;

}
/*
%new - (PGBActionType)actionTypeFromConstant:(NSString *)constant {
    
    PGBActionType type = kPGBActionTypeUndefined;
    if ([constant isEqualToString:PGBActionTypeAim]){
        type = kPGBActionTypeAim;
    } else if ([constant isEqualToString:PGBActionTypeRun]){
        type = kPGBActionTypeRun;
    } else if ([constant isEqualToString:PGBActionTypeConceal]){
        type = kPGBActionTypeConceal;
    } else if ([constant isEqualToString:PGBActionTypeReload]){
        type = kPGBActionTypeReload;
    } else if ([constant isEqualToString:PGBActionTypeFirstWeapon]){
        type = kPGBActionTypeFirstWeapon;
    } else if ([constant isEqualToString:PGBActionTypeSecondWeapon]){
        type = kPGBActionTypeSecondWeapon;
    } else if ([constant isEqualToString:PGBActionTypeTrainingButton]){
        type = kPGBActionTypeTrainingButton;
    } else if ([constant isEqualToString:PGBActionTypeOKCancelButton]){
        type = kPGBActionTypeOKCancelButton;
    } else if ([constant isEqualToString:PGBActionTypeXCloseButton]){
        type = kPGBActionTypeXCloseButton;
    } else if ([constant isEqualToString:PGBActionTypeStartButton]){
        type = kPGBActionTypeStartButton;
    } else if ([constant isEqualToString:PGBActionTypeOKDualButton]){
        type = kPGBActionTypeOKDualButton;
    } else if ([constant isEqualToString:PGBActionTypeXClose2Button]){
        type = kPGBActionTypeXClose2Button;
    } else if ([constant isEqualToString:PGBActionTypeRight]){
        type = kPGBActionTypeRight;
    } else if ([constant isEqualToString:PGBActionTypeLeft]){
        type = kPGBActionTypeLeft;
    } else if ([constant isEqualToString:PGBActionTypeJump]){
        type = kPGBActionTypeJump;
    } else if ([constant isEqualToString:PGBActionTypeCrouch]){
        type = kPGBActionTypeCrouch;
    } else if ([constant isEqualToString:PGBActionTypeSmallWeapon]){
        type = kPGBActionTypeSmallWeapon;
    } else if ([constant isEqualToString:PGBActionTypeExitRound]){
        type = kPGBActionTypeExitRound;
    } else if ([constant isEqualToString:PGBActionHandAction]){
        type = kPGBActionHandAction;
    } else if ([constant isEqualToString:PGBActionTypeInventory]){
        type = kPGBActionTypeInventory;
    } else if ([constant isEqualToString:PGBActionFirstItemSelect]){
        type = kPGBActionFirstItemSelect;
    } else if ([constant isEqualToString:PGBActionTypeOKSoloButton]){
        type = kPGBActionTypeOKSoloButton;
    } else if ([constant isEqualToString:PGBActionTypePeakLeft]){
        type = kPGBActionTypePeakLeft;
    }  else if ([constant isEqualToString:PGBActionTypePeakRight]){
        type = kPGBActionTypePeakRight;
    } else if ([constant isEqualToString:PGBActionMapAction]){
        type = kPGBActionMapAction;
    }
    return type;
    
}

%new - (CGPoint)pointForActionType:(PGBActionType)type {
    
    CGPoint outpoint = CGPointZero;
    
    switch (type) {
        case kPGBActionTypeAim:
            outpoint = [self convertPointForScreen:CGPointMake(641,197)];
            break;
            
        case kPGBActionTypeRun:
            outpoint = [self convertPointForScreen:CGPointMake(558, 99)];
            break;
            
        case kPGBActionTypeConceal: //lay down
            outpoint = [self convertPointForScreen:CGPointMake(617, 345)];
            break;
    
        case kPGBActionTypeReload:
            outpoint = [self convertPointForScreen:CGPointMake(508,353)];
            break;
            
        case kPGBActionTypeFirstWeapon:
            outpoint = [self convertPointForScreen:CGPointMake(290,340)];
            break;
  
        case kPGBActionTypeSecondWeapon:
            outpoint = [self convertPointForScreen:CGPointMake(376,340)];
            break;
            
        case kPGBActionTypeTrainingButton:
            outpoint = [self convertPointForScreen:CGPointMake(28, 140)];
            break;
            
        case kPGBActionTypeOKCancelButton:    //Cancel button (on ok/cancel alert)
            outpoint = [self convertPointForScreen:CGPointMake(281,266)];
            break;
            
        case kPGBActionTypeXCloseButton:  //top right close x
            outpoint = [self convertPointForScreen:CGPointMake(610,72)];
            break;
   
        case kPGBActionTypeStartButton:
            outpoint = [self convertPointForScreen:CGPointMake(81, 32)];
            break;
            
        case kPGBActionTypeOKDualButton: //(point for OK on Cancel / OK alert)
            outpoint = [self convertPointForScreen:CGPointMake(388,266)];
            break;
            
        case kPGBActionTypeXClose2Button: //lower close X
            outpoint = [self convertPointForScreen:CGPointMake(627,31)];
            break;
    
        case kPGBActionTypeRight:
            outpoint = [self convertPointForScreen:CGPointMake(565, 275)];
            break;
            
        case kPGBActionTypeLeft:
            outpoint = [self convertPointForScreen:CGPointMake(39, 198)];
            break;
            
        case kPGBActionTypeJump:
            outpoint = [self convertPointForScreen:CGPointMake(639, 258)]; //long press
            break;
            
        case kPGBActionTypeCrouch:
            outpoint = [self convertPointForScreen:CGPointMake(560, 349)];
            break;
        case kPGBActionTypeSmallWeapon:
            outpoint = [self convertPointForScreen:CGPointMake(406,313)];
            break;
            
        case kPGBActionTypeExitRound:
            outpoint = [self convertPointForScreen:CGPointMake(64,13)];
            break;
            
        case kPGBActionTypeInventory:
            outpoint =  [self convertPointForScreen:CGPointMake(48, 343)];
            break;
            
        case kPGBActionHandAction:
            outpoint = [self convertPointForScreen:CGPointMake(480,95)];
            break;
            
        case kPGBActionFirstItemSelect:
            outpoint = [self convertPointForScreen:CGPointMake(437,132)];// y+50 = 2 item y+ 100 = 3rd item
            break;

        case kPGBActionTypeOKSoloButton:
           outpoint = [self convertPointForScreen:CGPointMake(330,266)];
           break;

        case kPGBActionTypePeakLeft:
           outpoint = [self convertPointForScreen:CGPointMake(91,139)];
           break;

        case kPGBActionTypePeakRight:
           outpoint = [self convertPointForScreen:CGPointMake(144,139)];
           break;
        
        case kPGBActionMapAction:
            outpoint = [self convertPointForScreen:CGPointMake(645,18)];
            break;

        default:
            break;
    }
    return outpoint;
    
}

%end

%hook FIOSView
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2 { %log; %orig; }
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2 { %log; %orig; } 
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2 { %log; %orig; } 
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 { 	%log; %orig; }
- (void)HandleTouches:(id)arg1 ofType:(int)arg2 { %log; %orig; }

%end
*/