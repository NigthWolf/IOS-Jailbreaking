//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAPackage, NSArray;

@interface _UICAPackageView : UIView
{
    CAPackage *_package;
    NSArray *_rootViews;
}

+ (id)_buildViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3;
+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)_shouldCatchDecodingExceptions;
- (id)publishedViewWithName:(id)arg1;
- (id)publishedObjectWithName:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;

@end

