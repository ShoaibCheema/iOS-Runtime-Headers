/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    unsigned int _dequeued;
    NSMutableDictionary *_index;
}

@property(readonly) unsigned int count;

- (void)_filterIndex:(id)arg1;
- (void)_processCallBacks;
- (void)addDequeueCallback:(id)arg1;
- (void)addNotification:(id)arg1 asDead:(BOOL)arg2;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)dequeue:(unsigned int)arg1 block:(id)arg2;
- (id)description;
- (id)init;
- (void)removeAllObjects;

@end
