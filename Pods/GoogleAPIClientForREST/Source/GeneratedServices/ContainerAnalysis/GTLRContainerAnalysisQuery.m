// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Container Analysis API (containeranalysis/v1alpha1)
// Description:
//   An implementation of the Grafeas API, which stores, and enables querying
//   and retrieval of critical metadata about all of your software artifacts.
// Documentation:
//   https://cloud.google.com/container-analysis/api/reference/rest/

#import "GTLRContainerAnalysisQuery.h"

#import "GTLRContainerAnalysisObjects.h"

// ----------------------------------------------------------------------------
// Constants

// kind
NSString * const kGTLRContainerAnalysisKindAttestationAuthority = @"ATTESTATION_AUTHORITY";
NSString * const kGTLRContainerAnalysisKindBuildDetails        = @"BUILD_DETAILS";
NSString * const kGTLRContainerAnalysisKindDeployable          = @"DEPLOYABLE";
NSString * const kGTLRContainerAnalysisKindDiscovery           = @"DISCOVERY";
NSString * const kGTLRContainerAnalysisKindImageBasis          = @"IMAGE_BASIS";
NSString * const kGTLRContainerAnalysisKindKindUnspecified     = @"KIND_UNSPECIFIED";
NSString * const kGTLRContainerAnalysisKindPackageManager      = @"PACKAGE_MANAGER";
NSString * const kGTLRContainerAnalysisKindPackageVulnerability = @"PACKAGE_VULNERABILITY";
NSString * const kGTLRContainerAnalysisKindUpgrade             = @"UPGRADE";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRContainerAnalysisQuery

@dynamic fields;

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesCreate

@dynamic name, noteId, parent;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Note *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/notes";
  GTLRContainerAnalysisQuery_ProjectsNotesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRContainerAnalysis_Note class];
  query.loggingName = @"containeranalysis.projects.notes.create";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsNotesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Empty class];
  query.loggingName = @"containeranalysis.projects.notes.delete";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsNotesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Note class];
  query.loggingName = @"containeranalysis.projects.notes.get";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_GetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:getIamPolicy";
  GTLRContainerAnalysisQuery_ProjectsNotesGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_Policy class];
  query.loggingName = @"containeranalysis.projects.notes.getIamPolicy";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesList

@dynamic filter, name, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/notes";
  GTLRContainerAnalysisQuery_ProjectsNotesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRContainerAnalysis_ListNotesResponse class];
  query.loggingName = @"containeranalysis.projects.notes.list";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesOccurrencesList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}/occurrences";
  GTLRContainerAnalysisQuery_ProjectsNotesOccurrencesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_ListNoteOccurrencesResponse class];
  query.loggingName = @"containeranalysis.projects.notes.occurrences.list";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Note *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsNotesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Note class];
  query.loggingName = @"containeranalysis.projects.notes.patch";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:setIamPolicy";
  GTLRContainerAnalysisQuery_ProjectsNotesSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_Policy class];
  query.loggingName = @"containeranalysis.projects.notes.setIamPolicy";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsNotesTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:testIamPermissions";
  GTLRContainerAnalysisQuery_ProjectsNotesTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_TestIamPermissionsResponse class];
  query.loggingName = @"containeranalysis.projects.notes.testIamPermissions";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesCreate

@dynamic name, parent;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Occurrence *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/occurrences";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRContainerAnalysis_Occurrence class];
  query.loggingName = @"containeranalysis.projects.occurrences.create";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Empty class];
  query.loggingName = @"containeranalysis.projects.occurrences.delete";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Occurrence class];
  query.loggingName = @"containeranalysis.projects.occurrences.get";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_GetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:getIamPolicy";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_Policy class];
  query.loggingName = @"containeranalysis.projects.occurrences.getIamPolicy";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesGetNotes

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}/notes";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesGetNotes *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Note class];
  query.loggingName = @"containeranalysis.projects.occurrences.getNotes";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesGetVulnerabilitySummary

@dynamic filter, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/occurrences:vulnerabilitySummary";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesGetVulnerabilitySummary *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRContainerAnalysis_GetVulnzOccurrencesSummaryResponse class];
  query.loggingName = @"containeranalysis.projects.occurrences.getVulnerabilitySummary";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesList

@dynamic filter, kind, name, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/occurrences";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRContainerAnalysis_ListOccurrencesResponse class];
  query.loggingName = @"containeranalysis.projects.occurrences.list";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Occurrence *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Occurrence class];
  query.loggingName = @"containeranalysis.projects.occurrences.patch";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:setIamPolicy";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_Policy class];
  query.loggingName = @"containeranalysis.projects.occurrences.setIamPolicy";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOccurrencesTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:testIamPermissions";
  GTLRContainerAnalysisQuery_ProjectsOccurrencesTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_TestIamPermissionsResponse class];
  query.loggingName = @"containeranalysis.projects.occurrences.testIamPermissions";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOperationsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_CreateOperationRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/operations";
  GTLRContainerAnalysisQuery_ProjectsOperationsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRContainerAnalysis_Operation class];
  query.loggingName = @"containeranalysis.projects.operations.create";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsOperationsPatch

@dynamic name;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_UpdateOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsOperationsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Operation class];
  query.loggingName = @"containeranalysis.projects.operations.patch";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsScanConfigsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsScanConfigsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_ScanConfig class];
  query.loggingName = @"containeranalysis.projects.scanConfigs.get";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsScanConfigsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/scanConfigs";
  GTLRContainerAnalysisQuery_ProjectsScanConfigsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRContainerAnalysis_ListScanConfigsResponse class];
  query.loggingName = @"containeranalysis.projects.scanConfigs.list";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProjectsScanConfigsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_ScanConfig *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProjectsScanConfigsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_ScanConfig class];
  query.loggingName = @"containeranalysis.projects.scanConfigs.patch";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesCreate

@dynamic name, noteId, parent;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Note *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}/notes";
  GTLRContainerAnalysisQuery_ProvidersNotesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Note class];
  query.loggingName = @"containeranalysis.providers.notes.create";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProvidersNotesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Empty class];
  query.loggingName = @"containeranalysis.providers.notes.delete";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProvidersNotesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Note class];
  query.loggingName = @"containeranalysis.providers.notes.get";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_GetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:getIamPolicy";
  GTLRContainerAnalysisQuery_ProvidersNotesGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_Policy class];
  query.loggingName = @"containeranalysis.providers.notes.getIamPolicy";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesList

@dynamic filter, name, pageSize, pageToken, parent;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}/notes";
  GTLRContainerAnalysisQuery_ProvidersNotesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_ListNotesResponse class];
  query.loggingName = @"containeranalysis.providers.notes.list";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesOccurrencesList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}/occurrences";
  GTLRContainerAnalysisQuery_ProvidersNotesOccurrencesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_ListNoteOccurrencesResponse class];
  query.loggingName = @"containeranalysis.providers.notes.occurrences.list";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Note *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRContainerAnalysisQuery_ProvidersNotesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRContainerAnalysis_Note class];
  query.loggingName = @"containeranalysis.providers.notes.patch";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:setIamPolicy";
  GTLRContainerAnalysisQuery_ProvidersNotesSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_Policy class];
  query.loggingName = @"containeranalysis.providers.notes.setIamPolicy";
  return query;
}

@end

@implementation GTLRContainerAnalysisQuery_ProvidersNotesTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRContainerAnalysis_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1alpha1/{+resource}:testIamPermissions";
  GTLRContainerAnalysisQuery_ProvidersNotesTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRContainerAnalysis_TestIamPermissionsResponse class];
  query.loggingName = @"containeranalysis.providers.notes.testIamPermissions";
  return query;
}

@end
