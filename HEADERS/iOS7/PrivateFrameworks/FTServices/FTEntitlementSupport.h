/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface FTEntitlementSupport : NSObject
{
    struct __CTServerConnection *_ctServerConnection;
    struct __CFString *_entitlementStatus;
}

+ (id)sharedInstance;
- (void)_handleCTServiceRequestName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2 contextInfo:(void *)arg3;
- (_Bool)_disconnectCTServerConnection;
- (_Bool)_reconnectCTServerConnectionIfNecessary;
- (_Bool)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (void)_unregisterForCTEntitlementNotifications;
- (_Bool)_registerForCTEntitlementNotifications;
- (void)_handleEntitlementNotification:(struct __CFDictionary *)arg1;
- (void)_registrationStateChanged;
- (id)_rawEntitlementValue;
@property(readonly, nonatomic) NSDictionary *registrationState;
@property(readonly, nonatomic) _Bool faceTimeNonWiFiEntitled;
- (id)init;

@end
