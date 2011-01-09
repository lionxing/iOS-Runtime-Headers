/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAFolder;



@interface DAMessageStore : LibraryStore 
{
    DAFolder *_DAFolder;
}


- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (id)_folderIDForFetching;
- (NSInteger)fetchNumMessages:(NSUInteger)arg1 preservingUID:(id)arg2 beforeUID:(NSUInteger)arg3 synchronize:(BOOL)arg4 compact:(BOOL)arg5;
- (NSInteger)fetchMessagesMatchingCriterion:(id)arg1 limit:(NSUInteger)arg2;
- (void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2;
- (void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (BOOL)allowsAppend;
- (id)messageForRemoteID:(id)arg1;
- (void)deleteMessagesOlderThanNumberOfDays:(NSInteger)arg1 compact:(BOOL)arg2;
- (void)purgeMessagesBeyond:(NSUInteger)arg1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(NSUInteger)arg1 limit:(NSUInteger)arg2;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)_fetchBodyDataForSearchResult:(id)arg1 format:(NSInteger)arg2 streamConsumer:(id)arg3;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(NSInteger)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3;
- (id)defaultAlternativeForMessage:(id)arg1 inPart:(id)arg2;
- (id)bestAlternativeForMessage:(id)arg1 inPart:(id)arg2;
- (BOOL)canFetchSearchResults;
- (BOOL)canDeleteMessage:(id)arg1;

@end