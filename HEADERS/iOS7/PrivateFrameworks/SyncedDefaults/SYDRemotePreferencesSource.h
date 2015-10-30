/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, SYDClient;

@interface SYDRemotePreferencesSource : NSObject
{
    long long _generationCount;
    long long _lastGenerationFromDisk;
    struct __CFString *preferenceID;
    struct __CFURL *urlOnDisk;
    struct __CFDictionary *cache;
    long long storageChangeCount;
    long long initialSyncChangeCount;
    unsigned char isInitialSync;
    struct __CFSet *dirtyKeys;
    struct __CFDictionary *configurationDictionary;
    NSMutableDictionary *externalChanges;
    SYDClient *client;
    id registrationBlock;
    NSObject<OS_dispatch_queue> *registrationQueue;
    NSObject<OS_dispatch_queue> *_protectionQueue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    double _lastAccess;
    _Bool _forceNextSynchronization;
}

+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (void)initialize;
- (id)serverSideDebugDescription;
- (void)_didReceiveMemoryWarning;
- (void)_createMemoryWarningSource;
- (id)_warningSource;
- (void)updateConfiguration;
- (void)unregisterForSynchronizedDefaults;
- (void)registerForSynchronizedDefaults;
- (long long)generationCount;
- (struct __CFDictionary *)copyDictionary;
- (struct __CFArray *)copyKeyList;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (id)copyExternalChangesWithChangeCount:(long long *)arg1;
- (unsigned char)hasExternalChanges;
- (unsigned char)isInitialSync;
- (unsigned char)_synchronizeForced:(unsigned char)arg1;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (unsigned char)synchronize;
- (void)synchronizationWithCompletionHandler:(id)arg1;
- (void)scheduleRemoteSynchronization;
- (void)_cachePlistFromDisk;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void *)getValueForKey:(struct __CFString *)arg1;
- (void)_forceRegistrationNow;
- (void)finalize;
- (void)dealloc;
- (id)initWithApplicationID:(struct __CFString *)arg1 storeID:(struct __CFString *)arg2 shared:(_Bool)arg3 additionalSource:(_Bool)arg4;
- (id)initWithApplicationID:(struct __CFString *)arg1 storeID:(struct __CFString *)arg2 shared:(_Bool)arg3;
- (id)initWithApplicationID:(struct __CFString *)arg1 shared:(_Bool)arg2;
- (long long)maximumTotalDataLength;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyLength;
- (long long)maximumKeyCount;
- (long long)configurationValueForKey:(struct __CFString *)arg1;
- (struct __CFDictionary *)copyConfigurationDictionary;
- (void)_storeConfiguration:(struct __CFDictionary *)arg1;

@end
