//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMXinSDKManager : NSObject
{
    unsigned long long _type;
    NSString *_resourceId;
}

+ (id)managerWithType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithXinType:(unsigned long long)arg1;
- (_Bool)sendImage:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)sendMediaMessageWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 url:(id)arg4 videoURL:(id)arg5 scene:(unsigned long long)arg6 object:(id)arg7;
- (_Bool)sendMediaMessageWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 url:(id)arg4 musicURL:(id)arg5 musicDataURL:(id)arg6 scene:(unsigned long long)arg7 prefilledText:(id)arg8 object:(id)arg9;
- (_Bool)sendMediaMessageWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 url:(id)arg4 musicURL:(id)arg5 musicDataURL:(id)arg6 scene:(unsigned long long)arg7 object:(id)arg8;
- (_Bool)sendMediaMessageWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 url:(id)arg4 scene:(unsigned long long)arg5 object:(id)arg6;
- (_Bool)sendTextMessage:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)sendNewsContent:(id)arg1 coverImage:(id)arg2 scene:(unsigned long long)arg3;
- (_Bool)sendVideoContent:(id)arg1 coverImage:(id)arg2 scene:(unsigned long long)arg3;
- (void)doSendMusicContent:(id)arg1 coverImage:(id)arg2 scene:(unsigned long long)arg3 prefix:(id)arg4;
- (_Bool)sendMusicContent:(id)arg1 coverImage:(id)arg2 scene:(unsigned long long)arg3 prefix:(id)arg4;
- (_Bool)sendResource:(id)arg1 coverImage:(id)arg2 scene:(unsigned long long)arg3 prefix:(id)arg4;
- (_Bool)isSupportingAPI;
- (_Bool)isInstalled;

@end

