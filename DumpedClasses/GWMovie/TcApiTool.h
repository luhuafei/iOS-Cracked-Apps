//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TcApiTool : NSObject
{
}

+ (id)md5:(id)arg1;
+ (id)getAppDisplayName;
+ (id)systemVersionString;
+ (double)systemVersion;
+ (id)random16Str;
+ (int)NSString16toNSNumber:(id)arg1;
+ (id)decodeAccessToken:(id)arg1 key:(id)arg2;
+ (id)TCOSDKdeviceMachine:(id)arg1;
+ (id)SDKInfo;
+ (_Bool)isRegistSchemeInfoPlistFile:(id)arg1;
+ (id)getAppDefinePath;
+ (void)MoveWindowAnimation:(id)arg1 animationId:(int)arg2 rect:(struct CGRect)arg3 timeInterVal:(double)arg4 name:(id)arg5 context:(void *)arg6;
+ (id)GetURLWithParam:(id)arg1 withParam:(id)arg2;
+ (void)MoveAllWindowWithAnimationActionType:(int)arg1 windowArray:(id)arg2 animation:(_Bool)arg3;
+ (void)MoveAllWindowIntoScreen:(id)arg1 animation:(_Bool)arg2;
+ (void)MoveAllWindowOutOfScreen:(id)arg1 animation:(_Bool)arg2;
+ (struct CGRect)calcFrameByOrientation:(int)arg1 id:(id)arg2;

@end

