//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface PLContactPhotoOverlay : UIView
{
    UILabel *_titleLabel;
    UIImageView *__avatarPreview;
    struct UIEdgeInsets _overlayEdgeInsets;
}

@property(readonly, nonatomic) UIImageView *_avatarPreview; // @synthesize _avatarPreview=__avatarPreview;
@property(nonatomic) struct UIEdgeInsets overlayEdgeInsets; // @synthesize overlayEdgeInsets=_overlayEdgeInsets;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)endAvatarTracking;
- (void)beginAvatarTrackingFromImageView:(id)arg1;
- (struct CGRect)inscribingBounds;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPLContactPhotoOverlayInitialization;

@end
