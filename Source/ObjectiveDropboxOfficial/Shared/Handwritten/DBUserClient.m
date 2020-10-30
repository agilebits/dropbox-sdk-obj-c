///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import <ObjectiveDropboxOfficial/DBUserClient.h>

#import "DBAccessTokenProvider.h"
#import <ObjectiveDropboxOfficial/DBTransportDefaultClient.h>
#import <ObjectiveDropboxOfficial/DBTransportDefaultConfig.h>

@implementation DBUserClient

- (instancetype)initWithAccessToken:(NSString *)accessToken {
  return [self initWithAccessToken:accessToken transportConfig:nil];
}

- (instancetype)initWithAccessToken:(NSString *)accessToken
                    transportConfig:(DBTransportDefaultConfig *)transportConfig {
  return [self initWithAccessToken:accessToken tokenUid:nil transportConfig:transportConfig];
}

- (instancetype)initWithAccessToken:(NSString *)accessToken
                           tokenUid:(NSString *)tokenUid
                    transportConfig:(DBTransportDefaultConfig *)transportConfig {
  DBTransportDefaultClient *transportClient = [[DBTransportDefaultClient alloc] initWithAccessToken:accessToken
                                                                                           tokenUid:tokenUid
                                                                                    transportConfig:transportConfig];
  return [self initWithTransportClient:transportClient];
}

- (instancetype)initWithAccessTokenProvider:(id<DBAccessTokenProvider>)accessTokenProvider
                                   tokenUid:(NSString *)tokenUid
                            transportConfig:(DBTransportDefaultConfig *)transportConfig {
  DBTransportDefaultClient *transportClient =
      [[DBTransportDefaultClient alloc] initWithAccessTokenProvider:accessTokenProvider
                                                           tokenUid:tokenUid
                                                                                    transportConfig:transportConfig];
  return [self initWithTransportClient:transportClient];
}

- (instancetype)initWithTransportClient:(DBTransportDefaultClient *)client {
  if (self = [super initWithTransportClient:client]) {
    _tokenUid = client.tokenUid;
  }
  return self;
}

- (DBUserClient *)withPathRoot:(DBCOMMONPathRoot *)pathRoot {
  DBTransportDefaultConfig *transportConfig = nil;
  if ([_transportClient isKindOfClass:[DBTransportDefaultClient class]]) {
    transportConfig = [(DBTransportDefaultClient *)_transportClient duplicateTransportConfigWithPathRoot:pathRoot];
}
  return [[DBUserClient alloc] initWithAccessTokenProvider:_transportClient.accessTokenProvider
                                                  tokenUid:_tokenUid
                                           transportConfig:transportConfig];
}

- (NSString *)accessToken {
  return _transportClient.accessTokenProvider.accessToken;
}

- (BOOL)isAuthorized {
  return _transportClient.accessTokenProvider != nil;
}

@end
