/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface WMListLevelTextToken : NSObject
{
    NSString *m_string;
    int m_level;
}

+ (id)tokenWithString:(id)arg1 andLevel:(int)arg2;
- (int)level;
- (id)stringForIndex:(int)arg1 withFormat:(int)arg2 initialNumber:(int)arg3;
- (id)string;
- (void)dealloc;
- (id)initWithString:(id)arg1 andLevel:(int)arg2;

@end
