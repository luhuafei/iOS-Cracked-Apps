//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQShareWeChatNotificationCenter : NSObject
{
    id <QQShareWeChatNotificationDelegate> _wechatDelegate;
}

+ (id)getInstance;
@property(nonatomic) id <QQShareWeChatNotificationDelegate> wechatDelegate; // @synthesize wechatDelegate=_wechatDelegate;
- (void)dealloc;
- (void)clearDelegate:(id)arg1;
- (void)onWeChatResp:(id)arg1;
- (id)init;

@end

