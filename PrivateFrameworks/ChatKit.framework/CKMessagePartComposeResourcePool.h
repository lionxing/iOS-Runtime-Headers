/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessagePartComposeResourcePool : NSObject  {
}

+ (int)requestProviderID;
+ (void)relinquishProviderID:(int)arg1;
+ (void)addComposeImages:(id)arg1 withID:(int)arg2 forProvider:(int)arg3;
+ (void)removeComposeImagesWithID:(int)arg1 forProvider:(int)arg2;
+ (void)removeAllPartsForProviderID:(int)arg1;
+ (id)composeImagesWithPartID:(int)arg1 providerID:(int)arg2;


@end
