/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BKSApplicationProcessInfo;

@interface BKSWorkspaceApplicationInfo : NSObject
{
    BKSApplicationProcessInfo *_info;
    _Bool _recordingAudio;
    _Bool _externalAccessory;
}

@property(nonatomic) _Bool usingExternalAccessory; // @synthesize usingExternalAccessory=_externalAccessory;
@property(nonatomic) _Bool recordingAudio; // @synthesize recordingAudio=_recordingAudio;
@property(retain, nonatomic) BKSApplicationProcessInfo *info; // @synthesize info=_info;
- (id)description;
- (void)dealloc;

@end
