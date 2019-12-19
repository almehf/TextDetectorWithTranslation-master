// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Abusive Experience Report API (abusiveexperiencereport/v1)
// Description:
//   Views Abusive Experience Report data, and gets a list of sites that have a
//   significant number of abusive experiences.
// Documentation:
//   https://developers.google.com/abusive-experience-report/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAbusiveExperienceReport_SiteSummaryResponse;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRAbusiveExperienceReport_SiteSummaryResponse.abusiveStatus

/**
 *  Failing.
 *
 *  Value: "FAILING"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_AbusiveStatus_Failing;
/**
 *  Passing.
 *
 *  Value: "PASSING"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_AbusiveStatus_Passing;
/**
 *  Not reviewed.
 *
 *  Value: "UNKNOWN"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_AbusiveStatus_Unknown;

// ----------------------------------------------------------------------------
// GTLRAbusiveExperienceReport_SiteSummaryResponse.filterStatus

/**
 *  Ad filtering is off.
 *
 *  Value: "OFF"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Off;
/**
 *  Ad filtering is on.
 *
 *  Value: "ON"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_On;
/**
 *  Ad filtering is paused.
 *
 *  Value: "PAUSED"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Paused;
/**
 *  Ad filtering is pending.
 *
 *  Value: "PENDING"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Pending;
/**
 *  N/A.
 *
 *  Value: "UNKNOWN"
 */
GTLR_EXTERN NSString * const kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Unknown;

/**
 *  Response message for GetSiteSummary.
 */
@interface GTLRAbusiveExperienceReport_SiteSummaryResponse : GTLRObject

/**
 *  The status of the site reviewed for the abusive experiences.
 *
 *  Likely values:
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_AbusiveStatus_Failing
 *        Failing. (Value: "FAILING")
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_AbusiveStatus_Passing
 *        Passing. (Value: "PASSING")
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_AbusiveStatus_Unknown
 *        Not reviewed. (Value: "UNKNOWN")
 */
@property(nonatomic, copy, nullable) NSString *abusiveStatus;

/** The time at which enforcement begins. */
@property(nonatomic, strong, nullable) GTLRDateTime *enforcementTime;

/**
 *  The abusive experience enforcement status of the site.
 *
 *  Likely values:
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Off
 *        Ad filtering is off. (Value: "OFF")
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_On
 *        Ad filtering is on. (Value: "ON")
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Paused
 *        Ad filtering is paused. (Value: "PAUSED")
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Pending
 *        Ad filtering is pending. (Value: "PENDING")
 *    @arg @c kGTLRAbusiveExperienceReport_SiteSummaryResponse_FilterStatus_Unknown
 *        N/A. (Value: "UNKNOWN")
 */
@property(nonatomic, copy, nullable) NSString *filterStatus;

/** The last time that the site changed status. */
@property(nonatomic, strong, nullable) GTLRDateTime *lastChangeTime;

/** A link that leads to a full abusive experience report. */
@property(nonatomic, copy, nullable) NSString *reportUrl;

/** The name of the site reviewed. */
@property(nonatomic, copy, nullable) NSString *reviewedSite;

/**
 *  Whether the site is currently under review.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *underReview;

@end


/**
 *  Response message for ListViolatingSites.
 */
@interface GTLRAbusiveExperienceReport_ViolatingSitesResponse : GTLRObject

/** A list of summaries of violating sites. */
@property(nonatomic, strong, nullable) NSArray<GTLRAbusiveExperienceReport_SiteSummaryResponse *> *violatingSites;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
