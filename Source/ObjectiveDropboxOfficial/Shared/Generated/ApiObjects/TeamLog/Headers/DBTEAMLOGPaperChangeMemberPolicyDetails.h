///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperChangeMemberPolicyDetails;
@class DBTEAMLOGPaperMemberPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperChangeMemberPolicyDetails` struct.
///
/// Changed whether team members can share Paper documents externally (i.e.
/// outside the team), and if so, whether they should be accessible only by team
/// members or anyone by default.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperChangeMemberPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New paper external accessibility policy.
@property (nonatomic, readonly) DBTEAMLOGPaperMemberPolicy *dNewValue;

/// Previous paper external accessibility policy. Might be missing due to
/// historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGPaperMemberPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New paper external accessibility policy.
/// @param previousValue Previous paper external accessibility policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGPaperMemberPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGPaperMemberPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New paper external accessibility policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGPaperMemberPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperChangeMemberPolicyDetails` struct.
///
@interface DBTEAMLOGPaperChangeMemberPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperChangeMemberPolicyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGPaperChangeMemberPolicyDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperChangeMemberPolicyDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGPaperChangeMemberPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperChangeMemberPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperChangeMemberPolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperChangeMemberPolicyDetails`
/// object.
///
+ (DBTEAMLOGPaperChangeMemberPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
