// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Asset API (cloudasset/v1)
// Description:
//   The cloud asset API manages the history and inventory of cloud resources.
// Documentation:
//   https://cloud.google.com/resource-manager/docs/cloud-asset-inventory/quickstart-cloud-asset-inventory

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudAsset_ExportAssetsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// contentType

/** Value: "ACCESS_POLICY" */
GTLR_EXTERN NSString * const kGTLRCloudAssetContentTypeAccessPolicy;
/** Value: "CONTENT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudAssetContentTypeContentTypeUnspecified;
/** Value: "IAM_POLICY" */
GTLR_EXTERN NSString * const kGTLRCloudAssetContentTypeIamPolicy;
/** Value: "ORG_POLICY" */
GTLR_EXTERN NSString * const kGTLRCloudAssetContentTypeOrgPolicy;
/** Value: "RESOURCE" */
GTLR_EXTERN NSString * const kGTLRCloudAssetContentTypeResource;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Cloud Asset query classes.
 */
@interface GTLRCloudAssetQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: cloudasset.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudAssetCloudPlatform
 */
@interface GTLRCloudAssetQuery_OperationsGet : GTLRCloudAssetQuery
// Previous library name was
//   +[GTLQueryCloudAsset queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudAsset_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudAssetQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Batch gets the update history of assets that overlap a time window.
 *  For RESOURCE content, this API outputs history with asset in both
 *  non-delete or deleted status.
 *  For IAM_POLICY content, this API outputs history when the asset and its
 *  attached IAM POLICY both exist. This can create gaps in the output history.
 *  If a specified asset does not exist, this API returns an INVALID_ARGUMENT
 *  error.
 *
 *  Method: cloudasset.batchGetAssetsHistory
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudAssetCloudPlatform
 */
@interface GTLRCloudAssetQuery_V1BatchGetAssetsHistory : GTLRCloudAssetQuery
// Previous library name was
//   +[GTLQueryCloudAsset queryForBatchGetAssetsHistoryWithparent:]

/**
 *  A list of the full names of the assets. For example:
 *  `//compute.googleapis.com/projects/my_project_123/zones/zone1/instances/instance1`.
 *  See [Resource
 *  Names](https://cloud.google.com/apis/design/resource_names#full_resource_name)
 *  and [Resource Name
 *  Format](https://cloud.google.com/resource-manager/docs/cloud-asset-inventory/resource-name-format)
 *  for more info.
 *  The request becomes a no-op if the asset name list is empty, and the max
 *  size of the asset name list is 100 in one request.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *assetNames;

/**
 *  Required. The content type.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudAssetContentTypeContentTypeUnspecified Value
 *        "CONTENT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRCloudAssetContentTypeResource Value "RESOURCE"
 *    @arg @c kGTLRCloudAssetContentTypeIamPolicy Value "IAM_POLICY"
 *    @arg @c kGTLRCloudAssetContentTypeOrgPolicy Value "ORG_POLICY"
 *    @arg @c kGTLRCloudAssetContentTypeAccessPolicy Value "ACCESS_POLICY"
 */
@property(nonatomic, copy, nullable) NSString *contentType;

/**
 *  Required. The relative name of the root asset. It can only be an
 *  organization number (such as "organizations/123"), a project ID (such as
 *  "projects/my-project-id")", or a project number (such as "projects/12345").
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  End time of the time window (inclusive).
 *  Current timestamp if not specified.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *readTimeWindowEndTime;

/** Start time of the time window (exclusive). */
@property(nonatomic, strong, nullable) GTLRDateTime *readTimeWindowStartTime;

/**
 *  Fetches a @c GTLRCloudAsset_BatchGetAssetsHistoryResponse.
 *
 *  Batch gets the update history of assets that overlap a time window.
 *  For RESOURCE content, this API outputs history with asset in both
 *  non-delete or deleted status.
 *  For IAM_POLICY content, this API outputs history when the asset and its
 *  attached IAM POLICY both exist. This can create gaps in the output history.
 *  If a specified asset does not exist, this API returns an INVALID_ARGUMENT
 *  error.
 *
 *  @param parent Required. The relative name of the root asset. It can only be
 *    an
 *    organization number (such as "organizations/123"), a project ID (such as
 *    "projects/my-project-id")", or a project number (such as
 *    "projects/12345").
 *
 *  @return GTLRCloudAssetQuery_V1BatchGetAssetsHistory
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Exports assets with time and resource types to a given Cloud Storage
 *  location. The output format is newline-delimited JSON.
 *  This API implements the google.longrunning.Operation API allowing you
 *  to keep track of the export.
 *
 *  Method: cloudasset.exportAssets
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudAssetCloudPlatform
 */
@interface GTLRCloudAssetQuery_V1ExportAssets : GTLRCloudAssetQuery
// Previous library name was
//   +[GTLQueryCloudAsset queryForExportAssetsWithObject:parent:]

/**
 *  Required. The relative name of the root asset. This can only be an
 *  organization number (such as "organizations/123"), a project ID (such as
 *  "projects/my-project-id"), or a project number (such as "projects/12345"),
 *  or a folder number (such as "folders/123").
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudAsset_Operation.
 *
 *  Exports assets with time and resource types to a given Cloud Storage
 *  location. The output format is newline-delimited JSON.
 *  This API implements the google.longrunning.Operation API allowing you
 *  to keep track of the export.
 *
 *  @param object The @c GTLRCloudAsset_ExportAssetsRequest to include in the
 *    query.
 *  @param parent Required. The relative name of the root asset. This can only
 *    be an
 *    organization number (such as "organizations/123"), a project ID (such as
 *    "projects/my-project-id"), or a project number (such as "projects/12345"),
 *    or a folder number (such as "folders/123").
 *
 *  @return GTLRCloudAssetQuery_V1ExportAssets
 */
+ (instancetype)queryWithObject:(GTLRCloudAsset_ExportAssetsRequest *)object
                         parent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
