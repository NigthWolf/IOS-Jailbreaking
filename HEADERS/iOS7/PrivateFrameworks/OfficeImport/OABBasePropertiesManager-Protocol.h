/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OABFillPropertiesManager-Protocol.h>

@protocol OABBasePropertiesManager <OABFillPropertiesManager>
- (int)shadowSoftness;
- (int)shadowOffsetY;
- (int)shadowOffsetX;
- (int)shadowAlpha;
- (struct EshColor)shadowColor;
- (int)shadowType;
- (_Bool)isShadowed;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowType;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowType;
- (int)strokeJoinStyle;
- (int)strokeCapStyle;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokePresetDash;
- (int)strokeCompoundType;
- (int)strokeMiterLimit;
- (int)strokeWidth;
- (int)strokeFgAlpha;
- (id)strokeFillBlipName;
- (unsigned int)strokeFillBlipID;
- (int)strokeFillType;
@end
