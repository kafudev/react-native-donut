
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNDonutSpec.h"

@interface Donut : NSObject <NativeDonutSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Donut : NSObject <RCTBridgeModule>
#endif

@end
