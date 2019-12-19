// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Apps Script API (script/v1)
// Description:
//   Manages and executes Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/api/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRScript_Content;
@class GTLRScript_CreateProjectRequest;
@class GTLRScript_DeploymentConfig;
@class GTLRScript_ExecutionRequest;
@class GTLRScript_UpdateDeploymentRequest;
@class GTLRScript_Version;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// metricsGranularity

/** Value: "DAILY" */
GTLR_EXTERN NSString * const kGTLRScriptMetricsGranularityDaily;
/** Value: "UNSPECIFIED_GRANULARITY" */
GTLR_EXTERN NSString * const kGTLRScriptMetricsGranularityUnspecifiedGranularity;
/** Value: "WEEKLY" */
GTLR_EXTERN NSString * const kGTLRScriptMetricsGranularityWeekly;

// ----------------------------------------------------------------------------
// scriptProcessFilterStatuses

/** Value: "CANCELED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesCanceled;
/** Value: "COMPLETED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesCompleted;
/** Value: "DELAYED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesDelayed;
/** Value: "FAILED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesFailed;
/** Value: "PAUSED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesPaused;
/** Value: "PROCESS_STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesProcessStatusUnspecified;
/** Value: "RUNNING" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesRunning;
/** Value: "TIMED_OUT" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesTimedOut;
/** Value: "UNKNOWN" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterStatusesUnknown;

// ----------------------------------------------------------------------------
// scriptProcessFilterTypes

/** Value: "ADD_ON" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesAddOn;
/** Value: "BATCH_TASK" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesBatchTask;
/** Value: "EDITOR" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesEditor;
/** Value: "EXECUTION_API" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesExecutionApi;
/** Value: "MENU" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesMenu;
/** Value: "PROCESS_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesProcessTypeUnspecified;
/** Value: "SIMPLE_TRIGGER" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesSimpleTrigger;
/** Value: "TIME_DRIVEN" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesTimeDriven;
/** Value: "TRIGGER" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesTrigger;
/** Value: "WEBAPP" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterTypesWebapp;

// ----------------------------------------------------------------------------
// scriptProcessFilterUserAccessLevels

/** Value: "NONE" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsNone;
/** Value: "OWNER" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsOwner;
/** Value: "READ" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsRead;
/** Value: "USER_ACCESS_LEVEL_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsUserAccessLevelUnspecified;
/** Value: "WRITE" */
GTLR_EXTERN NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsWrite;

// ----------------------------------------------------------------------------
// userProcessFilterStatuses

/** Value: "CANCELED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesCanceled;
/** Value: "COMPLETED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesCompleted;
/** Value: "DELAYED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesDelayed;
/** Value: "FAILED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesFailed;
/** Value: "PAUSED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesPaused;
/** Value: "PROCESS_STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesProcessStatusUnspecified;
/** Value: "RUNNING" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesRunning;
/** Value: "TIMED_OUT" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesTimedOut;
/** Value: "UNKNOWN" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterStatusesUnknown;

// ----------------------------------------------------------------------------
// userProcessFilterTypes

/** Value: "ADD_ON" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesAddOn;
/** Value: "BATCH_TASK" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesBatchTask;
/** Value: "EDITOR" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesEditor;
/** Value: "EXECUTION_API" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesExecutionApi;
/** Value: "MENU" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesMenu;
/** Value: "PROCESS_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesProcessTypeUnspecified;
/** Value: "SIMPLE_TRIGGER" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesSimpleTrigger;
/** Value: "TIME_DRIVEN" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesTimeDriven;
/** Value: "TRIGGER" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesTrigger;
/** Value: "WEBAPP" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterTypesWebapp;

// ----------------------------------------------------------------------------
// userProcessFilterUserAccessLevels

/** Value: "NONE" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsNone;
/** Value: "OWNER" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsOwner;
/** Value: "READ" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsRead;
/** Value: "USER_ACCESS_LEVEL_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsUserAccessLevelUnspecified;
/** Value: "WRITE" */
GTLR_EXTERN NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsWrite;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Script query classes.
 */
@interface GTLRScriptQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  List information about processes made by or on behalf of a user,
 *  such as process type and current status.
 *
 *  Method: script.processes.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProcesses
 */
@interface GTLRScriptQuery_ProcessesList : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProcessesList]

/**
 *  The maximum number of returned processes per page of results. Defaults to
 *  50.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The token for continuing a previous list request on the next page. This
 *  should be set to the value of `nextPageToken` from a previous response.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Optional field used to limit returned processes to those originating from
 *  projects with a specific deployment ID.
 */
@property(nonatomic, copy, nullable) NSString *userProcessFilterDeploymentId;

/**
 *  Optional field used to limit returned processes to those that completed
 *  on or before the given timestamp.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *userProcessFilterEndTime;

/**
 *  Optional field used to limit returned processes to those originating from
 *  a script function with the given function name.
 */
@property(nonatomic, copy, nullable) NSString *userProcessFilterFunctionName;

/**
 *  Optional field used to limit returned processes to those originating from
 *  projects with project names containing a specific string.
 */
@property(nonatomic, copy, nullable) NSString *userProcessFilterProjectName;

/**
 *  Optional field used to limit returned processes to those originating from
 *  projects with a specific script ID.
 */
@property(nonatomic, copy, nullable) NSString *userProcessFilterScriptId;

/**
 *  Optional field used to limit returned processes to those that were
 *  started on or after the given timestamp.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *userProcessFilterStartTime;

/**
 *  Optional field used to limit returned processes to those having one of
 *  the specified process statuses.
 *
 *  Likely values:
 *    @arg @c kGTLRScriptUserProcessFilterStatusesProcessStatusUnspecified Value
 *        "PROCESS_STATUS_UNSPECIFIED"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesRunning Value "RUNNING"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesPaused Value "PAUSED"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesCompleted Value "COMPLETED"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesCanceled Value "CANCELED"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesFailed Value "FAILED"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesTimedOut Value "TIMED_OUT"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesUnknown Value "UNKNOWN"
 *    @arg @c kGTLRScriptUserProcessFilterStatusesDelayed Value "DELAYED"
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *userProcessFilterStatuses;

/**
 *  Optional field used to limit returned processes to those having one of
 *  the specified process types.
 *
 *  Likely values:
 *    @arg @c kGTLRScriptUserProcessFilterTypesProcessTypeUnspecified Value
 *        "PROCESS_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRScriptUserProcessFilterTypesAddOn Value "ADD_ON"
 *    @arg @c kGTLRScriptUserProcessFilterTypesExecutionApi Value
 *        "EXECUTION_API"
 *    @arg @c kGTLRScriptUserProcessFilterTypesTimeDriven Value "TIME_DRIVEN"
 *    @arg @c kGTLRScriptUserProcessFilterTypesTrigger Value "TRIGGER"
 *    @arg @c kGTLRScriptUserProcessFilterTypesWebapp Value "WEBAPP"
 *    @arg @c kGTLRScriptUserProcessFilterTypesEditor Value "EDITOR"
 *    @arg @c kGTLRScriptUserProcessFilterTypesSimpleTrigger Value
 *        "SIMPLE_TRIGGER"
 *    @arg @c kGTLRScriptUserProcessFilterTypesMenu Value "MENU"
 *    @arg @c kGTLRScriptUserProcessFilterTypesBatchTask Value "BATCH_TASK"
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *userProcessFilterTypes;

/**
 *  Optional field used to limit returned processes to those having one of
 *  the specified user access levels.
 *
 *  Likely values:
 *    @arg @c kGTLRScriptUserProcessFilterUserAccessLevelsUserAccessLevelUnspecified
 *        Value "USER_ACCESS_LEVEL_UNSPECIFIED"
 *    @arg @c kGTLRScriptUserProcessFilterUserAccessLevelsNone Value "NONE"
 *    @arg @c kGTLRScriptUserProcessFilterUserAccessLevelsRead Value "READ"
 *    @arg @c kGTLRScriptUserProcessFilterUserAccessLevelsWrite Value "WRITE"
 *    @arg @c kGTLRScriptUserProcessFilterUserAccessLevelsOwner Value "OWNER"
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *userProcessFilterUserAccessLevels;

/**
 *  Fetches a @c GTLRScript_ListUserProcessesResponse.
 *
 *  List information about processes made by or on behalf of a user,
 *  such as process type and current status.
 *
 *  @return GTLRScriptQuery_ProcessesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  List information about a script's executed processes, such as process type
 *  and current status.
 *
 *  Method: script.processes.listScriptProcesses
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProcesses
 */
@interface GTLRScriptQuery_ProcessesListScriptProcesses : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProcessesListScriptProcesses]

/**
 *  The maximum number of returned processes per page of results. Defaults to
 *  50.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The token for continuing a previous list request on the next page. This
 *  should be set to the value of `nextPageToken` from a previous response.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The script ID of the project whose processes are listed. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Optional field used to limit returned processes to those originating from
 *  projects with a specific deployment ID.
 */
@property(nonatomic, copy, nullable) NSString *scriptProcessFilterDeploymentId;

/**
 *  Optional field used to limit returned processes to those that completed
 *  on or before the given timestamp.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *scriptProcessFilterEndTime;

/**
 *  Optional field used to limit returned processes to those originating from
 *  a script function with the given function name.
 */
@property(nonatomic, copy, nullable) NSString *scriptProcessFilterFunctionName;

/**
 *  Optional field used to limit returned processes to those that were
 *  started on or after the given timestamp.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *scriptProcessFilterStartTime;

/**
 *  Optional field used to limit returned processes to those having one of
 *  the specified process statuses.
 *
 *  Likely values:
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesProcessStatusUnspecified
 *        Value "PROCESS_STATUS_UNSPECIFIED"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesRunning Value "RUNNING"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesPaused Value "PAUSED"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesCompleted Value "COMPLETED"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesCanceled Value "CANCELED"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesFailed Value "FAILED"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesTimedOut Value "TIMED_OUT"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesUnknown Value "UNKNOWN"
 *    @arg @c kGTLRScriptScriptProcessFilterStatusesDelayed Value "DELAYED"
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *scriptProcessFilterStatuses;

/**
 *  Optional field used to limit returned processes to those having one of
 *  the specified process types.
 *
 *  Likely values:
 *    @arg @c kGTLRScriptScriptProcessFilterTypesProcessTypeUnspecified Value
 *        "PROCESS_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesAddOn Value "ADD_ON"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesExecutionApi Value
 *        "EXECUTION_API"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesTimeDriven Value "TIME_DRIVEN"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesTrigger Value "TRIGGER"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesWebapp Value "WEBAPP"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesEditor Value "EDITOR"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesSimpleTrigger Value
 *        "SIMPLE_TRIGGER"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesMenu Value "MENU"
 *    @arg @c kGTLRScriptScriptProcessFilterTypesBatchTask Value "BATCH_TASK"
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *scriptProcessFilterTypes;

/**
 *  Optional field used to limit returned processes to those having one of
 *  the specified user access levels.
 *
 *  Likely values:
 *    @arg @c kGTLRScriptScriptProcessFilterUserAccessLevelsUserAccessLevelUnspecified
 *        Value "USER_ACCESS_LEVEL_UNSPECIFIED"
 *    @arg @c kGTLRScriptScriptProcessFilterUserAccessLevelsNone Value "NONE"
 *    @arg @c kGTLRScriptScriptProcessFilterUserAccessLevelsRead Value "READ"
 *    @arg @c kGTLRScriptScriptProcessFilterUserAccessLevelsWrite Value "WRITE"
 *    @arg @c kGTLRScriptScriptProcessFilterUserAccessLevelsOwner Value "OWNER"
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *scriptProcessFilterUserAccessLevels;

/**
 *  Fetches a @c GTLRScript_ListScriptProcessesResponse.
 *
 *  List information about a script's executed processes, such as process type
 *  and current status.
 *
 *  @return GTLRScriptQuery_ProcessesListScriptProcesses
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Creates a new, empty script project with no script files and a base
 *  manifest file.
 *
 *  Method: script.projects.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProjects
 */
@interface GTLRScriptQuery_ProjectsCreate : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsCreateWithObject:]

/**
 *  Fetches a @c GTLRScript_Project.
 *
 *  Creates a new, empty script project with no script files and a base
 *  manifest file.
 *
 *  @param object The @c GTLRScript_CreateProjectRequest to include in the
 *    query.
 *
 *  @return GTLRScriptQuery_ProjectsCreate
 */
+ (instancetype)queryWithObject:(GTLRScript_CreateProjectRequest *)object;

@end

/**
 *  Creates a deployment of an Apps Script project.
 *
 *  Method: script.projects.deployments.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptDeployments
 */
@interface GTLRScriptQuery_ProjectsDeploymentsCreate : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsDeploymentsCreateWithObject:scriptId:]

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Deployment.
 *
 *  Creates a deployment of an Apps Script project.
 *
 *  @param object The @c GTLRScript_DeploymentConfig to include in the query.
 *  @param scriptId The script project's Drive ID.
 *
 *  @return GTLRScriptQuery_ProjectsDeploymentsCreate
 */
+ (instancetype)queryWithObject:(GTLRScript_DeploymentConfig *)object
                       scriptId:(NSString *)scriptId;

@end

/**
 *  Deletes a deployment of an Apps Script project.
 *
 *  Method: script.projects.deployments.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptDeployments
 */
@interface GTLRScriptQuery_ProjectsDeploymentsDelete : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsDeploymentsDeleteWithscriptId:deploymentId:]

/** The deployment ID to be undeployed. */
@property(nonatomic, copy, nullable) NSString *deploymentId;

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Empty.
 *
 *  Deletes a deployment of an Apps Script project.
 *
 *  @param scriptId The script project's Drive ID.
 *  @param deploymentId The deployment ID to be undeployed.
 *
 *  @return GTLRScriptQuery_ProjectsDeploymentsDelete
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId
                     deploymentId:(NSString *)deploymentId;

@end

/**
 *  Gets a deployment of an Apps Script project.
 *
 *  Method: script.projects.deployments.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptDeployments
 *    @c kGTLRAuthScopeScriptDeploymentsReadonly
 */
@interface GTLRScriptQuery_ProjectsDeploymentsGet : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsDeploymentsGetWithscriptId:deploymentId:]

/** The deployment ID. */
@property(nonatomic, copy, nullable) NSString *deploymentId;

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Deployment.
 *
 *  Gets a deployment of an Apps Script project.
 *
 *  @param scriptId The script project's Drive ID.
 *  @param deploymentId The deployment ID.
 *
 *  @return GTLRScriptQuery_ProjectsDeploymentsGet
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId
                     deploymentId:(NSString *)deploymentId;

@end

/**
 *  Lists the deployments of an Apps Script project.
 *
 *  Method: script.projects.deployments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptDeployments
 *    @c kGTLRAuthScopeScriptDeploymentsReadonly
 */
@interface GTLRScriptQuery_ProjectsDeploymentsList : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsDeploymentsListWithscriptId:]

/**
 *  The maximum number of deployments on each returned page. Defaults to 50.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The token for continuing a previous list request on the next page. This
 *  should be set to the value of `nextPageToken` from a previous response.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_ListDeploymentsResponse.
 *
 *  Lists the deployments of an Apps Script project.
 *
 *  @param scriptId The script project's Drive ID.
 *
 *  @return GTLRScriptQuery_ProjectsDeploymentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId;

@end

/**
 *  Updates a deployment of an Apps Script project.
 *
 *  Method: script.projects.deployments.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptDeployments
 */
@interface GTLRScriptQuery_ProjectsDeploymentsUpdate : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsDeploymentsUpdateWithObject:scriptId:deploymentId:]

/** The deployment ID for this deployment. */
@property(nonatomic, copy, nullable) NSString *deploymentId;

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Deployment.
 *
 *  Updates a deployment of an Apps Script project.
 *
 *  @param object The @c GTLRScript_UpdateDeploymentRequest to include in the
 *    query.
 *  @param scriptId The script project's Drive ID.
 *  @param deploymentId The deployment ID for this deployment.
 *
 *  @return GTLRScriptQuery_ProjectsDeploymentsUpdate
 */
+ (instancetype)queryWithObject:(GTLRScript_UpdateDeploymentRequest *)object
                       scriptId:(NSString *)scriptId
                   deploymentId:(NSString *)deploymentId;

@end

/**
 *  Gets a script project's metadata.
 *
 *  Method: script.projects.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProjects
 *    @c kGTLRAuthScopeScriptProjectsReadonly
 */
@interface GTLRScriptQuery_ProjectsGet : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsGetWithscriptId:]

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Project.
 *
 *  Gets a script project's metadata.
 *
 *  @param scriptId The script project's Drive ID.
 *
 *  @return GTLRScriptQuery_ProjectsGet
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId;

@end

/**
 *  Gets the content of the script project, including the code source and
 *  metadata for each script file.
 *
 *  Method: script.projects.getContent
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProjects
 *    @c kGTLRAuthScopeScriptProjectsReadonly
 */
@interface GTLRScriptQuery_ProjectsGetContent : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsGetContentWithscriptId:]

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  The version number of the project to retrieve. If not provided, the
 *  project's HEAD version is returned.
 */
@property(nonatomic, assign) NSInteger versionNumber;

/**
 *  Fetches a @c GTLRScript_Content.
 *
 *  Gets the content of the script project, including the code source and
 *  metadata for each script file.
 *
 *  @param scriptId The script project's Drive ID.
 *
 *  @return GTLRScriptQuery_ProjectsGetContent
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId;

@end

/**
 *  Get metrics data for scripts, such as number of executions and
 *  active users.
 *
 *  Method: script.projects.getMetrics
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptMetrics
 */
@interface GTLRScriptQuery_ProjectsGetMetrics : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsGetMetricsWithscriptId:]

/**
 *  Optional field indicating a specific deployment to retrieve metrics from.
 */
@property(nonatomic, copy, nullable) NSString *metricsFilterDeploymentId;

/**
 *  Required field indicating what granularity of metrics are returned.
 *
 *  Likely values:
 *    @arg @c kGTLRScriptMetricsGranularityUnspecifiedGranularity Value
 *        "UNSPECIFIED_GRANULARITY"
 *    @arg @c kGTLRScriptMetricsGranularityWeekly Value "WEEKLY"
 *    @arg @c kGTLRScriptMetricsGranularityDaily Value "DAILY"
 */
@property(nonatomic, copy, nullable) NSString *metricsGranularity;

/** Required field indicating the script to get metrics for. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Metrics.
 *
 *  Get metrics data for scripts, such as number of executions and
 *  active users.
 *
 *  @param scriptId Required field indicating the script to get metrics for.
 *
 *  @return GTLRScriptQuery_ProjectsGetMetrics
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId;

@end

/**
 *  Updates the content of the specified script project.
 *  This content is stored as the HEAD version, and is used when the script is
 *  executed as a trigger, in the script editor, in add-on preview mode, or as
 *  a web app or Apps Script API in development mode. This clears all the
 *  existing files in the project.
 *
 *  Method: script.projects.updateContent
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProjects
 */
@interface GTLRScriptQuery_ProjectsUpdateContent : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsUpdateContentWithObject:scriptId:]

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Content.
 *
 *  Updates the content of the specified script project.
 *  This content is stored as the HEAD version, and is used when the script is
 *  executed as a trigger, in the script editor, in add-on preview mode, or as
 *  a web app or Apps Script API in development mode. This clears all the
 *  existing files in the project.
 *
 *  @param object The @c GTLRScript_Content to include in the query.
 *  @param scriptId The script project's Drive ID.
 *
 *  @return GTLRScriptQuery_ProjectsUpdateContent
 */
+ (instancetype)queryWithObject:(GTLRScript_Content *)object
                       scriptId:(NSString *)scriptId;

@end

/**
 *  Creates a new immutable version using the current code, with a unique
 *  version number.
 *
 *  Method: script.projects.versions.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProjects
 */
@interface GTLRScriptQuery_ProjectsVersionsCreate : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsVersionsCreateWithObject:scriptId:]

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Version.
 *
 *  Creates a new immutable version using the current code, with a unique
 *  version number.
 *
 *  @param object The @c GTLRScript_Version to include in the query.
 *  @param scriptId The script project's Drive ID.
 *
 *  @return GTLRScriptQuery_ProjectsVersionsCreate
 */
+ (instancetype)queryWithObject:(GTLRScript_Version *)object
                       scriptId:(NSString *)scriptId;

@end

/**
 *  Gets a version of a script project.
 *
 *  Method: script.projects.versions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProjects
 *    @c kGTLRAuthScopeScriptProjectsReadonly
 */
@interface GTLRScriptQuery_ProjectsVersionsGet : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsVersionsGetWithscriptId:versionNumber:]

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/** The version number. */
@property(nonatomic, assign) NSInteger versionNumber;

/**
 *  Fetches a @c GTLRScript_Version.
 *
 *  Gets a version of a script project.
 *
 *  @param scriptId The script project's Drive ID.
 *  @param versionNumber The version number.
 *
 *  @return GTLRScriptQuery_ProjectsVersionsGet
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId
                    versionNumber:(NSInteger)versionNumber;

@end

/**
 *  List the versions of a script project.
 *
 *  Method: script.projects.versions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptProjects
 *    @c kGTLRAuthScopeScriptProjectsReadonly
 */
@interface GTLRScriptQuery_ProjectsVersionsList : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForProjectsVersionsListWithscriptId:]

/** The maximum number of versions on each returned page. Defaults to 50. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The token for continuing a previous list request on the next page. This
 *  should be set to the value of `nextPageToken` from a previous response.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The script project's Drive ID. */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_ListVersionsResponse.
 *
 *  List the versions of a script project.
 *
 *  @param scriptId The script project's Drive ID.
 *
 *  @return GTLRScriptQuery_ProjectsVersionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithScriptId:(NSString *)scriptId;

@end

/**
 *  Runs a function in an Apps Script project. The script project must be
 *  deployed for use with the Apps Script API and the calling application must
 *  share the same Cloud Platform project.
 *  This method requires authorization with an OAuth 2.0 token that includes at
 *  least one of the scopes listed in the [Authorization](#authorization)
 *  section; script projects that do not require authorization cannot be
 *  executed through this API. To find the correct scopes to include in the
 *  authentication token, open the project in the script editor, then select
 *  **File > Project properties** and click the **Scopes** tab.
 *  The error `403, PERMISSION_DENIED: The caller does not have permission`
 *  indicates that the Cloud Platform project used to authorize the request is
 *  not the same as the one used by the script.
 *
 *  Method: script.scripts.run
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptAdminDirectoryGroup
 *    @c kGTLRAuthScopeScriptAdminDirectoryUser
 *    @c kGTLRAuthScopeScriptCalendarFeeds
 *    @c kGTLRAuthScopeScriptDocuments
 *    @c kGTLRAuthScopeScriptDrive
 *    @c kGTLRAuthScopeScriptForms
 *    @c kGTLRAuthScopeScriptFormsCurrentonly
 *    @c kGTLRAuthScopeScriptGroups
 *    @c kGTLRAuthScopeScriptM8Feeds
 *    @c kGTLRAuthScopeScriptMailGoogleCom
 *    @c kGTLRAuthScopeScriptSpreadsheets
 *    @c kGTLRAuthScopeScriptUserinfoEmail
 */
@interface GTLRScriptQuery_ScriptsRun : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForScriptsRunWithObject:scriptId:]

/**
 *  The script ID of the script to be executed. To find the script ID, open
 *  the project in the script editor and select **File > Project properties**.
 */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Operation.
 *
 *  Runs a function in an Apps Script project. The script project must be
 *  deployed for use with the Apps Script API and the calling application must
 *  share the same Cloud Platform project.
 *  This method requires authorization with an OAuth 2.0 token that includes at
 *  least one of the scopes listed in the [Authorization](#authorization)
 *  section; script projects that do not require authorization cannot be
 *  executed through this API. To find the correct scopes to include in the
 *  authentication token, open the project in the script editor, then select
 *  **File > Project properties** and click the **Scopes** tab.
 *  The error `403, PERMISSION_DENIED: The caller does not have permission`
 *  indicates that the Cloud Platform project used to authorize the request is
 *  not the same as the one used by the script.
 *
 *  @param object The @c GTLRScript_ExecutionRequest to include in the query.
 *  @param scriptId The script ID of the script to be executed. To find the
 *    script ID, open
 *    the project in the script editor and select **File > Project properties**.
 *
 *  @return GTLRScriptQuery_ScriptsRun
 */
+ (instancetype)queryWithObject:(GTLRScript_ExecutionRequest *)object
                       scriptId:(NSString *)scriptId;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
