//  Created by Moses DeJong on 11/8/09.
//
//  License terms defined in License.txt.

#if !defined(REGRESSION_TESTS)
#error "RegressionTests.h should not be included unless REGRESSION_TESTS is defined"
#endif // REGRESSION_TESTS

#import <UIKit/UIKit.h>

@interface RegressionTests : NSObject {
}

// Entry point for app self test, iterate over all classes named "*Test" and
// invoke test methods named "test*".

+ (void) testApp;

+ (void) cleanupAfterTest;

// Wait inside the event loop for a period of time indicated in seconds

+ (void) waitFor:(NSTimeInterval)maxWaitTime;

// Invoke the indicated selector for the object until it returns TRUE.
// The maxWaitTime indicates the maximum number of seconds to wait.
// Each time the selector returns FALSE, the event loop will be entered
// for 1 second so that events can be processed. This method returns
// TRUE if the selector returned TRUE before maxWaitTime is reached.

+ (BOOL) waitUntilTrue:(id)object
              selector:(SEL)selector
           maxWaitTime:(NSTimeInterval)maxWaitTime;  

@end
