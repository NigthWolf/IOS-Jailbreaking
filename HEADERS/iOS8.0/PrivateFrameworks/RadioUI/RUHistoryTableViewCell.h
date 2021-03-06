//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RadioUI/RUTableViewCell.h>

#import "RUTrackDownloadViewDelegate.h"

@class NSString, RUAudioPreviewView, RUTrackDownloadView, UIImage, UIImageView, UILabel;

@interface RUHistoryTableViewCell : RUTableViewCell <RUTrackDownloadViewDelegate>
{
    UIImageView *_explicitImageView;
    UILabel *_iAdLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    BOOL _explicitTrack;
    BOOL _hideArtworkImage;
    RUAudioPreviewView *_audioPreviewView;
    RUTrackDownloadView *_trackDownloadView;
}

+ (id)_titleLabelFont;
+ (id)_subtitleLabelFontForTraitCollection:(id)arg1;
+ (id)_iAdLabelFont;
+ (float)defaultHeightForTraitCollection:(id)arg1;
+ (struct CGSize)artworkSize;
@property(readonly, nonatomic) RUTrackDownloadView *trackDownloadView; // @synthesize trackDownloadView=_trackDownloadView;
@property(nonatomic) BOOL hideArtworkImage; // @synthesize hideArtworkImage=_hideArtworkImage;
@property(nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property(retain, nonatomic) RUAudioPreviewView *audioPreviewView; // @synthesize audioPreviewView=_audioPreviewView;
- (void).cxx_destruct;
- (void)_updateViewForHorizontalSizeClassChange;
- (unsigned int)_preferredExplicitGlyphSizeCategory;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) BOOL isAd;
@property(copy, nonatomic) NSString *artist;
@property(readonly, nonatomic) UIImage *artworkImage;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

