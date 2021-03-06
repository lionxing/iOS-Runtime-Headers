/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASCancelSpeech : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)cancelSpeech;
+ (id)cancelSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
