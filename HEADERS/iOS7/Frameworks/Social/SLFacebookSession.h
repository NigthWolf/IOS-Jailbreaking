/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SLFacebookSession : NSObject
{
    id <SLFacebookRemoteSessionProtocol> _remoteSession;
}

+ (id)_remoteInterface;
+ (id)sharedSession;
- (void).cxx_destruct;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(id)arg3;
- (void)unlikeURL:(id)arg1 completion:(id)arg2;
- (void)likeURL:(id)arg1 completion:(id)arg2;
- (_Bool)uploadProfilePicture:(id)arg1 error:(id *)arg2;
- (void)revokeAllAccessTokensForDevice;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)uploadsInProgress:(id)arg1;
- (void)uploadPost:(id)arg1 suppressAlerts:(_Bool)arg2 withPostCompletion:(id)arg3;
- (_Bool)uploadPost:(id)arg1 forPID:(int)arg2;
- (_Bool)uploadPost:(id)arg1;
- (void)injectCompletedUploadWithCompletion:(id)arg1;
- (void)testCall;
- (id)tokenSecretForEntitledClientWithError:(id *)arg1;
- (id)init;

@end
