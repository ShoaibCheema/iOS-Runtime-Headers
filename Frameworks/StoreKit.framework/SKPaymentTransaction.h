/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentTransaction : NSObject {
    id _internal;
}

@property(readonly) NSError *error;
@property(readonly) SKPaymentTransaction *originalTransaction;
@property(readonly) SKPayment *payment;
@property(readonly) NSDate *transactionDate;
@property(readonly) NSString *transactionIdentifier;
@property(readonly) NSData *transactionReceipt;
@property(readonly) NSInteger transactionState;

- (id)_transactionIdentifier;
- (BOOL)canMergeWithTransaction:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPayment:(id)arg1;
- (id)matchingIdentifier;
- (BOOL)mergeWithTransaction:(id)arg1;
- (id)originalTransaction;
- (id)payment;
- (id)transactionDate;
- (id)transactionIdentifier;
- (id)transactionReceipt;
- (NSInteger)transactionState;

@end