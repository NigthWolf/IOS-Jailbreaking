//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationIcon.h"

@class UIWebClip;

@interface SBWebApplicationIcon : SBApplicationIcon
{
    UIWebClip *_webClip;
}

- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;
- (_Bool)canGenerateImageInBackgroundForFormat:(int)arg1;
- (id)webClip;

@end
