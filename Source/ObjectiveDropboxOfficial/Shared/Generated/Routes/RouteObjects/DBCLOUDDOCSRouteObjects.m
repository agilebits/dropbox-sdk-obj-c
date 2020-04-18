///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBCLOUDDOCSRouteObjects.h"
#import "DBCLOUDDOCSCloudDocsAccessError.h"
#import "DBCLOUDDOCSGetMetadataError.h"
#import "DBCLOUDDOCSGetMetadataErrorTagUnion.h"
#import "DBCLOUDDOCSGetMetadataResult.h"
#import "DBCLOUDDOCSLockResult.h"
#import "DBCLOUDDOCSLockingError.h"
#import "DBCLOUDDOCSLockingErrorTagUnion.h"
#import "DBCLOUDDOCSRenameError.h"
#import "DBCLOUDDOCSRenameErrorTagUnion.h"
#import "DBCLOUDDOCSRenameResult.h"
#import "DBCLOUDDOCSUnlockResult.h"
#import "DBCLOUDDOCSUpdateContentError.h"
#import "DBCLOUDDOCSUpdateContentResult.h"
#import "DBCLOUDDOCSUserAuthRoutes.h"
#import "DBCLOUDDOCSUserInfo.h"
#import "DBCLOUDDOCSUserPermissions.h"
#import "DBRequestErrors.h"
#import "DBStoneBase.h"

@implementation DBCLOUDDOCSRouteObjects

static DBRoute *DBCLOUDDOCSGetContent;
static DBRoute *DBCLOUDDOCSGetMetadata;
static DBRoute *DBCLOUDDOCSLock;
static DBRoute *DBCLOUDDOCSRename;
static DBRoute *DBCLOUDDOCSUnlock;
static DBRoute *DBCLOUDDOCSUpdateContent;

+ (DBRoute *)DBCLOUDDOCSGetContent {
  if (!DBCLOUDDOCSGetContent) {
    DBCLOUDDOCSGetContent = [[DBRoute alloc] init:@"get_content"
                                       namespace_:@"cloud_docs"
                                       deprecated:@NO
                                       resultType:nil
                                        errorType:[DBCLOUDDOCSCloudDocsAccessError class]
                                            attrs:@{
                                              @"auth" : @"user",
                                              @"host" : @"content",
                                              @"style" : @"download"
                                            }
                            dataStructSerialBlock:nil
                          dataStructDeserialBlock:nil];
  }
  return DBCLOUDDOCSGetContent;
}

+ (DBRoute *)DBCLOUDDOCSGetMetadata {
  if (!DBCLOUDDOCSGetMetadata) {
    DBCLOUDDOCSGetMetadata = [[DBRoute alloc] init:@"get_metadata"
                                        namespace_:@"cloud_docs"
                                        deprecated:@NO
                                        resultType:[DBCLOUDDOCSGetMetadataResult class]
                                         errorType:[DBCLOUDDOCSGetMetadataError class]
                                             attrs:@{
                                               @"auth" : @"user",
                                               @"host" : @"api",
                                               @"style" : @"rpc"
                                             }
                             dataStructSerialBlock:nil
                           dataStructDeserialBlock:nil];
  }
  return DBCLOUDDOCSGetMetadata;
}

+ (DBRoute *)DBCLOUDDOCSLock {
  if (!DBCLOUDDOCSLock) {
    DBCLOUDDOCSLock = [[DBRoute alloc] init:@"lock"
                                 namespace_:@"cloud_docs"
                                 deprecated:@NO
                                 resultType:[DBCLOUDDOCSLockResult class]
                                  errorType:[DBCLOUDDOCSLockingError class]
                                      attrs:@{
                                        @"auth" : @"user",
                                        @"host" : @"api",
                                        @"style" : @"rpc"
                                      }
                      dataStructSerialBlock:nil
                    dataStructDeserialBlock:nil];
  }
  return DBCLOUDDOCSLock;
}

+ (DBRoute *)DBCLOUDDOCSRename {
  if (!DBCLOUDDOCSRename) {
    DBCLOUDDOCSRename = [[DBRoute alloc] init:@"rename"
                                   namespace_:@"cloud_docs"
                                   deprecated:@NO
                                   resultType:[DBCLOUDDOCSRenameResult class]
                                    errorType:[DBCLOUDDOCSRenameError class]
                                        attrs:@{
                                          @"auth" : @"user",
                                          @"host" : @"api",
                                          @"style" : @"rpc"
                                        }
                        dataStructSerialBlock:nil
                      dataStructDeserialBlock:nil];
  }
  return DBCLOUDDOCSRename;
}

+ (DBRoute *)DBCLOUDDOCSUnlock {
  if (!DBCLOUDDOCSUnlock) {
    DBCLOUDDOCSUnlock = [[DBRoute alloc] init:@"unlock"
                                   namespace_:@"cloud_docs"
                                   deprecated:@NO
                                   resultType:[DBCLOUDDOCSUnlockResult class]
                                    errorType:[DBCLOUDDOCSLockingError class]
                                        attrs:@{
                                          @"auth" : @"user",
                                          @"host" : @"api",
                                          @"style" : @"rpc"
                                        }
                        dataStructSerialBlock:nil
                      dataStructDeserialBlock:nil];
  }
  return DBCLOUDDOCSUnlock;
}

+ (DBRoute *)DBCLOUDDOCSUpdateContent {
  if (!DBCLOUDDOCSUpdateContent) {
    DBCLOUDDOCSUpdateContent = [[DBRoute alloc] init:@"update_content"
                                          namespace_:@"cloud_docs"
                                          deprecated:@NO
                                          resultType:[DBCLOUDDOCSUpdateContentResult class]
                                           errorType:[DBCLOUDDOCSUpdateContentError class]
                                               attrs:@{
                                                 @"auth" : @"user",
                                                 @"host" : @"content",
                                                 @"style" : @"upload"
                                               }
                               dataStructSerialBlock:nil
                             dataStructDeserialBlock:nil];
  }
  return DBCLOUDDOCSUpdateContent;
}

@end
