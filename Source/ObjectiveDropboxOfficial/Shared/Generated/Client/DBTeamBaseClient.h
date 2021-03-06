///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESTeamAuthRoutes.h>
#import <ObjectiveDropboxOfficial/DBRequestErrors.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGTeamAuthRoutes.h>
#import <ObjectiveDropboxOfficial/DBTEAMTeamAuthRoutes.h>
#import <ObjectiveDropboxOfficial/DBTasks.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DBTransportClient;

///
/// Base client object that contains an instance field for each namespace, each
/// of which contains references to all routes within that namespace.
/// Fully-implemented API clients will inherit this class.
///
@interface DBTeamBaseClient : NSObject {

@protected
  id<DBTransportClient> _transportClient;
}

/// Routes within the `fileProperties` namespace.
@property (nonatomic, readonly) DBFILEPROPERTIESTeamAuthRoutes *filePropertiesRoutes;

/// Routes within the `team` namespace.
@property (nonatomic, readonly) DBTEAMTeamAuthRoutes *teamRoutes;

/// Routes within the `teamLog` namespace.
@property (nonatomic, readonly) DBTEAMLOGTeamAuthRoutes *teamLogRoutes;

/// Initializes the `DBTeamBaseClient` object with a networking client.
- (instancetype)initWithTransportClient:(id<DBTransportClient>)client;

@end

NS_ASSUME_NONNULL_END
