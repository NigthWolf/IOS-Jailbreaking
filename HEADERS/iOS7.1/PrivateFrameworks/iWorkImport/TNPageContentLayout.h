//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class TNPageLayout, TSDLayoutGeometry;

__attribute__((visibility("hidden")))
@interface TNPageContentLayout : TSDLayout
{
    TNPageLayout *mPageLayout;
    TSDLayoutGeometry *mCachedGeometry;
}

@property TNPageLayout *pageLayout; // @synthesize pageLayout=mPageLayout;
- (Class)repClassOverride;
- (unsigned int)pageCount;
- (unsigned int)pageNumber;
- (id)computeLayoutGeometry;
- (void)validate;
- (void)dealloc;
- (id)initWithPageLayout:(id)arg1;

@end
