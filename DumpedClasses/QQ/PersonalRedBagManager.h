//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FNImageMgr, NSObject<OS_dispatch_queue>;

@interface PersonalRedBagManager : NSObject
{
    FNImageMgr *_fnImageMgr;
    NSObject<OS_dispatch_queue> *_imageQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)redBagStoreURL:(long long)arg1;
- (_Bool)getRedBagImage:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)addImageview:(id)arg1 toImage:(id)arg2 withBgId:(id)arg3 withType:(long long)arg4;
- (id)getRedBagImageInfo:(id)arg1 aiocompletion:(CDUnknownBlockType)arg2 cftcompletion:(CDUnknownBlockType)arg3 sendcompletion:(CDUnknownBlockType)arg4;
- (id)getRedBagImageInfo:(id)arg1 aiocompletion:(CDUnknownBlockType)arg2 cftcompletion:(CDUnknownBlockType)arg3;
- (int)checkBgImageExit:(id)arg1;
- (_Bool)needShowRedBag;
- (_Bool)showRedBag;
- (_Bool)showRedBagStoreEntry;
- (id)getUsingRedEnvelopeInfo;
- (_Bool)redBagAuthorized;
- (_Bool)redBagDisabled;
- (void)dealloc;
- (id)init;

@end

