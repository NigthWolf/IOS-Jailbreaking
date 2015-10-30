/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UILabel.h"

@class STShadowBlurRadiusAnimation, UIColor;

@interface STShadowLabel : UILabel
{
    UIColor *_auxiliaryShadowColor;
    double _auxiliaryShadowBlurRadius;
    _Bool _animating;
    _Bool _phase;
    double _animatedAuxiliaryShadowBlurRadius;
    STShadowBlurRadiusAnimation *_pulseAnimation;
}

- (void)_updateShadowBlurRadiusWithProgress:(float)arg1;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)stopPulse;
- (void)startPulse;
- (void)setAuxiliaryShadowBlurRadius:(double)arg1;
- (void)setAuxiliaryShadowColor:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)dealloc;

@end
