/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIBarAppearanceStorage.h>

@class UIImage;

// Not exported
@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage
{
    UIImage *shadowImage;
    UIImage *topShadowImage;
    _Bool hidesShadow;
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_topBackgroundImage;
    UIImage *_miniTopBackgroundImage;
}

+ (long long)typicalBarPosition;
@property(retain, nonatomic) UIImage *miniTopBackgroundImage; // @synthesize miniTopBackgroundImage=_miniTopBackgroundImage;
@property(retain, nonatomic) UIImage *topBackgroundImage; // @synthesize topBackgroundImage=_topBackgroundImage;
@property(retain, nonatomic) UIImage *miniBackgroundImage; // @synthesize miniBackgroundImage=_miniBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool hidesShadow; // @synthesize hidesShadow;
@property(retain, nonatomic) UIImage *topShadowImage; // @synthesize topShadowImage;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage;
- (void)dealloc;

@end
