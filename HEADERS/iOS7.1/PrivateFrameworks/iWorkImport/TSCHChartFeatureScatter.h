//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartFeature.h>

__attribute__((visibility("hidden")))
@interface TSCHChartFeatureScatter : TSCHChartFeature
{
}

- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsConnectingLines;
- (id)supportedSeriesTypes;
- (BOOL)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)supportedAxisScales;
- (id)userInterfaceName;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (Class)presetImagerClass;
- (unsigned int)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;
- (BOOL)supportsSharedAndSeparateX;

@end
