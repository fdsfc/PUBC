#import <GameController/GameController.h>
#import "NSObject+AssociatedObjects.h"
#import "UIView-KIFAdditions.h"
#import "PUBGDefines.h"
#import "PUBGControllerManager.h"




@interface IOSAppDelegate : UIResponder <UIApplicationDelegate, UITextFieldDelegate>

@property(retain) UIView *IOSView; // @synthesize IOSView;

@end


%hook IOSAppDelegate


- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    %log;
    PUBGControllerManager *man = [PUBGControllerManager sharedManager];
    [man listenForControllers];
    return %orig;

}
