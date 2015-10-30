/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUMemory_Base.h>

#import "VMUMemory-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, VMUArchitecture;

@interface VMUMemory_File : VMUMemory_Base <VMUMemory>
{
    char *_mappedAddress;
    unsigned long long _mappedSize;
    NSDate *_lastModifiedTimestamp;
    struct _VMURange _addressRange;
    struct _VMURange _fileRange;
    NSString *_path;
    VMUArchitecture *_architecture;
    NSMutableDictionary *_sharedCacheMap;
}

+ (id)memoryWithPath:(id)arg1 fileRange:(struct _VMURange)arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4;
+ (id)memoryWithPath:(id)arg1;
+ (id)headerFromSharedCacheWithPath:(id)arg1;
+ (id)headerWithPath:(id)arg1;
- (id)swappedView;
- (id)view;
- (id)memoryFromSubRange:(struct _VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (_Bool)isContiguous;
- (id)architecture;
- (struct _VMURange)addressRange;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (_Bool)map;
- (unsigned long long)sharedCacheHeaderOffsetForPath:(id)arg1;
- (void)buildSharedCacheMap;
- (id)lastModifiedTimestamp;
- (id)path;
- (id)initWithPath:(id)arg1 fileRange:(struct _VMURange)arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4;

@end
