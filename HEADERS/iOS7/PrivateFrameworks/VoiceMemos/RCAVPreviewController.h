/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVItem, AVQueue, NSMutableArray, NSObject<OS_dispatch_source>, NSTimer;

@interface RCAVPreviewController : NSObject
{
    AVQueue *_avQueue;
    double _currentTimeTarget;
    NSMutableArray *_weakObservers;
    NSTimer *_updateTimer;
    NSObject<OS_dispatch_source> *_monitorUnderlyingAssetSource;
    _Bool _preparingToPlay;
    double _currentTimeDelegateUpdateRate;
    AVItem *_avItem;
}

@property(readonly, nonatomic, getter=isPreparingToPlay) _Bool preparingToPlay; // @synthesize preparingToPlay=_preparingToPlay;
@property(retain, nonatomic, setter=setAVItem:) AVItem *avItem; // @synthesize avItem=_avItem;
@property(nonatomic) double currentTimeDelegateUpdateRate; // @synthesize currentTimeDelegateUpdateRate=_currentTimeDelegateUpdateRate;
- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_itemPlaybackFailedNotification:(id)arg1;
- (void)_controllerPlaybackTimeDidJumpNotification:(id)arg1;
- (void)_controllerPlaybackRateDidChangeNotification:(id)arg1;
- (void)_controllerConnectionInvalidatedNotification:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (void)_postDelegateUpdate;
- (void)_removeTimerForced:(_Bool)arg1;
- (void)_addTimerForced:(_Bool)arg1;
- (_Bool)_monitorUnderlyingAssetPath:(id)arg1 assetDisappearedBlock:(id)arg2;
- (void)_stopMonitoringUnderylingAssetPath;
- (void)_handleUnderlyingAssetDisappeared;
- (void)_handleDidStopPlaybackWithError:(id)arg1;
- (void)_performWithObserversBlock:(id)arg1;
- (CDStruct_73a5d3ca)_assetPlaybackTimeRange;
- (void)_prepareQueueWithPlaybackTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)_avControllerMakeActive;
- (id)_avControllerIfActive;
- (void)setPreparingToPlay:(_Bool)arg1 notifyObservers:(_Bool)arg2;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) float rate;
@property(nonatomic) double currentTime;
- (void)stop;
- (void)pause;
- (void)playOrRestart;
- (void)playWithTimeRange:(CDStruct_73a5d3ca)arg1 startTime:(double)arg2;
- (void)reloadItem;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
