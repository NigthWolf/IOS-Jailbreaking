//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface TSPSaveOperationState : NSObject
{
    NSMapTable *_newDataStorages;
    unsigned int _updateType;
    int _sampleID;
}

@property(nonatomic) int sampleID; // @synthesize sampleID=_sampleID;
@property(readonly, nonatomic) unsigned int updateType; // @synthesize updateType=_updateType;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldUpdate;
- (void)enumerateDatasAndStoragesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasNewStorageForData:(id)arg1;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (id)initWithUpdateType:(unsigned int)arg1;
- (id)init;

@end
