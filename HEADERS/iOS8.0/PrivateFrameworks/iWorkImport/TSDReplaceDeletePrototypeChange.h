//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDPrototypeChange.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDReplaceDeletePrototypeChange : NSObject <TSDPrototypeChange>
{
    BOOL mPrototypeIsBeingReplaced;
    BOOL mPrototypeIsBeingDeleted;
    id mReplacement;
    id mPrototype;
}

@property(readonly, retain) id prototype; // @synthesize prototype=mPrototype;
@property(readonly, retain) id replacement; // @synthesize replacement=mReplacement;
@property(readonly) BOOL prototypeIsBeingDeleted; // @synthesize prototypeIsBeingDeleted=mPrototypeIsBeingDeleted;
@property(readonly) BOOL prototypeIsBeingReplaced; // @synthesize prototypeIsBeingReplaced=mPrototypeIsBeingReplaced;
- (BOOL)propertiesAreChanging:(id)arg1;
- (BOOL)propertyIsChanging:(int)arg1;
@property(readonly, retain) id <TSSPropertySource> propertiesAfterChange;
@property(readonly, retain) id <TSSPropertySource> propertiesBeforeChange;
- (id)changedPropertySet;
@property(readonly) BOOL prototypeIsBeingModified;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initDeletePrototypeChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (id)initReplacePrototypeChangeForPrototype:(id)arg1 toReplacement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
