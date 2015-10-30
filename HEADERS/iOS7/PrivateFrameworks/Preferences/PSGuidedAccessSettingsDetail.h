/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PSSettingsDetail-Protocol.h"

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>
{
}

+ (unsigned long long)guidedAccessAvailability;
+ (void)enterGuidedAccessMode;
+ (void)setGuidedAccessSwitchEnabled:(_Bool)arg1;
+ (_Bool)guidedAccessHasPasscode;
+ (id)iconImage;
+ (id)preferencesURL;

@end
