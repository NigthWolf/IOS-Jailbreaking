/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_pattern;
    unsigned long long _options;
    void *_internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}

+ (id)escapedPatternForString:(id)arg1;
+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (void)initialize;
@property(readonly) unsigned long long numberOfCaptureGroups;
@property(readonly) unsigned long long options;
@property(readonly) NSString *pattern;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
