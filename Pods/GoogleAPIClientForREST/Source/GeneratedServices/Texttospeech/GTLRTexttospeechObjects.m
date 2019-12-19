// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Text-to-Speech API (texttospeech/v1)
// Description:
//   Synthesizes natural-sounding speech by applying powerful neural network
//   models.
// Documentation:
//   https://cloud.google.com/text-to-speech/

#import "GTLRTexttospeechObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRTexttospeech_AudioConfig.audioEncoding
NSString * const kGTLRTexttospeech_AudioConfig_AudioEncoding_AudioEncodingUnspecified = @"AUDIO_ENCODING_UNSPECIFIED";
NSString * const kGTLRTexttospeech_AudioConfig_AudioEncoding_Linear16 = @"LINEAR16";
NSString * const kGTLRTexttospeech_AudioConfig_AudioEncoding_Mp3 = @"MP3";
NSString * const kGTLRTexttospeech_AudioConfig_AudioEncoding_OggOpus = @"OGG_OPUS";

// GTLRTexttospeech_Voice.ssmlGender
NSString * const kGTLRTexttospeech_Voice_SsmlGender_Female     = @"FEMALE";
NSString * const kGTLRTexttospeech_Voice_SsmlGender_Male       = @"MALE";
NSString * const kGTLRTexttospeech_Voice_SsmlGender_Neutral    = @"NEUTRAL";
NSString * const kGTLRTexttospeech_Voice_SsmlGender_SsmlVoiceGenderUnspecified = @"SSML_VOICE_GENDER_UNSPECIFIED";

// GTLRTexttospeech_VoiceSelectionParams.ssmlGender
NSString * const kGTLRTexttospeech_VoiceSelectionParams_SsmlGender_Female = @"FEMALE";
NSString * const kGTLRTexttospeech_VoiceSelectionParams_SsmlGender_Male = @"MALE";
NSString * const kGTLRTexttospeech_VoiceSelectionParams_SsmlGender_Neutral = @"NEUTRAL";
NSString * const kGTLRTexttospeech_VoiceSelectionParams_SsmlGender_SsmlVoiceGenderUnspecified = @"SSML_VOICE_GENDER_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRTexttospeech_AudioConfig
//

@implementation GTLRTexttospeech_AudioConfig
@dynamic audioEncoding, effectsProfileId, pitch, sampleRateHertz, speakingRate,
         volumeGainDb;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"effectsProfileId" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTexttospeech_ListVoicesResponse
//

@implementation GTLRTexttospeech_ListVoicesResponse
@dynamic voices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"voices" : [GTLRTexttospeech_Voice class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTexttospeech_SynthesisInput
//

@implementation GTLRTexttospeech_SynthesisInput
@dynamic ssml, text;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTexttospeech_SynthesizeSpeechRequest
//

@implementation GTLRTexttospeech_SynthesizeSpeechRequest
@dynamic audioConfig, input, voice;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTexttospeech_SynthesizeSpeechResponse
//

@implementation GTLRTexttospeech_SynthesizeSpeechResponse
@dynamic audioContent;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTexttospeech_Voice
//

@implementation GTLRTexttospeech_Voice
@dynamic languageCodes, name, naturalSampleRateHertz, ssmlGender;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"languageCodes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTexttospeech_VoiceSelectionParams
//

@implementation GTLRTexttospeech_VoiceSelectionParams
@dynamic languageCode, name, ssmlGender;
@end
