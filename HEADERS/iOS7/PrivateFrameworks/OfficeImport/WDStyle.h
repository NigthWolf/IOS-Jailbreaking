/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString, WDCharacterProperties, WDParagraphProperties, WDStyleSheet, WDTableCellProperties, WDTableRowProperties, WDTableStyleOverride;

// Not exported
@interface WDStyle : NSObject <NSCopying>
{
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    WDStyleSheet *mStyleSheet;
    WDStyle *mBaseStyle;
    WDStyle *mNextStyle;
    _Bool mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setNextStyle:(id)arg1;
- (id)nextStyle;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (id)id;
- (int)type;
- (void)setName:(id)arg1;
- (id)name;
- (id)tableStyleOverrideForPart:(int)arg1;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableProperties;
- (_Bool)isAnythingOverridden;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (id)styleSheet;
- (id)characterProperties;
- (id)paragraphProperties;
- (void)dealloc;
- (id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3;

@end
