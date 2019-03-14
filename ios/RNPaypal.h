
#import <React/RCTBridgeModule.h>
#import "BraintreeCore.h"
#import "BraintreePayPal.h"

@interface RNPaypal : UIViewController <RCTBridgeModule, BTAppSwitchDelegate, BTViewControllerPresentingDelegate>

+ (instancetype)sharedInstance;

- (void)configure;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@end
