/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface PLDuetSnapshot : NSObject
{
    NSMutableSet *_duetEvents;
    double _timeSinceEpoch;
    unsigned long long _sequenceId;
}

@property unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property double timeSinceEpoch; // @synthesize timeSinceEpoch=_timeSinceEpoch;
@property(retain) NSMutableSet *duetEvents; // @synthesize duetEvents=_duetEvents;
- (id)description;
- (void)dealloc;
- (id)initWithDuetEvents:(id)arg1 time:(double)arg2 sequenceId:(unsigned long long)arg3;

@end

