/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPropertyCell.h>

@interface ABStarkContactAddressPropertyCell : ABPropertyCell
{
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)contentViewConstraints;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
