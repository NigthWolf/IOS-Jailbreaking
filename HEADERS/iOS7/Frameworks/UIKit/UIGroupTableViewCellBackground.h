/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIColor;

// Not exported
@interface UIGroupTableViewCellBackground : UIView
{
    int _sectionLocation;
    int _newSectionLocation;
    long long _animationCount;
    long long _selectionStyle;
    long long _separatorStyle;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UIColor *_selectionTintColor;
    double _sectionBorderWidth;
    struct UIEdgeInsets _separatorInset;
    struct {
        unsigned int selected:1;
    } _groupBackgroundFlags;
}

+ (void)initialize;
+ (void)_flushCacheOnNotification:(id)arg1;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) double sectionBorderWidth; // @synthesize sectionBorderWidth=_sectionBorderWidth;
- (id)_topShadowViewWithColor:(id)arg1;
- (id)_contentMaskLayer;
- (void)layoutSubviews;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic) long long separatorStyle;
@property(nonatomic) long long selectionStyle;
@property(retain, nonatomic) UIColor *selectionTintColor;
- (void)setSelectionTintColor:(id)arg1 layoutSubviews:(_Bool)arg2;
@property(nonatomic) int sectionLocation;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)_setSectionLocationAnimationDidStop;
- (void)setFrame:(struct CGRect)arg1;
- (void)displayLayer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
