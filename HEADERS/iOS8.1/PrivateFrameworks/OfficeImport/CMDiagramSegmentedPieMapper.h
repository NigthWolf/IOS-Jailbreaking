//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramSegmentedPieMapper : CMDiagramShapeMapper
{
    BOOL mDrawArrows;
}

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_suggestedBoundsForNodeAtIndex:(unsigned int)arg1;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setDrawArrows:(BOOL)arg1;
- (int)pointCount;

@end
