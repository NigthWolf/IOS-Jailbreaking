/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, WebBookmarkCollection;

@interface WebBookmarkList : NSObject
{
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    _Bool _customQuery;
    NSString *_query;
    unsigned int _folderID;
    WebBookmarkCollection *_collection;
}

@property(readonly, nonatomic) unsigned int folderID; // @synthesize folderID=_folderID;
- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (id)bookmarkArray;
- (unsigned int)bookmarkCount;
- (id)bookmarkAtIndex:(unsigned int)arg1;

@end
