/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "QLPreviewItem-Protocol.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface CKMediaObject : NSObject <QLPreviewItem>
{
    id <CKFileTransfer> _transfer;
}

+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
@property(retain, nonatomic) id <CKFileTransfer> transfer; // @synthesize transfer=_transfer;
@property(readonly) NSURL *previewItemURL;
@property(readonly, nonatomic) int mediaType;
- (id)pasteboardItem;
@property(readonly, nonatomic) NSString *UTIType;
@property(readonly, nonatomic) NSString *mimeType;
@property(readonly, nonatomic) NSDictionary *transcoderUserInfo;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *transferGUID;
- (id)initWithTransfer:(id)arg1;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(readonly) NSString *previewItemTitle;

@end
