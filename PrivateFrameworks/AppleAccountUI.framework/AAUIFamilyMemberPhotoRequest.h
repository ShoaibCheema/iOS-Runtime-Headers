/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSNumber, NSString, SSAccount;

@interface AAUIFamilyMemberPhotoRequest : AAFamilyRequest {
    NSNumber *_familyMemberDSID;
    SSAccount *_iTunesAccount;
    NSString *_serverCacheTag;
}

@property(copy) NSNumber * familyMemberDSID;
@property(setter=setiTunesAccount:,retain) SSAccount * iTunesAccount;
@property(copy) NSString * serverCacheTag;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)familyMemberDSID;
- (id)iTunesAccount;
- (id)serverCacheTag;
- (void)setFamilyMemberDSID:(id)arg1;
- (void)setServerCacheTag:(id)arg1;
- (void)setiTunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end