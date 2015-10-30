/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSManagedObjectModel, NSMappingModel, NSSet, NSString;

// Not exported
@interface PFUbiquityTransactionLogMigrator : NSObject
{
    NSManagedObjectModel *_srcModel;
    NSManagedObjectModel *_dstModel;
    NSMappingModel *_mappingModel;
    NSString *_localPeerID;
    NSDictionary *_mappingsByEntityName;
    NSSet *_removedEntities;
    _Bool _throttleLogs;
}

@property(readonly) _Bool throttleLogs; // @synthesize throttleLogs=_throttleLogs;
- (id)createDestinationObjectsFromSourceObjects:(id)arg1 migrationContext:(id)arg2;
- (id)createDestinationObjectContentFromSourceObjectContent:(id)arg1 withEntityMapping:(id)arg2 migrationContext:(id)arg3;
- (id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)arg1;
- (_Bool)migrateTransactionLogFromLocation:(id)arg1 toLocation:(id)arg2 error:(id *)arg3;
- (_Bool)migrateBaselineFromLocation:(id)arg1 toLocation:(id)arg2 error:(id *)arg3;
- (_Bool)migrateTransactionLogsForStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 error:(id *)arg4;
- (void)populateMappingsByEntityName;
- (void)dealloc;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 localPeerID:(id)arg4;

@end
