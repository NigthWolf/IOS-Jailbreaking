//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

__attribute__((visibility("hidden")))
@interface _NSInlineData : NSData
{
    unsigned short _length;
}

- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_isCompact;
- (const void *)bytes;
- (unsigned int)length;

@end
