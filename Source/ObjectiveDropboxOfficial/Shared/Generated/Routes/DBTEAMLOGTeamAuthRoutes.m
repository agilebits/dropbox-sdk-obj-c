///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <ObjectiveDropboxOfficial/DBTEAMLOGTeamAuthRoutes.h>
#import <ObjectiveDropboxOfficial/DBRequestErrors.h>
#import <ObjectiveDropboxOfficial/DBStoneBase.h>
#import <ObjectiveDropboxOfficial/DBTEAMCOMMONTimeRange.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGEventCategory.h>
#import "DBTEAMLOGEventTypeArg.h"
#import <ObjectiveDropboxOfficial/DBTEAMLOGGetTeamEventsArg.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGGetTeamEventsContinueArg.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGGetTeamEventsContinueError.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGGetTeamEventsError.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGGetTeamEventsResult.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGRouteObjects.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGTeamEvent.h>
#import <ObjectiveDropboxOfficial/DBTransportClientProtocol.h>

@implementation DBTEAMLOGTeamAuthRoutes

- (instancetype)init:(id<DBTransportClient>)client {
  self = [super init];
  if (self) {
    _client = client;
  }
  return self;
}

- (DBRpcTask *)getEvents {
  DBRoute *route = DBTEAMLOGRouteObjects.DBTEAMLOGGetEvents;
  DBTEAMLOGGetTeamEventsArg *arg = [[DBTEAMLOGGetTeamEventsArg alloc] initDefault];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)getEvents:(NSNumber *)limit
               accountId:(NSString *)accountId
                    time:(DBTEAMCOMMONTimeRange *)time
                category:(DBTEAMLOGEventCategory *)category
               eventType:(DBTEAMLOGEventTypeArg *)eventType {
  DBRoute *route = DBTEAMLOGRouteObjects.DBTEAMLOGGetEvents;
  DBTEAMLOGGetTeamEventsArg *arg = [[DBTEAMLOGGetTeamEventsArg alloc] initWithLimit:limit
                                                                          accountId:accountId
                                                                               time:time
                                                                           category:category
                                                                          eventType:eventType];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)getEventsContinue:(NSString *)cursor {
  DBRoute *route = DBTEAMLOGRouteObjects.DBTEAMLOGGetEventsContinue;
  DBTEAMLOGGetTeamEventsContinueArg *arg = [[DBTEAMLOGGetTeamEventsContinueArg alloc] initWithCursor:cursor];
  return [self.client requestRpc:route arg:arg];
}

@end
