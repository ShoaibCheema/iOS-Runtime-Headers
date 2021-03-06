/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManager : NSObject {
    unsigned int _tileGroupIdentifier;
}

+ (id)sharedManager;
+ (id)sharedManagerForTileGroupIdentifier:(unsigned int)arg1;

- (id)allResourceNames;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id)arg3;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1;
- (BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;

@end
