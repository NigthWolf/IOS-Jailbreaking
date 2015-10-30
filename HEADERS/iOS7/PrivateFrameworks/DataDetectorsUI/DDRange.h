/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DOMNode;

// Not exported
@interface DDRange : NSObject
{
    DOMNode *_node;
    long long _startOffset;
    long long _endOffset;
}

+ (id)rangeWithDOMRange:(id)arg1;
@property(nonatomic) long long endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (id)description;
- (void)dealloc;
- (id)initWithDOMRange:(id)arg1;

@end
