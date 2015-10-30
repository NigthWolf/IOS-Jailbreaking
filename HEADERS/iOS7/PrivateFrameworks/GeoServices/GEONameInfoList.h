/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface GEONameInfoList : PBCodable <NSCopying>
{
    NSMutableArray *_nameInfos;
}

@property(retain, nonatomic) NSMutableArray *nameInfos; // @synthesize nameInfos=_nameInfos;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)nameInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)nameInfosCount;
- (void)addNameInfo:(id)arg1;
- (void)clearNameInfos;
- (void)dealloc;

@end
