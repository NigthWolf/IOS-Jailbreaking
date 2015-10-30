/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject
{
    Class _APSConnectionClass;
    APSConnection *_apsConnection;
    NSTimer *_reliabilityAttemptTimer;
    _Bool _enableCriticalReliability;
    _Bool _criticalReliabilityEnabledState;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableCriticalReliability;
- (void)_tryToEnableReliability;
- (void)_reallySetCriticalReliability:(_Bool)arg1;
- (void)_setReliabilityTimeoutInterval;
- (void)_clearReliabilityTimeoutInterval;
- (void)_createAPSConnectionIfNeeded;
@property(readonly, nonatomic) _Bool networkReachable;
@property(readonly, nonatomic) _Bool networkActive;
@property(readonly, nonatomic) _Bool networkEnabled;
@property(readonly, nonatomic) _Bool dataActiveAndReachable;
@property(readonly, nonatomic) _Bool willSearchForNetwork;
@property(readonly, nonatomic) _Bool wiFiActiveAndReachable;
@property(readonly, nonatomic) _Bool validNetworkReachable;
@property(readonly, nonatomic) _Bool validNetworkActive;
@property(readonly, nonatomic) _Bool validNetworkEnabled;
@property(readonly, nonatomic) _Bool allowAnyNetwork;

@end
