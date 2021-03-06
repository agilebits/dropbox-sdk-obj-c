///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESRouteObjects.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESAddPropertiesError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESAddTemplateResult.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESGetTemplateResult.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESInvalidPropertyGroupError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESListTemplateResult.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESLookUpPropertiesError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESLookupError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESModifyTemplateError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESPropertiesError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESPropertiesSearchContinueError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESPropertiesSearchError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESPropertiesSearchMatch.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESPropertiesSearchResult.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESPropertyFieldTemplate.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESPropertyGroupTemplate.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESRemovePropertiesError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESTeamAuthRoutes.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESTemplateError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESUpdatePropertiesError.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESUpdateTemplateResult.h>
#import <ObjectiveDropboxOfficial/DBFILEPROPERTIESUserAuthRoutes.h>
#import <ObjectiveDropboxOfficial/DBRequestErrors.h>
#import <ObjectiveDropboxOfficial/DBStoneBase.h>

@implementation DBFILEPROPERTIESRouteObjects

static DBRoute *DBFILEPROPERTIESPropertiesAdd;
static DBRoute *DBFILEPROPERTIESPropertiesOverwrite;
static DBRoute *DBFILEPROPERTIESPropertiesRemove;
static DBRoute *DBFILEPROPERTIESPropertiesSearch;
static DBRoute *DBFILEPROPERTIESPropertiesSearchContinue;
static DBRoute *DBFILEPROPERTIESPropertiesUpdate;
static DBRoute *DBFILEPROPERTIESTemplatesAddForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesAddForUser;
static DBRoute *DBFILEPROPERTIESTemplatesGetForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesGetForUser;
static DBRoute *DBFILEPROPERTIESTemplatesListForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesListForUser;
static DBRoute *DBFILEPROPERTIESTemplatesRemoveForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesRemoveForUser;
static DBRoute *DBFILEPROPERTIESTemplatesUpdateForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesUpdateForUser;

+ (DBRoute *)DBFILEPROPERTIESPropertiesAdd {
  if (!DBFILEPROPERTIESPropertiesAdd) {
    DBFILEPROPERTIESPropertiesAdd = [[DBRoute alloc] init:@"properties/add"
                                               namespace_:@"file_properties"
                                               deprecated:@NO
                                               resultType:nil
                                                errorType:[DBFILEPROPERTIESAddPropertiesError class]
                                                    attrs:@{
                                                      @"auth" : @"user",
                                                      @"host" : @"api",
                                                      @"style" : @"rpc"
                                                    }
                                    dataStructSerialBlock:nil
                                  dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESPropertiesAdd;
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesOverwrite {
  if (!DBFILEPROPERTIESPropertiesOverwrite) {
    DBFILEPROPERTIESPropertiesOverwrite = [[DBRoute alloc] init:@"properties/overwrite"
                                                     namespace_:@"file_properties"
                                                     deprecated:@NO
                                                     resultType:nil
                                                      errorType:[DBFILEPROPERTIESInvalidPropertyGroupError class]
                                                          attrs:@{
                                                            @"auth" : @"user",
                                                            @"host" : @"api",
                                                            @"style" : @"rpc"
                                                          }
                                          dataStructSerialBlock:nil
                                        dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESPropertiesOverwrite;
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesRemove {
  if (!DBFILEPROPERTIESPropertiesRemove) {
    DBFILEPROPERTIESPropertiesRemove = [[DBRoute alloc] init:@"properties/remove"
                                                  namespace_:@"file_properties"
                                                  deprecated:@NO
                                                  resultType:nil
                                                   errorType:[DBFILEPROPERTIESRemovePropertiesError class]
                                                       attrs:@{
                                                         @"auth" : @"user",
                                                         @"host" : @"api",
                                                         @"style" : @"rpc"
                                                       }
                                       dataStructSerialBlock:nil
                                     dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESPropertiesRemove;
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesSearch {
  if (!DBFILEPROPERTIESPropertiesSearch) {
    DBFILEPROPERTIESPropertiesSearch = [[DBRoute alloc] init:@"properties/search"
                                                  namespace_:@"file_properties"
                                                  deprecated:@NO
                                                  resultType:[DBFILEPROPERTIESPropertiesSearchResult class]
                                                   errorType:[DBFILEPROPERTIESPropertiesSearchError class]
                                                       attrs:@{
                                                         @"auth" : @"user",
                                                         @"host" : @"api",
                                                         @"style" : @"rpc"
                                                       }
                                       dataStructSerialBlock:nil
                                     dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESPropertiesSearch;
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesSearchContinue {
  if (!DBFILEPROPERTIESPropertiesSearchContinue) {
    DBFILEPROPERTIESPropertiesSearchContinue =
        [[DBRoute alloc] init:@"properties/search/continue"
                         namespace_:@"file_properties"
                         deprecated:@NO
                         resultType:[DBFILEPROPERTIESPropertiesSearchResult class]
                          errorType:[DBFILEPROPERTIESPropertiesSearchContinueError class]
                              attrs:@{
                                @"auth" : @"user",
                                @"host" : @"api",
                                @"style" : @"rpc"
                              }
              dataStructSerialBlock:nil
            dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESPropertiesSearchContinue;
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesUpdate {
  if (!DBFILEPROPERTIESPropertiesUpdate) {
    DBFILEPROPERTIESPropertiesUpdate = [[DBRoute alloc] init:@"properties/update"
                                                  namespace_:@"file_properties"
                                                  deprecated:@NO
                                                  resultType:nil
                                                   errorType:[DBFILEPROPERTIESUpdatePropertiesError class]
                                                       attrs:@{
                                                         @"auth" : @"user",
                                                         @"host" : @"api",
                                                         @"style" : @"rpc"
                                                       }
                                       dataStructSerialBlock:nil
                                     dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESPropertiesUpdate;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesAddForTeam {
  if (!DBFILEPROPERTIESTemplatesAddForTeam) {
    DBFILEPROPERTIESTemplatesAddForTeam = [[DBRoute alloc] init:@"templates/add_for_team"
                                                     namespace_:@"file_properties"
                                                     deprecated:@NO
                                                     resultType:[DBFILEPROPERTIESAddTemplateResult class]
                                                      errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                          attrs:@{
                                                            @"auth" : @"team",
                                                            @"host" : @"api",
                                                            @"style" : @"rpc"
                                                          }
                                          dataStructSerialBlock:nil
                                        dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesAddForTeam;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesAddForUser {
  if (!DBFILEPROPERTIESTemplatesAddForUser) {
    DBFILEPROPERTIESTemplatesAddForUser = [[DBRoute alloc] init:@"templates/add_for_user"
                                                     namespace_:@"file_properties"
                                                     deprecated:@NO
                                                     resultType:[DBFILEPROPERTIESAddTemplateResult class]
                                                      errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                          attrs:@{
                                                            @"auth" : @"user",
                                                            @"host" : @"api",
                                                            @"style" : @"rpc"
                                                          }
                                          dataStructSerialBlock:nil
                                        dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesAddForUser;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesGetForTeam {
  if (!DBFILEPROPERTIESTemplatesGetForTeam) {
    DBFILEPROPERTIESTemplatesGetForTeam = [[DBRoute alloc] init:@"templates/get_for_team"
                                                     namespace_:@"file_properties"
                                                     deprecated:@NO
                                                     resultType:[DBFILEPROPERTIESGetTemplateResult class]
                                                      errorType:[DBFILEPROPERTIESTemplateError class]
                                                          attrs:@{
                                                            @"auth" : @"team",
                                                            @"host" : @"api",
                                                            @"style" : @"rpc"
                                                          }
                                          dataStructSerialBlock:nil
                                        dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesGetForTeam;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesGetForUser {
  if (!DBFILEPROPERTIESTemplatesGetForUser) {
    DBFILEPROPERTIESTemplatesGetForUser = [[DBRoute alloc] init:@"templates/get_for_user"
                                                     namespace_:@"file_properties"
                                                     deprecated:@NO
                                                     resultType:[DBFILEPROPERTIESGetTemplateResult class]
                                                      errorType:[DBFILEPROPERTIESTemplateError class]
                                                          attrs:@{
                                                            @"auth" : @"user",
                                                            @"host" : @"api",
                                                            @"style" : @"rpc"
                                                          }
                                          dataStructSerialBlock:nil
                                        dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesGetForUser;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesListForTeam {
  if (!DBFILEPROPERTIESTemplatesListForTeam) {
    DBFILEPROPERTIESTemplatesListForTeam = [[DBRoute alloc] init:@"templates/list_for_team"
                                                      namespace_:@"file_properties"
                                                      deprecated:@NO
                                                      resultType:[DBFILEPROPERTIESListTemplateResult class]
                                                       errorType:[DBFILEPROPERTIESTemplateError class]
                                                           attrs:@{
                                                             @"auth" : @"team",
                                                             @"host" : @"api",
                                                             @"style" : @"rpc"
                                                           }
                                           dataStructSerialBlock:nil
                                         dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesListForTeam;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesListForUser {
  if (!DBFILEPROPERTIESTemplatesListForUser) {
    DBFILEPROPERTIESTemplatesListForUser = [[DBRoute alloc] init:@"templates/list_for_user"
                                                      namespace_:@"file_properties"
                                                      deprecated:@NO
                                                      resultType:[DBFILEPROPERTIESListTemplateResult class]
                                                       errorType:[DBFILEPROPERTIESTemplateError class]
                                                           attrs:@{
                                                             @"auth" : @"user",
                                                             @"host" : @"api",
                                                             @"style" : @"rpc"
                                                           }
                                           dataStructSerialBlock:nil
                                         dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesListForUser;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesRemoveForTeam {
  if (!DBFILEPROPERTIESTemplatesRemoveForTeam) {
    DBFILEPROPERTIESTemplatesRemoveForTeam = [[DBRoute alloc] init:@"templates/remove_for_team"
                                                        namespace_:@"file_properties"
                                                        deprecated:@NO
                                                        resultType:nil
                                                         errorType:[DBFILEPROPERTIESTemplateError class]
                                                             attrs:@{
                                                               @"auth" : @"team",
                                                               @"host" : @"api",
                                                               @"style" : @"rpc"
                                                             }
                                             dataStructSerialBlock:nil
                                           dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesRemoveForTeam;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesRemoveForUser {
  if (!DBFILEPROPERTIESTemplatesRemoveForUser) {
    DBFILEPROPERTIESTemplatesRemoveForUser = [[DBRoute alloc] init:@"templates/remove_for_user"
                                                        namespace_:@"file_properties"
                                                        deprecated:@NO
                                                        resultType:nil
                                                         errorType:[DBFILEPROPERTIESTemplateError class]
                                                             attrs:@{
                                                               @"auth" : @"user",
                                                               @"host" : @"api",
                                                               @"style" : @"rpc"
                                                             }
                                             dataStructSerialBlock:nil
                                           dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesRemoveForUser;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesUpdateForTeam {
  if (!DBFILEPROPERTIESTemplatesUpdateForTeam) {
    DBFILEPROPERTIESTemplatesUpdateForTeam = [[DBRoute alloc] init:@"templates/update_for_team"
                                                        namespace_:@"file_properties"
                                                        deprecated:@NO
                                                        resultType:[DBFILEPROPERTIESUpdateTemplateResult class]
                                                         errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                             attrs:@{
                                                               @"auth" : @"team",
                                                               @"host" : @"api",
                                                               @"style" : @"rpc"
                                                             }
                                             dataStructSerialBlock:nil
                                           dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesUpdateForTeam;
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesUpdateForUser {
  if (!DBFILEPROPERTIESTemplatesUpdateForUser) {
    DBFILEPROPERTIESTemplatesUpdateForUser = [[DBRoute alloc] init:@"templates/update_for_user"
                                                        namespace_:@"file_properties"
                                                        deprecated:@NO
                                                        resultType:[DBFILEPROPERTIESUpdateTemplateResult class]
                                                         errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                             attrs:@{
                                                               @"auth" : @"user",
                                                               @"host" : @"api",
                                                               @"style" : @"rpc"
                                                             }
                                             dataStructSerialBlock:nil
                                           dataStructDeserialBlock:nil];
  }
  return DBFILEPROPERTIESTemplatesUpdateForUser;
}

@end
