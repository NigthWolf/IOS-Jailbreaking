/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUScriptObject.h"

@class NSString, WebScriptObject;

@interface SKScriptStoreSheetRequest : SUScriptObject
{
    long long _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
- (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) long long productPageStylePhone;
@property(readonly) long long productPageStylePad;
@property(readonly) long long productPageStyleBanner;
@property(readonly) long long productPageStyleAutomatic;
@property(retain) NSString *productURL;
@property(retain) WebScriptObject *productParameters;
@property long long productPageStyle;
- (id)_className;
- (id)newNativeStorePageRequest;

@end
