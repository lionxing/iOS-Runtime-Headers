/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem  {
    CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;
    CoreDAVItemWithNoChildren *_validSyncToken;
    CoreDAVItemWithNoChildren *_noUIDConflict;
    CoreDAVItemWithNoChildren *_validAddressData;
    CoreDAVItemWithNoChildren *_maxResourceSize;
    CoreDAVItemWithNoChildren *_uid;
    CoreDAVItemWithNoChildren *_ctagOkay;
    CoreDAVItemWithNoChildren *_maxImageSize;
    CoreDAVItemWithNoChildren *_invalidImageType;
    CoreDAVItemWithNoChildren *_imageError;
    CoreDAVLeafItem *_status;
}

@property(retain) CoreDAVItemWithNoChildren * numberOfMatchesWithinLimits;
@property(retain) CoreDAVItemWithNoChildren * validSyncToken;
@property(retain) CoreDAVItemWithNoChildren * noUIDConflict;
@property(retain) CoreDAVItemWithNoChildren * validAddressData;
@property(retain) CoreDAVItemWithNoChildren * maxResourceSize;
@property(retain) CoreDAVItemWithNoChildren * uid;
@property(retain) CoreDAVItemWithNoChildren * ctagOkay;
@property(retain) CoreDAVItemWithNoChildren * maxImageSize;
@property(retain) CoreDAVItemWithNoChildren * invalidImageType;
@property(retain) CoreDAVItemWithNoChildren * imageError;
@property(retain) CoreDAVLeafItem * status;


- (void)setUid:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)copyParseRules;
- (void)setImageError:(id)arg1;
- (void)setInvalidImageType:(id)arg1;
- (void)setCtagOkay:(id)arg1;
- (void)setValidAddressData:(id)arg1;
- (void)setNoUIDConflict:(id)arg1;
- (void)setValidSyncToken:(id)arg1;
- (void)setNumberOfMatchesWithinLimits:(id)arg1;
- (id)imageError;
- (id)invalidImageType;
- (id)ctagOkay;
- (id)validAddressData;
- (id)noUIDConflict;
- (id)validSyncToken;
- (id)numberOfMatchesWithinLimits;
- (void)setMaxResourceSize:(id)arg1;
- (id)maxResourceSize;
- (id)uid;
- (id)maxImageSize;
- (void)setMaxImageSize:(id)arg1;

@end
