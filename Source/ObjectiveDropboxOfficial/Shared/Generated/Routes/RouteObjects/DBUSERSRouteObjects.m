///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <ObjectiveDropboxOfficial/DBUSERSRouteObjects.h>
#import <ObjectiveDropboxOfficial/DBCOMMONRootInfo.h>
#import <ObjectiveDropboxOfficial/DBRequestErrors.h>
#import <ObjectiveDropboxOfficial/DBStoneBase.h>
#import <ObjectiveDropboxOfficial/DBUSERSAccount.h>
#import <ObjectiveDropboxOfficial/DBUSERSBasicAccount.h>
#import <ObjectiveDropboxOfficial/DBUSERSCOMMONAccountType.h>
#import <ObjectiveDropboxOfficial/DBUSERSFullAccount.h>
#import <ObjectiveDropboxOfficial/DBUSERSFullTeam.h>
#import <ObjectiveDropboxOfficial/DBUSERSGetAccountBatchError.h>
#import <ObjectiveDropboxOfficial/DBUSERSGetAccountError.h>
#import <ObjectiveDropboxOfficial/DBUSERSName.h>
#import <ObjectiveDropboxOfficial/DBUSERSSpaceAllocation.h>
#import <ObjectiveDropboxOfficial/DBUSERSSpaceUsage.h>
#import <ObjectiveDropboxOfficial/DBUSERSUserAuthRoutes.h>
#import "DBUSERSUserFeatureValue.h"
#import "DBUSERSUserFeaturesGetValuesBatchError.h"
#import "DBUSERSUserFeaturesGetValuesBatchResult.h"

@implementation DBUSERSRouteObjects

static DBRoute *DBUSERSFeaturesGetValues;
static DBRoute *DBUSERSGetAccount;
static DBRoute *DBUSERSGetAccountBatch;
static DBRoute *DBUSERSGetCurrentAccount;
static DBRoute *DBUSERSGetSpaceUsage;

+ (DBRoute *)DBUSERSFeaturesGetValues {
  if (!DBUSERSFeaturesGetValues) {
    DBUSERSFeaturesGetValues = [[DBRoute alloc] init:@"features/get_values"
                                          namespace_:@"users"
                                          deprecated:@NO
                                          resultType:[DBUSERSUserFeaturesGetValuesBatchResult class]
                                           errorType:[DBUSERSUserFeaturesGetValuesBatchError class]
                                               attrs:@{
                                                 @"auth" : @"user",
                                                 @"host" : @"api",
                                                 @"style" : @"rpc"
                                               }
                               dataStructSerialBlock:nil
                             dataStructDeserialBlock:nil];
  }
  return DBUSERSFeaturesGetValues;
}

+ (DBRoute *)DBUSERSGetAccount {
  if (!DBUSERSGetAccount) {
    DBUSERSGetAccount = [[DBRoute alloc] init:@"get_account"
                                   namespace_:@"users"
                                   deprecated:@NO
                                   resultType:[DBUSERSBasicAccount class]
                                    errorType:[DBUSERSGetAccountError class]
                                        attrs:@{
                                          @"auth" : @"user",
                                          @"host" : @"api",
                                          @"style" : @"rpc"
                                        }
                        dataStructSerialBlock:nil
                      dataStructDeserialBlock:nil];
  }
  return DBUSERSGetAccount;
}

+ (DBRoute *)DBUSERSGetAccountBatch {
  if (!DBUSERSGetAccountBatch) {
    DBUSERSGetAccountBatch = [[DBRoute alloc] init:@"get_account_batch"
        namespace_:@"users"
        deprecated:@NO
        resultType:[NSArray<DBUSERSBasicAccount *> class]
        errorType:[DBUSERSGetAccountBatchError class]
        attrs:@{
          @"auth" : @"user",
          @"host" : @"api",
          @"style" : @"rpc"
        }
        dataStructSerialBlock:nil
        dataStructDeserialBlock:^id(id dataStruct) {
          return [DBArraySerializer deserialize:dataStruct
                                      withBlock:^id(id elem0) {
                                        return [DBUSERSBasicAccountSerializer deserialize:elem0];
                                      }];
        }];
  }
  return DBUSERSGetAccountBatch;
}

+ (DBRoute *)DBUSERSGetCurrentAccount {
  if (!DBUSERSGetCurrentAccount) {
    DBUSERSGetCurrentAccount = [[DBRoute alloc] init:@"get_current_account"
                                          namespace_:@"users"
                                          deprecated:@NO
                                          resultType:[DBUSERSFullAccount class]
                                           errorType:nil
                                               attrs:@{
                                                 @"auth" : @"user",
                                                 @"host" : @"api",
                                                 @"style" : @"rpc"
                                               }
                               dataStructSerialBlock:nil
                             dataStructDeserialBlock:nil];
  }
  return DBUSERSGetCurrentAccount;
}

+ (DBRoute *)DBUSERSGetSpaceUsage {
  if (!DBUSERSGetSpaceUsage) {
    DBUSERSGetSpaceUsage = [[DBRoute alloc] init:@"get_space_usage"
                                      namespace_:@"users"
                                      deprecated:@NO
                                      resultType:[DBUSERSSpaceUsage class]
                                       errorType:nil
                                           attrs:@{
                                             @"auth" : @"user",
                                             @"host" : @"api",
                                             @"style" : @"rpc"
                                           }
                           dataStructSerialBlock:nil
                         dataStructDeserialBlock:nil];
  }
  return DBUSERSGetSpaceUsage;
}

@end
