/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary, NSMutableDictionary, NSString;

@interface MCVPNPayload : MCPayload  {
    NSMutableDictionary *_atom;
    NSString *_certificateUUID;
    unsigned char _userNameRequired;
    unsigned char _passwordRequired;
    unsigned char _proxyUserNameRequired;
    unsigned char _proxyPasswordRequired;
    unsigned char _sharedSecretRequired;
    unsigned char _pinRequired;
    NSString *_userNameKey;
    NSString *_passwordKey;
    NSString *_proxyUserNameKey;
    NSString *_proxyPasswordKey;
    NSString *_sharedSecretKey;
    NSString *_pinKey;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

@property(copy) NSString * pin;
@property(copy) NSString * sharedSecret;
@property(copy) NSString * proxyPassword;
@property(copy) NSString * proxyUserName;
@property(copy) NSString * password;
@property(copy) NSString * userName;
@property(readonly) NSString * pinKey;
@property(readonly) NSString * sharedSecretKey;
@property(readonly) NSString * proxyPasswordKey;
@property(readonly) NSString * proxyUserNameKey;
@property(readonly) NSString * passwordKey;
@property(readonly) NSString * userNameKey;
@property(readonly) unsigned char pinRequired;
@property(readonly) unsigned char sharedSecretRequired;
@property(readonly) unsigned char proxyPasswordRequired;
@property(readonly) unsigned char proxyUserNameRequired;
@property(readonly) unsigned char passwordRequired;
@property(readonly) unsigned char userNameRequired;
@property(readonly) NSString * certificateUUID;
@property(readonly) NSDictionary * atom;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (void)dealloc;
- (id)pin;
- (void)setPin:(id)arg1;
- (id)sharedSecret;
- (void)setSharedSecret:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (id)proxyUserName;
- (void)setProxyUserName:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)pinKey;
- (id)sharedSecretKey;
- (id)proxyPasswordKey;
- (id)proxyUserNameKey;
- (id)passwordKey;
- (id)userNameKey;
- (unsigned char)pinRequired;
- (unsigned char)sharedSecretRequired;
- (unsigned char)proxyPasswordRequired;
- (unsigned char)proxyUserNameRequired;
- (unsigned char)userNameRequired;
- (id)atom;
- (void)_validateVPNPayload:(id)arg1;
- (id)proxyPassword;
- (id)certificateUUID;
- (unsigned char)passwordRequired;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setPassword:(id)arg1;
- (id)userName;
- (id)password;

@end
