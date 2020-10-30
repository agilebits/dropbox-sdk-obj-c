///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGFolderAction;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FolderAction` union.
///
/// Actions that may be taken on shared folders.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFolderAction : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGFolderActionTag` enum type represents the possible tag states
/// with which the `DBSHARINGFolderAction` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGFolderActionTag){
    /// Change folder options, such as who can be invited to join the folder.
    DBSHARINGFolderActionChangeOptions,

    /// Disable viewer information for this folder.
    DBSHARINGFolderActionDisableViewerInfo,

    /// Change or edit contents of the folder.
    DBSHARINGFolderActionEditContents,

    /// Enable viewer information on the folder.
    DBSHARINGFolderActionEnableViewerInfo,

    /// Invite a user or group to join the folder with read and write
    /// permission.
    DBSHARINGFolderActionInviteEditor,

    /// Invite a user or group to join the folder with read permission.
    DBSHARINGFolderActionInviteViewer,

    /// Invite a user or group to join the folder with read permission but no
    /// comment permissions.
    DBSHARINGFolderActionInviteViewerNoComment,

    /// Relinquish one's own membership in the folder.
    DBSHARINGFolderActionRelinquishMembership,

    /// Unmount the folder.
    DBSHARINGFolderActionUnmount,

    /// Stop sharing this folder.
    DBSHARINGFolderActionUnshare,

    /// Keep a copy of the contents upon leaving or being kicked from the
    /// folder.
    DBSHARINGFolderActionLeaveACopy,

    /// Use create_link instead.
    DBSHARINGFolderActionShareLink,

    /// Create a shared link for folder.
    DBSHARINGFolderActionCreateLink,

    /// Set whether the folder inherits permissions from its parent.
    DBSHARINGFolderActionSetAccessInheritance,

    /// (no description).
    DBSHARINGFolderActionOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGFolderActionTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "change_options".
///
/// Description of the "change_options" tag state: Change folder options, such
/// as who can be invited to join the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithChangeOptions;

///
/// Initializes union class with tag state of "disable_viewer_info".
///
/// Description of the "disable_viewer_info" tag state: Disable viewer
/// information for this folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisableViewerInfo;

///
/// Initializes union class with tag state of "edit_contents".
///
/// Description of the "edit_contents" tag state: Change or edit contents of the
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithEditContents;

///
/// Initializes union class with tag state of "enable_viewer_info".
///
/// Description of the "enable_viewer_info" tag state: Enable viewer information
/// on the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithEnableViewerInfo;

///
/// Initializes union class with tag state of "invite_editor".
///
/// Description of the "invite_editor" tag state: Invite a user or group to join
/// the folder with read and write permission.
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteEditor;

///
/// Initializes union class with tag state of "invite_viewer".
///
/// Description of the "invite_viewer" tag state: Invite a user or group to join
/// the folder with read permission.
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteViewer;

///
/// Initializes union class with tag state of "invite_viewer_no_comment".
///
/// Description of the "invite_viewer_no_comment" tag state: Invite a user or
/// group to join the folder with read permission but no comment permissions.
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteViewerNoComment;

///
/// Initializes union class with tag state of "relinquish_membership".
///
/// Description of the "relinquish_membership" tag state: Relinquish one's own
/// membership in the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithRelinquishMembership;

///
/// Initializes union class with tag state of "unmount".
///
/// Description of the "unmount" tag state: Unmount the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnmount;

///
/// Initializes union class with tag state of "unshare".
///
/// Description of the "unshare" tag state: Stop sharing this folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnshare;

///
/// Initializes union class with tag state of "leave_a_copy".
///
/// Description of the "leave_a_copy" tag state: Keep a copy of the contents
/// upon leaving or being kicked from the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithLeaveACopy;

///
/// Initializes union class with tag state of "share_link".
///
/// Description of the "share_link" tag state: Use create_link instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithShareLink;

///
/// Initializes union class with tag state of "create_link".
///
/// Description of the "create_link" tag state: Create a shared link for folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithCreateLink;

///
/// Initializes union class with tag state of "set_access_inheritance".
///
/// Description of the "set_access_inheritance" tag state: Set whether the
/// folder inherits permissions from its parent.
///
/// @return An initialized instance.
///
- (instancetype)initWithSetAccessInheritance;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "change_options".
///
/// @return Whether the union's current tag state has value "change_options".
///
- (BOOL)isChangeOptions;

///
/// Retrieves whether the union's current tag state has value
/// "disable_viewer_info".
///
/// @return Whether the union's current tag state has value
/// "disable_viewer_info".
///
- (BOOL)isDisableViewerInfo;

///
/// Retrieves whether the union's current tag state has value "edit_contents".
///
/// @return Whether the union's current tag state has value "edit_contents".
///
- (BOOL)isEditContents;

///
/// Retrieves whether the union's current tag state has value
/// "enable_viewer_info".
///
/// @return Whether the union's current tag state has value
/// "enable_viewer_info".
///
- (BOOL)isEnableViewerInfo;

///
/// Retrieves whether the union's current tag state has value "invite_editor".
///
/// @return Whether the union's current tag state has value "invite_editor".
///
- (BOOL)isInviteEditor;

///
/// Retrieves whether the union's current tag state has value "invite_viewer".
///
/// @return Whether the union's current tag state has value "invite_viewer".
///
- (BOOL)isInviteViewer;

///
/// Retrieves whether the union's current tag state has value
/// "invite_viewer_no_comment".
///
/// @return Whether the union's current tag state has value
/// "invite_viewer_no_comment".
///
- (BOOL)isInviteViewerNoComment;

///
/// Retrieves whether the union's current tag state has value
/// "relinquish_membership".
///
/// @return Whether the union's current tag state has value
/// "relinquish_membership".
///
- (BOOL)isRelinquishMembership;

///
/// Retrieves whether the union's current tag state has value "unmount".
///
/// @return Whether the union's current tag state has value "unmount".
///
- (BOOL)isUnmount;

///
/// Retrieves whether the union's current tag state has value "unshare".
///
/// @return Whether the union's current tag state has value "unshare".
///
- (BOOL)isUnshare;

///
/// Retrieves whether the union's current tag state has value "leave_a_copy".
///
/// @return Whether the union's current tag state has value "leave_a_copy".
///
- (BOOL)isLeaveACopy;

///
/// Retrieves whether the union's current tag state has value "share_link".
///
/// @return Whether the union's current tag state has value "share_link".
///
- (BOOL)isShareLink;

///
/// Retrieves whether the union's current tag state has value "create_link".
///
/// @return Whether the union's current tag state has value "create_link".
///
- (BOOL)isCreateLink;

///
/// Retrieves whether the union's current tag state has value
/// "set_access_inheritance".
///
/// @return Whether the union's current tag state has value
/// "set_access_inheritance".
///
- (BOOL)isSetAccessInheritance;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGFolderAction` union.
///
@interface DBSHARINGFolderActionSerializer : NSObject

///
/// Serializes `DBSHARINGFolderAction` instances.
///
/// @param instance An instance of the `DBSHARINGFolderAction` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFolderAction` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGFolderAction *)instance;

///
/// Deserializes `DBSHARINGFolderAction` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFolderAction` API object.
///
/// @return An instantiation of the `DBSHARINGFolderAction` object.
///
+ (DBSHARINGFolderAction *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
