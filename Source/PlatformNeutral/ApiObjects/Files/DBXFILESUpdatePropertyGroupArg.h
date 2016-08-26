///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESPropertyGroupUpdate;
@class DBXFILESUpdatePropertyGroupArg;

/// 
/// The `DBXFILESUpdatePropertyGroupArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUpdatePropertyGroupArg : NSObject <DBXSerializable> 

/// A unique identifier for the file.
@property (nonatomic, copy) NSString * _Nonnull path;

/// Filled custom property templates associated with a file.
@property (nonatomic) NSArray<DBXFILESPropertyGroupUpdate *> * _Nonnull updatePropertyGroups;

/// Full constructor for the `UpdatePropertyGroupArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path updatePropertyGroups:(NSArray<DBXFILESPropertyGroupUpdate *> * _Nonnull)updatePropertyGroups;

/// Returns a human-readable representation of the
/// `DBXFILESUpdatePropertyGroupArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXFILESUpdatePropertyGroupArg` struct.
/// 
@interface DBXFILESUpdatePropertyGroupArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESUpdatePropertyGroupArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUpdatePropertyGroupArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESUpdatePropertyGroupArg` object from
/// a json-compatible dictionary representation.
+ (DBXFILESUpdatePropertyGroupArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end