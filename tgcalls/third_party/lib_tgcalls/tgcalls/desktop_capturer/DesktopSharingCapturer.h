#ifndef SCREEN_CAPTURER_H
#define SCREEN_CAPTURER_H
#ifndef WEBRTC_IOS
#import <Foundation/Foundation.h>


#import "api/video/video_sink_interface.h"
#import "api/media_stream_interface.h"
#import "rtc_base/time_utils.h"

#import "api/video/video_sink_interface.h"
#import "api/media_stream_interface.h"

#import "sdk/objc/native/src/objc_video_track_source.h"
#import "sdk/objc/native/src/objc_frame_buffer.h"
#import "api/video_track_source_proxy.h"
#import "platform/darwin/VideoCameraCapturerMac.h"


@interface DesktopSharingCapturer : NSObject<CapturerInterface>
- (instancetype)initWithSource:(rtc::scoped_refptr<webrtc::VideoTrackSourceInterface>)source capturerKey:(NSString *)capturerKey;

@end


#endif //WEBRTC_IOS
#endif
