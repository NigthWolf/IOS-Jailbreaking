/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand-Protocol.h"

@class NSString, NSURL;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addCompleted;
@property(copy, nonatomic) NSURL *worldClockId;
@property(nonatomic) _Bool alreadyExists;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end
