/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface _HKDelayedOperation : NSObject {
    id _block;
    double _lastExecution;
    int _pendingRunCount;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)executeWithDelay:(double)arg1;
- (id)initWithQueue:(id)arg1 block:(id)arg2;
- (void)invalidate;

@end
