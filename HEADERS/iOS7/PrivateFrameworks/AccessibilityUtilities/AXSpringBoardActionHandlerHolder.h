/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AXSpringBoardActionHandlerHolder : NSObject
{
    id _handler;
    long long _type;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) id handler; // @synthesize handler=_handler;
- (void)dealloc;

@end
