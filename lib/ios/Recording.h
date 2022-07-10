#import <AVFoundation/AVFoundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>


@interface RCT_EXTERN_MODULE(Recording, RCTEventEmitter)

RCT_EXTERN_METHOD(startTranscribe
                 withResolver:(RCTPromiseResolveBlock)resolve
                 withRejecter:(RCTPromiseRejectBlock)reject)
RCT_EXTERN_METHOD(stopTranscribe)

@end
