///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMTeamFolderCreateError.h"

#pragma mark - API Object

@implementation DBTEAMTeamFolderCreateError

#pragma mark - Constructors

- (instancetype)initWithInvalidFolderName {
  self = [super init];
  if (self) {
    _tag = DBTEAMTeamFolderCreateErrorInvalidFolderName;
  }
  return self;
}

- (instancetype)initWithFolderNameAlreadyUsed {
  self = [super init];
  if (self) {
    _tag = DBTEAMTeamFolderCreateErrorFolderNameAlreadyUsed;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBTEAMTeamFolderCreateErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isInvalidFolderName {
  return _tag == DBTEAMTeamFolderCreateErrorInvalidFolderName;
}

- (BOOL)isFolderNameAlreadyUsed {
  return _tag == DBTEAMTeamFolderCreateErrorFolderNameAlreadyUsed;
}

- (BOOL)isOther {
  return _tag == DBTEAMTeamFolderCreateErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMTeamFolderCreateErrorInvalidFolderName:
    return @"DBTEAMTeamFolderCreateErrorInvalidFolderName";
  case DBTEAMTeamFolderCreateErrorFolderNameAlreadyUsed:
    return @"DBTEAMTeamFolderCreateErrorFolderNameAlreadyUsed";
  case DBTEAMTeamFolderCreateErrorOther:
    return @"DBTEAMTeamFolderCreateErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMTeamFolderCreateErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMTeamFolderCreateErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMTeamFolderCreateErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMTeamFolderCreateErrorSerializer

+ (NSDictionary *)serialize:(DBTEAMTeamFolderCreateError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isInvalidFolderName]) {
    jsonDict[@".tag"] = @"invalid_folder_name";
  } else if ([valueObj isFolderNameAlreadyUsed]) {
    jsonDict[@".tag"] = @"folder_name_already_used";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag"
                                   reason:@"Object not properly initialized. Tag has an unknown value."
                                 userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMTeamFolderCreateError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"invalid_folder_name"]) {
    return [[DBTEAMTeamFolderCreateError alloc] initWithInvalidFolderName];
  } else if ([tag isEqualToString:@"folder_name_already_used"]) {
    return [[DBTEAMTeamFolderCreateError alloc] initWithFolderNameAlreadyUsed];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBTEAMTeamFolderCreateError alloc] initWithOther];
  }

  @throw([NSException
      exceptionWithName:@"InvalidTag"
                 reason:[NSString stringWithFormat:@"Tag has an invalid value: \"%@\".", valueDict[@".tag"]]
               userInfo:nil]);
}

@end