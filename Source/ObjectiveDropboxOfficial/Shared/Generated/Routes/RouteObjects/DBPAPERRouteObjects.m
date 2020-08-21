///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <ObjectiveDropboxOfficial/DBPAPERRouteObjects.h>
#import <ObjectiveDropboxOfficial/DBPAPERAddPaperDocUserMemberResult.h>
#import <ObjectiveDropboxOfficial/DBPAPERAddPaperDocUserResult.h>
#import <ObjectiveDropboxOfficial/DBPAPERCursor.h>
#import <ObjectiveDropboxOfficial/DBPAPERDocLookupError.h>
#import <ObjectiveDropboxOfficial/DBPAPERFolder.h>
#import <ObjectiveDropboxOfficial/DBPAPERFolderSharingPolicyType.h>
#import <ObjectiveDropboxOfficial/DBPAPERFoldersContainingPaperDoc.h>
#import <ObjectiveDropboxOfficial/DBPAPERInviteeInfoWithPermissionLevel.h>
#import <ObjectiveDropboxOfficial/DBPAPERListDocsCursorError.h>
#import <ObjectiveDropboxOfficial/DBPAPERListPaperDocsResponse.h>
#import <ObjectiveDropboxOfficial/DBPAPERListUsersCursorError.h>
#import <ObjectiveDropboxOfficial/DBPAPERListUsersOnFolderResponse.h>
#import <ObjectiveDropboxOfficial/DBPAPERListUsersOnPaperDocResponse.h>
#import <ObjectiveDropboxOfficial/DBPAPERPaperApiBaseError.h>
#import <ObjectiveDropboxOfficial/DBPAPERPaperApiCursorError.h>
#import <ObjectiveDropboxOfficial/DBPAPERPaperDocCreateError.h>
#import <ObjectiveDropboxOfficial/DBPAPERPaperDocCreateUpdateResult.h>
#import <ObjectiveDropboxOfficial/DBPAPERPaperDocExportResult.h>
#import <ObjectiveDropboxOfficial/DBPAPERPaperDocUpdateError.h>
#import <ObjectiveDropboxOfficial/DBPAPERSharingPolicy.h>
#import <ObjectiveDropboxOfficial/DBPAPERSharingPublicPolicyType.h>
#import <ObjectiveDropboxOfficial/DBPAPERSharingTeamPolicyType.h>
#import <ObjectiveDropboxOfficial/DBPAPERUserAuthRoutes.h>
#import <ObjectiveDropboxOfficial/DBPAPERUserInfoWithPermissionLevel.h>
#import <ObjectiveDropboxOfficial/DBRequestErrors.h>
#import <ObjectiveDropboxOfficial/DBSHARINGInviteeInfo.h>
#import <ObjectiveDropboxOfficial/DBSHARINGMemberSelector.h>
#import <ObjectiveDropboxOfficial/DBSHARINGUserInfo.h>
#import <ObjectiveDropboxOfficial/DBStoneBase.h>

@implementation DBPAPERRouteObjects

static DBRoute *DBPAPERDocsArchive;
static DBRoute *DBPAPERDocsCreate;
static DBRoute *DBPAPERDocsDownload;
static DBRoute *DBPAPERDocsFolderUsersList;
static DBRoute *DBPAPERDocsFolderUsersListContinue;
static DBRoute *DBPAPERDocsGetFolderInfo;
static DBRoute *DBPAPERDocsList;
static DBRoute *DBPAPERDocsListContinue;
static DBRoute *DBPAPERDocsPermanentlyDelete;
static DBRoute *DBPAPERDocsSharingPolicyGet;
static DBRoute *DBPAPERDocsSharingPolicySet;
static DBRoute *DBPAPERDocsUpdate;
static DBRoute *DBPAPERDocsUsersAdd;
static DBRoute *DBPAPERDocsUsersList;
static DBRoute *DBPAPERDocsUsersListContinue;
static DBRoute *DBPAPERDocsUsersRemove;

+ (DBRoute *)DBPAPERDocsArchive {
  if (!DBPAPERDocsArchive) {
    DBPAPERDocsArchive = [[DBRoute alloc] init:@"docs/archive"
                                    namespace_:@"paper"
                                    deprecated:@NO
                                    resultType:nil
                                     errorType:[DBPAPERDocLookupError class]
                                         attrs:@{
                                           @"auth" : @"user",
                                           @"host" : @"api",
                                           @"style" : @"rpc"
                                         }
                         dataStructSerialBlock:nil
                       dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsArchive;
}

+ (DBRoute *)DBPAPERDocsCreate {
  if (!DBPAPERDocsCreate) {
    DBPAPERDocsCreate = [[DBRoute alloc] init:@"docs/create"
                                   namespace_:@"paper"
                                   deprecated:@NO
                                   resultType:[DBPAPERPaperDocCreateUpdateResult class]
                                    errorType:[DBPAPERPaperDocCreateError class]
                                        attrs:@{
                                          @"auth" : @"user",
                                          @"host" : @"api",
                                          @"style" : @"upload"
                                        }
                        dataStructSerialBlock:nil
                      dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsCreate;
}

+ (DBRoute *)DBPAPERDocsDownload {
  if (!DBPAPERDocsDownload) {
    DBPAPERDocsDownload = [[DBRoute alloc] init:@"docs/download"
                                     namespace_:@"paper"
                                     deprecated:@NO
                                     resultType:[DBPAPERPaperDocExportResult class]
                                      errorType:[DBPAPERDocLookupError class]
                                          attrs:@{
                                            @"auth" : @"user",
                                            @"host" : @"api",
                                            @"style" : @"download"
                                          }
                          dataStructSerialBlock:nil
                        dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsDownload;
}

+ (DBRoute *)DBPAPERDocsFolderUsersList {
  if (!DBPAPERDocsFolderUsersList) {
    DBPAPERDocsFolderUsersList = [[DBRoute alloc] init:@"docs/folder_users/list"
                                            namespace_:@"paper"
                                            deprecated:@NO
                                            resultType:[DBPAPERListUsersOnFolderResponse class]
                                             errorType:[DBPAPERDocLookupError class]
                                                 attrs:@{
                                                   @"auth" : @"user",
                                                   @"host" : @"api",
                                                   @"style" : @"rpc"
                                                 }
                                 dataStructSerialBlock:nil
                               dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsFolderUsersList;
}

+ (DBRoute *)DBPAPERDocsFolderUsersListContinue {
  if (!DBPAPERDocsFolderUsersListContinue) {
    DBPAPERDocsFolderUsersListContinue = [[DBRoute alloc] init:@"docs/folder_users/list/continue"
                                                    namespace_:@"paper"
                                                    deprecated:@NO
                                                    resultType:[DBPAPERListUsersOnFolderResponse class]
                                                     errorType:[DBPAPERListUsersCursorError class]
                                                         attrs:@{
                                                           @"auth" : @"user",
                                                           @"host" : @"api",
                                                           @"style" : @"rpc"
                                                         }
                                         dataStructSerialBlock:nil
                                       dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsFolderUsersListContinue;
}

+ (DBRoute *)DBPAPERDocsGetFolderInfo {
  if (!DBPAPERDocsGetFolderInfo) {
    DBPAPERDocsGetFolderInfo = [[DBRoute alloc] init:@"docs/get_folder_info"
                                          namespace_:@"paper"
                                          deprecated:@NO
                                          resultType:[DBPAPERFoldersContainingPaperDoc class]
                                           errorType:[DBPAPERDocLookupError class]
                                               attrs:@{
                                                 @"auth" : @"user",
                                                 @"host" : @"api",
                                                 @"style" : @"rpc"
                                               }
                               dataStructSerialBlock:nil
                             dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsGetFolderInfo;
}

+ (DBRoute *)DBPAPERDocsList {
  if (!DBPAPERDocsList) {
    DBPAPERDocsList = [[DBRoute alloc] init:@"docs/list"
                                 namespace_:@"paper"
                                 deprecated:@NO
                                 resultType:[DBPAPERListPaperDocsResponse class]
                                  errorType:nil
                                      attrs:@{
                                        @"auth" : @"user",
                                        @"host" : @"api",
                                        @"style" : @"rpc"
                                      }
                      dataStructSerialBlock:nil
                    dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsList;
}

+ (DBRoute *)DBPAPERDocsListContinue {
  if (!DBPAPERDocsListContinue) {
    DBPAPERDocsListContinue = [[DBRoute alloc] init:@"docs/list/continue"
                                         namespace_:@"paper"
                                         deprecated:@NO
                                         resultType:[DBPAPERListPaperDocsResponse class]
                                          errorType:[DBPAPERListDocsCursorError class]
                                              attrs:@{
                                                @"auth" : @"user",
                                                @"host" : @"api",
                                                @"style" : @"rpc"
                                              }
                              dataStructSerialBlock:nil
                            dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsListContinue;
}

+ (DBRoute *)DBPAPERDocsPermanentlyDelete {
  if (!DBPAPERDocsPermanentlyDelete) {
    DBPAPERDocsPermanentlyDelete = [[DBRoute alloc] init:@"docs/permanently_delete"
                                              namespace_:@"paper"
                                              deprecated:@NO
                                              resultType:nil
                                               errorType:[DBPAPERDocLookupError class]
                                                   attrs:@{
                                                     @"auth" : @"user",
                                                     @"host" : @"api",
                                                     @"style" : @"rpc"
                                                   }
                                   dataStructSerialBlock:nil
                                 dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsPermanentlyDelete;
}

+ (DBRoute *)DBPAPERDocsSharingPolicyGet {
  if (!DBPAPERDocsSharingPolicyGet) {
    DBPAPERDocsSharingPolicyGet = [[DBRoute alloc] init:@"docs/sharing_policy/get"
                                             namespace_:@"paper"
                                             deprecated:@NO
                                             resultType:[DBPAPERSharingPolicy class]
                                              errorType:[DBPAPERDocLookupError class]
                                                  attrs:@{
                                                    @"auth" : @"user",
                                                    @"host" : @"api",
                                                    @"style" : @"rpc"
                                                  }
                                  dataStructSerialBlock:nil
                                dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsSharingPolicyGet;
}

+ (DBRoute *)DBPAPERDocsSharingPolicySet {
  if (!DBPAPERDocsSharingPolicySet) {
    DBPAPERDocsSharingPolicySet = [[DBRoute alloc] init:@"docs/sharing_policy/set"
                                             namespace_:@"paper"
                                             deprecated:@NO
                                             resultType:nil
                                              errorType:[DBPAPERDocLookupError class]
                                                  attrs:@{
                                                    @"auth" : @"user",
                                                    @"host" : @"api",
                                                    @"style" : @"rpc"
                                                  }
                                  dataStructSerialBlock:nil
                                dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsSharingPolicySet;
}

+ (DBRoute *)DBPAPERDocsUpdate {
  if (!DBPAPERDocsUpdate) {
    DBPAPERDocsUpdate = [[DBRoute alloc] init:@"docs/update"
                                   namespace_:@"paper"
                                   deprecated:@NO
                                   resultType:[DBPAPERPaperDocCreateUpdateResult class]
                                    errorType:[DBPAPERPaperDocUpdateError class]
                                        attrs:@{
                                          @"auth" : @"user",
                                          @"host" : @"api",
                                          @"style" : @"upload"
                                        }
                        dataStructSerialBlock:nil
                      dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsUpdate;
}

+ (DBRoute *)DBPAPERDocsUsersAdd {
  if (!DBPAPERDocsUsersAdd) {
    DBPAPERDocsUsersAdd = [[DBRoute alloc] init:@"docs/users/add"
        namespace_:@"paper"
        deprecated:@NO
        resultType:[NSArray<DBPAPERAddPaperDocUserMemberResult *> class]
        errorType:[DBPAPERDocLookupError class]
        attrs:@{
          @"auth" : @"user",
          @"host" : @"api",
          @"style" : @"rpc"
        }
        dataStructSerialBlock:nil
        dataStructDeserialBlock:^id(id dataStruct) {
          return [DBArraySerializer deserialize:dataStruct
                                      withBlock:^id(id elem0) {
                                        return [DBPAPERAddPaperDocUserMemberResultSerializer deserialize:elem0];
                                      }];
        }];
  }
  return DBPAPERDocsUsersAdd;
}

+ (DBRoute *)DBPAPERDocsUsersList {
  if (!DBPAPERDocsUsersList) {
    DBPAPERDocsUsersList = [[DBRoute alloc] init:@"docs/users/list"
                                      namespace_:@"paper"
                                      deprecated:@NO
                                      resultType:[DBPAPERListUsersOnPaperDocResponse class]
                                       errorType:[DBPAPERDocLookupError class]
                                           attrs:@{
                                             @"auth" : @"user",
                                             @"host" : @"api",
                                             @"style" : @"rpc"
                                           }
                           dataStructSerialBlock:nil
                         dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsUsersList;
}

+ (DBRoute *)DBPAPERDocsUsersListContinue {
  if (!DBPAPERDocsUsersListContinue) {
    DBPAPERDocsUsersListContinue = [[DBRoute alloc] init:@"docs/users/list/continue"
                                              namespace_:@"paper"
                                              deprecated:@NO
                                              resultType:[DBPAPERListUsersOnPaperDocResponse class]
                                               errorType:[DBPAPERListUsersCursorError class]
                                                   attrs:@{
                                                     @"auth" : @"user",
                                                     @"host" : @"api",
                                                     @"style" : @"rpc"
                                                   }
                                   dataStructSerialBlock:nil
                                 dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsUsersListContinue;
}

+ (DBRoute *)DBPAPERDocsUsersRemove {
  if (!DBPAPERDocsUsersRemove) {
    DBPAPERDocsUsersRemove = [[DBRoute alloc] init:@"docs/users/remove"
                                        namespace_:@"paper"
                                        deprecated:@NO
                                        resultType:nil
                                         errorType:[DBPAPERDocLookupError class]
                                             attrs:@{
                                               @"auth" : @"user",
                                               @"host" : @"api",
                                               @"style" : @"rpc"
                                             }
                             dataStructSerialBlock:nil
                           dataStructDeserialBlock:nil];
  }
  return DBPAPERDocsUsersRemove;
}

@end
