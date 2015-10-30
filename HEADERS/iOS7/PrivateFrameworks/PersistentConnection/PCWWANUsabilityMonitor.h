/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PCInterfaceUsabilityMonitorDelegate-Protocol.h"
#import "PCInterfaceUsabilityMonitorProtocol-Protocol.h"

@class CUTWeakReference, NSString, PCInterfaceUsabilityMonitor;

// Not exported
@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>
{
    struct dispatch_queue_s *_delegateQueue;
    struct dispatch_queue_s *_ivarQueue;
    struct dispatch_queue_s *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    _Bool _isInCall;
    _Bool _isInHighPowerState;
    _Bool _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    struct __CFString *_currentRAT;
    int _powerlogCDRXToken;
    struct __CTServerConnection *_telephonyServer;
    int _wwanContextID;
    struct dispatch_queue_s *_ctServerQueue;
}

@property(readonly, nonatomic) struct __CFString *currentRAT; // @synthesize currentRAT=_currentRAT;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(_Bool)arg1;
- (void)_forwardConfigurationOnIvarQueue;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2;
- (void)_adjustInterfaceNameForWWANContextID:(int)arg1;
- (void)_setupWWANMonitor;
- (void)dealloc;
- (id)initWithDelegateQueue:(struct dispatch_queue_s *)arg1;

@end
