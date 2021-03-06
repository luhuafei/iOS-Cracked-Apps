//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMLyricShareLogRequest, NMShortUrlToSinaRequest, NSData, NSString;

@interface NMWeiboSDKManager : NSObject
{
    NMLyricShareLogRequest *_lyricShareLogRequest;
    NMShortUrlToSinaRequest *_shortUrlRequest;
    _Bool _needShowAccount;
    NSData *_sharingImageData;
    NSString *_shareResourceUrl;
    NSString *_sharingMessage;
    id _resource;
}

+ (id)defaultManager;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSString *sharingMessage; // @synthesize sharingMessage=_sharingMessage;
@property(retain, nonatomic) NSString *shareResourceUrl; // @synthesize shareResourceUrl=_shareResourceUrl;
@property(retain, nonatomic) NSData *sharingImageData; // @synthesize sharingImageData=_sharingImageData;
- (void).cxx_destruct;
- (_Bool)canShareToWeibo;
- (id)formatSharingMessage:(id)arg1;
- (void)shareToWeiboWithShortUrl:(id)arg1;
- (void)generateShortShareUrl;
- (_Bool)eventShareToWeiboNeedPic:(id)arg1;
- (void)setResource:(id)arg1 withSharingText:(id)arg2 withImageData:(id)arg3;
- (void)shareWithResource:(id)arg1 withSharingText:(id)arg2 withImageData:(id)arg3;
- (void)shareWithResource:(id)arg1 withSharingText:(id)arg2;
- (void)shareWithResource:(id)arg1;
- (void)shareWithImageUrl:(id)arg1 withMessage:(id)arg2 withUrl:(id)arg3 withShowAccount:(_Bool)arg4;
- (void)shareWithImage:(id)arg1 withMessage:(id)arg2 withUrl:(id)arg3 withShowAccount:(_Bool)arg4;

@end

