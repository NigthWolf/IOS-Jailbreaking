/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (NSEmailAddressString)
+ (id)mf_partialSurnames;
+ (id)mf_nameExtensions;
+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(_Bool)arg3;
- (id)mf_trimCommasSpacesQuotes;
- (_Bool)mf_appearsToBeAnInitial;
- (_Bool)mf_hasSameNamesAs:(id)arg1;
- (void)mf_firstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;
- (void)mf_addressCommentFirstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;
- (id)mf_copyIDNAEncodedEmailAddress;
- (id)mf_copyIDNADecodedEmailAddress;
- (_Bool)mf_isEqualToAddress:(id)arg1;
- (id)mf_addressDomain;
- (struct _NSRange)mf_rangeOfAddressDomain;
- (_Bool)mf_isLegalEmailAddress;
- (_Bool)mf_isLegalCommentedEmailAddress;
- (id)mf_copyAddressComment;
- (id)mf_addressComment;
- (id)mf_uncommentedAddressRespectingGroups;
- (id)mf_uncommentedAddress;
- (id)mf_copyUncommentedAddress;
@end
