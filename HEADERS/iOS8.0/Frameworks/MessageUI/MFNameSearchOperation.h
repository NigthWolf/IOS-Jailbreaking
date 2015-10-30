//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFContactsSearchOperation.h>

#import "ABPredicateDelegate.h"

@class MFComposeRecipientOriginContext, NSMutableArray, NSString;

@interface MFNameSearchOperation : MFContactsSearchOperation <ABPredicateDelegate>
{
    NSMutableArray *_results;
    MFComposeRecipientOriginContext *_originContext;
}

+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;
@property(readonly, nonatomic) MFComposeRecipientOriginContext *originContext; // @synthesize originContext=_originContext;
- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (BOOL)predicateShouldContinue:(id)arg1;
- (void)main;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
