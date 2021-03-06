/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MCAdvertiserAssistantDelegate>, MCNearbyServiceAdvertiser, MCPeerID, MCSession, NSBundle, NSDictionary, NSMutableArray, NSString, UIAlertView;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate, UIAlertViewDelegate> {
    MCNearbyServiceAdvertiser *_advertiser;
    UIAlertView *_alertView;
    NSString *_appName;
    <MCAdvertiserAssistantDelegate> *_delegate;
    NSDictionary *_discoveryInfo;
    NSBundle *_frameworkBundle;
    id _invitationHandlerForPresentedAlert;
    NSMutableArray *_invitationsBuffer;
    BOOL _isAdvertising;
    MCPeerID *_myPeerID;
    NSString *_serviceType;
    MCSession *_session;
    BOOL _wasAdvertising;
}

@property(retain) MCNearbyServiceAdvertiser * advertiser;
@property(retain) UIAlertView * alertView;
@property(copy,readonly) NSString * appName;
@property(copy,readonly) NSString * debugDescription;
@property <MCAdvertiserAssistantDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(copy) NSDictionary * discoveryInfo;
@property(retain) NSBundle * frameworkBundle;
@property(readonly) unsigned int hash;
@property(copy) id invitationHandlerForPresentedAlert;
@property(retain) NSMutableArray * invitationsBuffer;
@property BOOL isAdvertising;
@property(copy) MCPeerID * myPeerID;
@property(copy) NSString * serviceType;
@property(retain) MCSession * session;
@property(readonly) Class superclass;
@property BOOL wasAdvertising;

- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(id)arg4;
- (id)advertiser;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)alertView;
- (id)appName;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)discoveryInfo;
- (id)frameworkBundle;
- (id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3;
- (id)invitationHandlerForPresentedAlert;
- (id)invitationsBuffer;
- (BOOL)isAdvertising;
- (id)myPeerID;
- (void)presentNextInvitation;
- (id)serviceType;
- (id)session;
- (void)setAdvertiser:(id)arg1;
- (void)setAlertView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryInfo:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setInvitationHandlerForPresentedAlert:(id)arg1;
- (void)setInvitationsBuffer:(id)arg1;
- (void)setIsAdvertising:(BOOL)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setWasAdvertising:(BOOL)arg1;
- (void)start;
- (void)stop;
- (BOOL)wasAdvertising;
- (void)willPresentAlertView:(id)arg1;

@end
