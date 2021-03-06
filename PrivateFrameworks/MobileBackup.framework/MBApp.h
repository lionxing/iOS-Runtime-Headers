/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSString, NSDate, NSDictionary, NSMutableDictionary;

@interface MBApp : NSObject <NSCopying> {
    NSMutableDictionary *_plist;
}

@property(readonly) NSString * bundleID;
@property(readonly) NSString * bundleVersion;
@property(retain) NSString * containerDir;
@property(readonly) NSString * safeHarborDir;
@property(retain) NSDate * datePlacedInSafeHarbor;
@property(readonly) BOOL isPlaceholder;
@property(getter=isSafeHarbor,readonly) BOOL safeHarbor;
@property(readonly) NSDictionary * infoPlist;

+ (id)appWithBundleID:(id)arg1;
+ (id)appWithPropertyList:(id)arg1;

- (BOOL)isPlaceholder;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)bundleVersion;
- (id)domain;
- (id)bundleID;
- (id)initWithPropertyList:(id)arg1;
- (id)placeholderDomainWithCache:(id)arg1;
- (id)infoPlist;
- (BOOL)isEqualToApp:(id)arg1;
- (id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1;
- (BOOL)isSafeHarbor;
- (id)datePlacedInSafeHarbor;
- (void)setContainerDir:(id)arg1;
- (void)setDatePlacedInSafeHarbor:(id)arg1;
- (id)propertyListForSafeHarborInfo;
- (id)safeHarborDir;
- (id)containerDir;
- (id)propertyListForBackupProperties;

@end
