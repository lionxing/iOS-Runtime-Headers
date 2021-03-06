/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSDictionary;

@interface GKDevice : NSObject  {
    NSString *_udid;
    NSString *_deviceName;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSString *_gameKitVersion;
    NSDictionary *_screenCapabilities;
    BOOL _gameCenterSupported;
}

@property(getter=isGameCenterSupported,readonly) BOOL gameCenterSupported;
@property(readonly) NSString * udid;
@property(readonly) NSString * deviceName;
@property(readonly) NSString * osVersion;
@property(readonly) NSString * buildVersion;
@property(readonly) NSString * gameKitVersion;
@property(readonly) NSDictionary * screenCapabilities;

+ (id)currentDevice;

- (id)init;
- (void)dealloc;
- (id)storeUserAgent;
- (id)userAgent;
- (id)gameKitVersion;
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;
- (id)buildVersionHeader;
- (id)protocolVersionHeader;
- (id)processNameHeader;
- (id)udid;
- (id)screenCapabilities;
- (BOOL)isGameCenterSupported;
- (id)deviceName;
- (id)osVersion;
- (id)buildVersion;

@end
