///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import <UIKit/UIKit.h>

#import <ObjectiveDropboxOfficial/DBClientsManager+Protected.h>
#import <ObjectiveDropboxOfficial/DBClientsManager.h>
#import <ObjectiveDropboxOfficial/DBOAuthManager.h>
#import <ObjectiveDropboxOfficial/DBOAuthMobile-iOS.h>
#import <ObjectiveDropboxOfficial/DBOAuthMobileManager-iOS.h>
#import <ObjectiveDropboxOfficial/DBTransportDefaultConfig.h>

@implementation DBClientsManager (MobileAuth)

+ (void)authorizeFromController:(UIApplication *)sharedApplication
                     controller:(UIViewController *)controller
                        openURL:(void (^_Nonnull)(NSURL *))openURL {
  NSAssert([DBOAuthManager sharedOAuthManager] != nil,
           @"Call `Dropbox.setupWithAppKey` or `Dropbox.setupWithTeamAppKey` before calling this method");
  DBMobileSharedApplication *sharedMobileApplication =
      [[DBMobileSharedApplication alloc] initWithSharedApplication:sharedApplication
                                                        controller:controller
                                                           openURL:openURL];
  [DBMobileSharedApplication setMobileSharedApplication:sharedMobileApplication];
  [[DBOAuthManager sharedOAuthManager] authorizeFromSharedApplication:sharedMobileApplication];
}

+ (void)setupWithAppKey:(NSString *)appKey {
  [[self class] setupWithTransportConfig:[[DBTransportDefaultConfig alloc] initWithAppKey:appKey]];
}

+ (void)setupWithTransportConfig:(DBTransportDefaultConfig *)transportConfig {
  [[self class] setupWithOAuthManager:[[DBOAuthMobileManager alloc] initWithAppKey:transportConfig.appKey
                                                                              host:transportConfig.hostnameConfig.meta
                                                                       redirectURL:transportConfig.redirectURL]
                      transportConfig:transportConfig];
}

+ (void)setupWithTeamAppKey:(NSString *)appKey {
  [[self class] setupWithTeamTransportConfig:[[DBTransportDefaultConfig alloc] initWithAppKey:appKey]];
}

+ (void)setupWithTeamTransportConfig:(DBTransportDefaultConfig *)transportConfig {
  [[self class]
      setupWithOAuthManagerTeam:[[DBOAuthMobileManager alloc] initWithAppKey:transportConfig.appKey
                                                                        host:transportConfig.hostnameConfig.meta
                                                                 redirectURL:transportConfig.redirectURL]
                transportConfig:transportConfig];
}

@end
