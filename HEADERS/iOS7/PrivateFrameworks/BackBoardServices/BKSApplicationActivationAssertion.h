/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BKSWorkspace, NSString;

@interface BKSApplicationActivationAssertion : NSObject
{
    BKSWorkspace *_workspace;
    NSString *_uniqueID;
    NSString *_name;
    _Bool _released;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)releaseAssertion;
- (void)dealloc;
- (id)_initWithWorkspace:(id)arg1 application:(id)arg2 name:(id)arg3;
- (id)init;

@end
