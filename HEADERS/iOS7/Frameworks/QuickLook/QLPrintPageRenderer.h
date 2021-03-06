/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPrintPageRenderer.h"

@interface QLPrintPageRenderer : UIPrintPageRenderer
{
    id <QLPrintPageRendererDataSource> _dataSource;
    long long _numberOfPages;
    _Bool _printingDone;
    long long _numberOfPrintedPages;
}

@property id <QLPrintPageRendererDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (long long)numberOfPages;
- (void)prepareForPrinting;
- (id)init;

@end

