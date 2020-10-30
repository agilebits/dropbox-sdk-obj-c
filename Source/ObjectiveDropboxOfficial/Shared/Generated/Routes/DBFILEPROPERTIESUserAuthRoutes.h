///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBTasks.h>

@class DBFILEPROPERTIESAddPropertiesError;
@class DBFILEPROPERTIESAddTemplateResult;
@class DBFILEPROPERTIESGetTemplateResult;
@class DBFILEPROPERTIESInvalidPropertyGroupError;
@class DBFILEPROPERTIESListTemplateResult;
@class DBFILEPROPERTIESLogicalOperator;
@class DBFILEPROPERTIESLookUpPropertiesError;
@class DBFILEPROPERTIESLookupError;
@class DBFILEPROPERTIESModifyTemplateError;
@class DBFILEPROPERTIESPropertiesSearchContinueError;
@class DBFILEPROPERTIESPropertiesSearchError;
@class DBFILEPROPERTIESPropertiesSearchMatch;
@class DBFILEPROPERTIESPropertiesSearchMode;
@class DBFILEPROPERTIESPropertiesSearchQuery;
@class DBFILEPROPERTIESPropertiesSearchResult;
@class DBFILEPROPERTIESPropertyField;
@class DBFILEPROPERTIESPropertyFieldTemplate;
@class DBFILEPROPERTIESPropertyGroup;
@class DBFILEPROPERTIESPropertyGroupUpdate;
@class DBFILEPROPERTIESPropertyType;
@class DBFILEPROPERTIESRemovePropertiesError;
@class DBFILEPROPERTIESTemplateError;
@class DBFILEPROPERTIESTemplateFilter;
@class DBFILEPROPERTIESUpdatePropertiesError;
@class DBFILEPROPERTIESUpdateTemplateResult;
@class DBNilObject;

@protocol DBTransportClient;

///
/// Routes for the `FileProperties` namespace
///

NS_ASSUME_NONNULL_BEGIN

@interface DBFILEPROPERTIESUserAuthRoutes : NSObject

/// An instance of the networking client that each route will use to submit a
/// request.
@property (nonatomic, readonly) id<DBTransportClient> client;

/// Initializes the `DBFILEPROPERTIESUserAuthRoutes` namespace container object
/// with a networking client.
- (instancetype)init:(id<DBTransportClient>)client;

///
/// Add property groups to a Dropbox file. See `templatesAddForUser` or `templatesAddForTeam` to create new templates.
///
/// @param path A unique identifier for the file or folder.
/// @param propertyGroups The property groups which are to be added to a Dropbox file. No two groups in the input should
/// refer to the same template.
///
/// @return Through the response callback, the caller will receive a `void` object on success or a
/// `DBFILEPROPERTIESAddPropertiesError` object on failure.
///
- (DBRpcTask<DBNilObject *, DBFILEPROPERTIESAddPropertiesError *> *)
 propertiesAdd:(NSString *)path
propertyGroups:(NSArray<DBFILEPROPERTIESPropertyGroup *> *)propertyGroups;

///
/// Overwrite property groups associated with a file. This endpoint should be used instead of `propertiesUpdate` when
/// property groups are being updated via a "snapshot" instead of via a "delta". In other words, this endpoint will
/// delete all omitted fields from a property group, whereas `propertiesUpdate` will only delete fields that are
/// explicitly marked for deletion.
///
/// @param path A unique identifier for the file or folder.
/// @param propertyGroups The property groups "snapshot" updates to force apply. No two groups in the input should
/// refer to the same template.
///
/// @return Through the response callback, the caller will receive a `void` object on success or a
/// `DBFILEPROPERTIESInvalidPropertyGroupError` object on failure.
///
- (DBRpcTask<DBNilObject *, DBFILEPROPERTIESInvalidPropertyGroupError *> *)
propertiesOverwrite:(NSString *)path
     propertyGroups:(NSArray<DBFILEPROPERTIESPropertyGroup *> *)propertyGroups;

///
/// Permanently removes the specified property group from the file. To remove specific property field key value pairs,
/// see `propertiesUpdate`. To update a template, see `templatesUpdateForUser` or `templatesUpdateForTeam`. To remove a
/// template, see `templatesRemoveForUser` or `templatesRemoveForTeam`.
///
/// @param path A unique identifier for the file or folder.
/// @param propertyTemplateIds A list of identifiers for a template created by `templatesAddForUser` or
/// `templatesAddForTeam`.
///
/// @return Through the response callback, the caller will receive a `void` object on success or a
/// `DBFILEPROPERTIESRemovePropertiesError` object on failure.
///
- (DBRpcTask<DBNilObject *, DBFILEPROPERTIESRemovePropertiesError *> *)propertiesRemove:(NSString *)path
                                                                    propertyTemplateIds:
                                                                        (NSArray<NSString *> *)propertyTemplateIds;

///
/// Search across property templates for particular property field values.
///
/// @param queries Queries to search.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESPropertiesSearchResult` object on
/// success or a `DBFILEPROPERTIESPropertiesSearchError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESPropertiesSearchResult *, DBFILEPROPERTIESPropertiesSearchError *> *)propertiesSearch:
    (NSArray<DBFILEPROPERTIESPropertiesSearchQuery *> *)queries;

///
/// Search across property templates for particular property field values.
///
/// @param queries Queries to search.
/// @param templateFilter Filter results to contain only properties associated with these template IDs.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESPropertiesSearchResult` object on
/// success or a `DBFILEPROPERTIESPropertiesSearchError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESPropertiesSearchResult *, DBFILEPROPERTIESPropertiesSearchError *> *)
propertiesSearch:(NSArray<DBFILEPROPERTIESPropertiesSearchQuery *> *)queries
  templateFilter:(nullable DBFILEPROPERTIESTemplateFilter *)templateFilter;

///
/// Once a cursor has been retrieved from `propertiesSearch`, use this to paginate through all search results.
///
/// @param cursor The cursor returned by your last call to `propertiesSearch` or `propertiesSearchContinue`.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESPropertiesSearchResult` object on
/// success or a `DBFILEPROPERTIESPropertiesSearchContinueError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESPropertiesSearchResult *, DBFILEPROPERTIESPropertiesSearchContinueError *> *)
propertiesSearchContinue:(NSString *)cursor;

///
/// Add, update or remove properties associated with the supplied file and templates. This endpoint should be used
/// instead of `propertiesOverwrite` when property groups are being updated via a "delta" instead of via a "snapshot" .
/// In other words, this endpoint will not delete any omitted fields from a property group, whereas
/// `propertiesOverwrite` will delete any fields that are omitted from a property group.
///
/// @param path A unique identifier for the file or folder.
/// @param updatePropertyGroups The property groups "delta" updates to apply.
///
/// @return Through the response callback, the caller will receive a `void` object on success or a
/// `DBFILEPROPERTIESUpdatePropertiesError` object on failure.
///
- (DBRpcTask<DBNilObject *, DBFILEPROPERTIESUpdatePropertiesError *> *)
    propertiesUpdate:(NSString *)path
updatePropertyGroups:(NSArray<DBFILEPROPERTIESPropertyGroupUpdate *> *)updatePropertyGroups;

///
/// Add a template associated with a user. See `propertiesAdd` to add properties to a file. This endpoint can't be
/// called on a team member or admin's behalf.
///
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESAddTemplateResult` object on
/// success or a `DBFILEPROPERTIESModifyTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESAddTemplateResult *, DBFILEPROPERTIESModifyTemplateError *> *)
templatesAddForUser:(NSString *)name
       description_:(NSString *)description_
             fields:(NSArray<DBFILEPROPERTIESPropertyFieldTemplate *> *)fields;

///
/// Get the schema for a specified template. This endpoint can't be called on a team member or admin's behalf.
///
/// @param templateId An identifier for template added by route  See `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESGetTemplateResult` object on
/// success or a `DBFILEPROPERTIESTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESGetTemplateResult *, DBFILEPROPERTIESTemplateError *> *)templatesGetForUser:
    (NSString *)templateId;

///
/// Get the template identifiers for a team. To get the schema of each template use `templatesGetForUser`. This endpoint
/// can't be called on a team member or admin's behalf.
///
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESListTemplateResult` object on
/// success or a `DBFILEPROPERTIESTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESListTemplateResult *, DBFILEPROPERTIESTemplateError *> *)templatesListForUser;

///
/// Permanently removes the specified template created from `templatesAddForUser`. All properties associated with the
/// template will also be removed. This action cannot be undone.
///
/// @param templateId An identifier for a template created by `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return Through the response callback, the caller will receive a `void` object on success or a
/// `DBFILEPROPERTIESTemplateError` object on failure.
///
- (DBRpcTask<DBNilObject *, DBFILEPROPERTIESTemplateError *> *)templatesRemoveForUser:(NSString *)templateId;

///
/// Update a template associated with a user. This route can update the template name, the template description and add
/// optional properties to templates. This endpoint can't be called on a team member or admin's behalf.
///
/// @param templateId An identifier for template added by  See `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESUpdateTemplateResult` object on
/// success or a `DBFILEPROPERTIESModifyTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESUpdateTemplateResult *, DBFILEPROPERTIESModifyTemplateError *> *)templatesUpdateForUser:
    (NSString *)templateId;

///
/// Update a template associated with a user. This route can update the template name, the template description and add
/// optional properties to templates. This endpoint can't be called on a team member or admin's behalf.
///
/// @param templateId An identifier for template added by  See `templatesAddForUser` or `templatesAddForTeam`.
/// @param name A display name for the template. template names can be up to 256 bytes.
/// @param description_ Description for the new template. Template descriptions can be up to 1024 bytes.
/// @param addFields Property field templates to be added to the group template. There can be up to 32 properties in a
/// single template.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESUpdateTemplateResult` object on
/// success or a `DBFILEPROPERTIESModifyTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESUpdateTemplateResult *, DBFILEPROPERTIESModifyTemplateError *> *)
templatesUpdateForUser:(NSString *)templateId
                  name:(nullable NSString *)name
          description_:(nullable NSString *)description_
             addFields:(nullable NSArray<DBFILEPROPERTIESPropertyFieldTemplate *> *)addFields;

@end

NS_ASSUME_NONNULL_END
