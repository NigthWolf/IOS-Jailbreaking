/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/_PLManagedAlbum.h>

#import "PLUserEditableAlbumProtocol-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol>
{
    _Bool _resolvingConflicts;
    _Bool albumShouldBeAutomaticallyDeleted;
}

+ (void)clearAssetOrderByAbumUUIDs;
+ (id)assetOrderByAbumUUIDs;
+ (id)pathToAssetAlbumOrderStructure;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingApproximateCount;
@property(nonatomic) _Bool albumShouldBeAutomaticallyDeleted; // @synthesize albumShouldBeAutomaticallyDeleted;
@property(nonatomic) _Bool resolvingConflicts; // @synthesize resolvingConflicts=_resolvingConflicts;
- (void)refreshAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (id)_assetOrderByAssetUUID;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (void)removePersistedFileSystemData;
- (void)persistMetadataToFileSystem;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)_recalculateCachedCounts;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
- (unsigned long long)_cachedCountForMigration;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
- (unsigned long long)_albumStandInCount;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (id)_keysToBeObserved;
- (void)_updateKeyAssetsIfNeeded;
- (id)_expectedKeyAssets;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (void)getInternalUserEditableAssets:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (unsigned long long)countOfInternalUserEditableAssets;
@property(readonly, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)didSave;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
- (_Bool)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (_Bool)canPerformEditOperation:(int)arg1;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSURL *groupURL;
@property(nonatomic) _Bool hasUnseenContentBoolValue;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isLibrary;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isStandInAlbum;
@property(readonly, nonatomic) _Bool isWallpaperAlbum;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) int pendingItemsType;
@property(readonly, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(readonly, nonatomic) id sectioningComparator;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) id sortingComparator;
@property(readonly, nonatomic) NSDate *startDate;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;

@end
