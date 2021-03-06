/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMapTable, NSMutableSet, NSSet, WBSHistorySQLiteStore;

@interface WBSHistoryDeletionPlan : NSObject {
    NSMutableSet *_discoveredItemsToDelete;
    NSSet *_discoveredVisitsToDelete;
    NSSet *_excludedItems;
    NSSet *_excludedVisits;
    WBSHistorySQLiteStore *_store;
    NSSet *_triggeringItems;
    NSSet *_triggeringVisits;
    NSMapTable *_updatedLastVisitsByItem;
}

@property(readonly) NSSet * allItemsToDelete;
@property(readonly) NSMapTable * allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property(readonly) NSSet * allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property(readonly) NSSet * discoveredItemsToDelete;
@property(readonly) NSSet * discoveredVisitsToDelete;
@property(readonly) NSSet * triggeringItems;
@property(readonly) NSSet * triggeringVisits;
@property(readonly) NSMapTable * updatedLastVisitsByItem;

- (void).cxx_destruct;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(id)arg4;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2;
- (void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2;
- (id)_visitsForItems:(id)arg1;
- (id)allItemsToDelete;
- (id)allVisitsToDeleteByItemExcludingItemsBeingDeleted;
- (id)allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
- (id)discoveredItemsToDelete;
- (id)discoveredVisitsToDelete;
- (id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4;
- (void)prepare;
- (id)triggeringItems;
- (id)triggeringVisits;
- (id)updatedLastVisitsByItem;

@end
