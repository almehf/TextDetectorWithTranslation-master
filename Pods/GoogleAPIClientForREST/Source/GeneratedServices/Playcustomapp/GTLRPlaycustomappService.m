// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Custom App Publishing API (playcustomapp/v1)
// Description:
//   An API to publish custom Android apps.
// Documentation:
//   https://developers.google.com/android/work/play/custom-app-api

#import "GTLRPlaycustomapp.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopePlaycustomappAndroidpublisher = @"https://www.googleapis.com/auth/androidpublisher";

// ----------------------------------------------------------------------------
//   GTLRPlaycustomappService
//

@implementation GTLRPlaycustomappService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://www.googleapis.com/";
    self.servicePath = @"playcustomapp/v1/accounts/";
    self.resumableUploadPath = @"resumable/upload/";
    self.simpleUploadPath = @"upload/";
    self.batchPath = @"batch/playcustomapp/v1";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
