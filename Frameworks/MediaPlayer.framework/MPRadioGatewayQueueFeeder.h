/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, RadioStation;

@interface MPRadioGatewayQueueFeeder : MPQueueFeeder {
    MPAVItem *_gatewayItem;
    RadioStation *_station;
}

@property(retain) MPAVItem * gatewayItem;
@property(retain) RadioStation * station;

- (void).cxx_destruct;
- (BOOL)canSeek;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSkipToPreviousItem;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (id)gatewayItem;
- (unsigned int)initialPlaybackQueueDepth;
- (BOOL)isRadioQueueFeeder;
- (unsigned int)itemCount;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (unsigned int)realRepeatType;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (void)setGatewayItem:(id)arg1;
- (void)setStation:(id)arg1;
- (id)station;

@end