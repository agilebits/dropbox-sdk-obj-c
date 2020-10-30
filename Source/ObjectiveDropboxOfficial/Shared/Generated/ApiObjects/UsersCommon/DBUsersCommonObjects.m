///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

/// Arguments, results, and errors for the `UsersCommon` namespace.

#import <ObjectiveDropboxOfficial/DBStoneSerializers.h>
#import <ObjectiveDropboxOfficial/DBStoneValidators.h>
#import <ObjectiveDropboxOfficial/DBUSERSCOMMONAccountType.h>

#pragma mark - API Object

@implementation DBUSERSCOMMONAccountType

#pragma mark - Constructors

- (instancetype)initWithBasic {
  self = [super init];
  if (self) {
    _tag = DBUSERSCOMMONAccountTypeBasic;
  }
  return self;
}

- (instancetype)initWithPro {
  self = [super init];
  if (self) {
    _tag = DBUSERSCOMMONAccountTypePro;
  }
  return self;
}

- (instancetype)initWithBusiness {
  self = [super init];
  if (self) {
    _tag = DBUSERSCOMMONAccountTypeBusiness;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isBasic {
  return _tag == DBUSERSCOMMONAccountTypeBasic;
}

- (BOOL)isPro {
  return _tag == DBUSERSCOMMONAccountTypePro;
}

- (BOOL)isBusiness {
  return _tag == DBUSERSCOMMONAccountTypeBusiness;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBUSERSCOMMONAccountTypeBasic:
    return @"DBUSERSCOMMONAccountTypeBasic";
  case DBUSERSCOMMONAccountTypePro:
    return @"DBUSERSCOMMONAccountTypePro";
  case DBUSERSCOMMONAccountTypeBusiness:
    return @"DBUSERSCOMMONAccountTypeBusiness";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (nullable NSDictionary<NSString *, id> *)serialize:(id)instance {
  return [DBUSERSCOMMONAccountTypeSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary<NSString *, id> *)dict {
  return [DBUSERSCOMMONAccountTypeSerializer deserialize:dict];
}

#pragma mark - Debug Description method

- (NSString *)debugDescription {
  return [[DBUSERSCOMMONAccountTypeSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  switch (_tag) {
  case DBUSERSCOMMONAccountTypeBasic:
    result = prime * result + [[self tagName] hash];
  case DBUSERSCOMMONAccountTypePro:
    result = prime * result + [[self tagName] hash];
  case DBUSERSCOMMONAccountTypeBusiness:
    result = prime * result + [[self tagName] hash];
  }

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToAccountType:other];
}

- (BOOL)isEqualToAccountType:(DBUSERSCOMMONAccountType *)anAccountType {
  if (self == anAccountType) {
    return YES;
  }
  if (self.tag != anAccountType.tag) {
    return NO;
  }
  switch (_tag) {
  case DBUSERSCOMMONAccountTypeBasic:
    return [[self tagName] isEqual:[anAccountType tagName]];
  case DBUSERSCOMMONAccountTypePro:
    return [[self tagName] isEqual:[anAccountType tagName]];
  case DBUSERSCOMMONAccountTypeBusiness:
    return [[self tagName] isEqual:[anAccountType tagName]];
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBUSERSCOMMONAccountTypeSerializer

+ (NSDictionary<NSString *, id> *)serialize:(DBUSERSCOMMONAccountType *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isBasic]) {
    jsonDict[@".tag"] = @"basic";
  } else if ([valueObj isPro]) {
    jsonDict[@".tag"] = @"pro";
  } else if ([valueObj isBusiness]) {
    jsonDict[@".tag"] = @"business";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag"
                                   reason:@"Object not properly initialized. Tag has an unknown value."
                                 userInfo:nil]);
  }

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBUSERSCOMMONAccountType *)deserialize:(NSDictionary<NSString *, id> *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"basic"]) {
    return [[DBUSERSCOMMONAccountType alloc] initWithBasic];
  } else if ([tag isEqualToString:@"pro"]) {
    return [[DBUSERSCOMMONAccountType alloc] initWithPro];
  } else if ([tag isEqualToString:@"business"]) {
    return [[DBUSERSCOMMONAccountType alloc] initWithBusiness];
  } else {
    @throw([NSException
        exceptionWithName:@"InvalidTag"
                   reason:[NSString stringWithFormat:@"Tag has an invalid value: \"%@\".", valueDict[@".tag"]]
                 userInfo:nil]);
  }
}

@end
