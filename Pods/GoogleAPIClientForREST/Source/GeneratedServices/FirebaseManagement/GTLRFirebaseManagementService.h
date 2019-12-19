// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Management API (firebase/v1beta1)
// Description:
//   The Firebase Management API enables programmatic setup and management of
//   Firebase projects, including a project's Firebase resources and Firebase
//   apps.
// Documentation:
//   https://firebase.google.com

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and administer all your Firebase data and settings
 *
 *  Value "https://www.googleapis.com/auth/firebase"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseManagement;
/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseManagementCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseManagementCloudPlatformReadOnly;
/**
 *  Authorization scope: View all your Firebase data and settings
 *
 *  Value "https://www.googleapis.com/auth/firebase.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseManagementReadonly;

// ----------------------------------------------------------------------------
//   GTLRFirebaseManagementService
//

/**
 *  Service for executing Firebase Management API queries.
 *
 *  The Firebase Management API enables programmatic setup and management of
 *  Firebase projects, including a project's Firebase resources and Firebase
 *  apps.
 */
@interface GTLRFirebaseManagementService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRFirebaseManagementQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
