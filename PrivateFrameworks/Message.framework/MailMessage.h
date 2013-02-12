/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessageInfo;

@interface MailMessage : Message {
    MFMessageInfo *_info;
    unsigned long long _messageFlags;
    unsigned long long _modSequenceNumber;
    unsigned char _subjectPrefixLength;
}

@property unsigned long long modSequenceNumber;

+ (NSUInteger)displayablePriorityForPriority:(NSInteger)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (id)messageWithRFC822Data:(id)arg1;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;
+ (NSUInteger)validatePriority:(NSInteger)arg1;

- (id)URL;
- (id)account;
- (id)copyMessageInfo;
- (void)dealloc;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)loadMeetingData;
- (id)loadMeetingExternalID;
- (id)mailbox;
- (void)markAsForwarded;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (unsigned long long)messageFlags;
- (id)messageStore;
- (unsigned long long)modSequenceNumber;
- (unsigned short)numberOfAttachments;
- (id)originalMailboxURL;
- (NSInteger)priority;
- (id)remoteMailboxURL;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderDigest:(id)arg8 inReplyToHeaderDigest:(id)arg9 conversationID:(id)arg10 summary:(id)arg11;
- (void)setModSequenceNumber:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSummary:(id)arg1;
- (BOOL)shouldSetSummary;
- (id)subject;
- (id)subjectAndPrefixLength:(NSUInteger*)arg1;
- (id)subjectNotIncludingReAndFwdPrefix;

@end