/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString, NSData;

@interface FTiMessageRequestMMCSUploadToken : FTiMessageMessage <NSCopying> {
    NSString *_responseAuthToken;
    NSNumber *_length;
    NSData *_signature;
    NSString *_responseRequestURL;
    NSString *_responseRequestorID;
}

@property(copy) NSData * signature;
@property(copy) NSNumber * length;
@property(copy) NSString * responseAuthToken;
@property(copy) NSString * responseRequestURL;
@property(copy) NSString * responseRequestorID;


- (id)messageBody;
- (id)length;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)responseRequestURL;
- (void)setResponseRequestURL:(id)arg1;
- (void)setResponseRequestorID:(id)arg1;
- (id)responseRequestorID;
- (void)setResponseAuthToken:(id)arg1;
- (id)responseAuthToken;
- (void)handleResponseDictionary:(id)arg1;
- (int)responseCommand;
- (id)requiredKeys;
- (int)command;
- (void)setLength:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;

@end
