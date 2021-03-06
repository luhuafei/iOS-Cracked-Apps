//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TADAutoCodingCopyingObject.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, TADDP3ReportItem, TADShareItem;

@interface TADItemInfo : TADAutoCodingCopyingObject
{
    TADShareItem *_uncodableShareItem;
    NSString *_uoid;
    NSString *_channel;
    NSString *_oid;
    NSString *_cid;
    NSString *_style_id;
    NSString *_type;
    NSString *_iconStr;
    NSString *_dspName;
    NSString *_articleSource;
    NSString *_navTitle;
    NSString *_thumbnail;
    NSString *_abstract;
    NSString *_newsId;
    NSString *_picUrl;
    NSString *_vid;
    NSString *_h5Url;
    NSNumber *_h5Timelife;
    NSString *_contentSize;
    NSString *_text;
    NSString *_title;
    NSNumber *_seq;
    NSNumber *_sec;
    NSNumber *_flowDirection;
    NSString *_validTime;
    NSString *_status;
    NSNumber *_pageViews;
    NSNumber *_pvLimit;
    NSNumber *_pvFcs;
    NSNumber *_isEmpty;
    NSArray *_viewPing;
    NSArray *_clickPing;
    NSArray *_apiReportUrls;
    NSArray *_sdkReportUrls;
    NSArray *_clickReportUrls;
    NSArray *_videoStatusReportUrls;
    NSString *_location;
    NSNumber *_ratio;
    NSNumber *_playCount;
    NSString *_landPageType;
    NSString *_md5;
    NSNumber *_volume;
    NSDictionary *_creativeConfig;
    NSNumber *_video_margin;
    NSNumber *_video_cover_width;
    NSNumber *_videoTimelife;
    NSNumber *_videoSize;
    NSString *_videoUrl;
    NSNumber *_soundOn;
    NSNumber *_soundRate;
    NSNumber *_isShareCustom;
    NSString *_shareLogoURLStr;
    NSString *_shareTitle;
    NSString *_shareAbstract;
    NSString *_shareURLStr;
    NSNumber *_subType;
    TADDP3ReportItem *_reportItem;
    NSNumber *_index;
    NSString *_soid;
    NSString *_serverData;
    NSString *_clickData;
    NSString *_pingData;
    NSString *_pvType;
    NSNumber *_imagew;
    NSNumber *_imageh;
    NSNumber *_unliked;
    NSString *_showUnlikeBtn;
    NSString *_vCommentCount;
    NSString *_vPlayCount;
    NSString *_vPlayDuration;
    NSDictionary *_creativePlugin;
    NSNumber *_isPlayed;
    NSNumber *_itunes_download;
    NSNumber *_act_type;
    NSString *_downloadIcon;
    NSString *_url_ios;
    NSNumber *_margin;
    NSDate *_createdAt;
    NSDictionary *_openAppInfo;
    NSNumber *_orderType;
    NSNumber *_fullscreenClick;
    NSNumber *_orderStatusPing;
    NSNumber *_orderStatusClick;
    NSNumber *_anewScheme;
}

+ (id)vCommentCountFromNumber:(id)arg1;
+ (id)vPlayCountFromNumber:(id)arg1;
+ (id)vDurationFromNumber:(id)arg1;
+ (id)emptyItemWithOrderId:(id)arg1 locationId:(id)arg2;
+ (id)itemWithAdInfo:(id)arg1;
@property(retain, nonatomic) NSNumber *anewScheme; // @synthesize anewScheme=_anewScheme;
@property(retain, nonatomic) NSNumber *orderStatusClick; // @synthesize orderStatusClick=_orderStatusClick;
@property(retain, nonatomic) NSNumber *orderStatusPing; // @synthesize orderStatusPing=_orderStatusPing;
@property(retain, nonatomic) NSNumber *fullscreenClick; // @synthesize fullscreenClick=_fullscreenClick;
@property(retain, nonatomic) NSNumber *orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSDictionary *openAppInfo; // @synthesize openAppInfo=_openAppInfo;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSNumber *margin; // @synthesize margin=_margin;
@property(copy, nonatomic) NSString *url_ios; // @synthesize url_ios=_url_ios;
@property(copy, nonatomic) NSString *downloadIcon; // @synthesize downloadIcon=_downloadIcon;
@property(retain, nonatomic) NSNumber *act_type; // @synthesize act_type=_act_type;
@property(retain, nonatomic) NSNumber *itunes_download; // @synthesize itunes_download=_itunes_download;
@property(retain, nonatomic) NSNumber *isPlayed; // @synthesize isPlayed=_isPlayed;
@property(retain, nonatomic) NSDictionary *creativePlugin; // @synthesize creativePlugin=_creativePlugin;
@property(copy, nonatomic) NSString *vPlayDuration; // @synthesize vPlayDuration=_vPlayDuration;
@property(copy, nonatomic) NSString *vPlayCount; // @synthesize vPlayCount=_vPlayCount;
@property(copy, nonatomic) NSString *vCommentCount; // @synthesize vCommentCount=_vCommentCount;
@property(copy, nonatomic) NSString *showUnlikeBtn; // @synthesize showUnlikeBtn=_showUnlikeBtn;
@property(retain, nonatomic) NSNumber *unliked; // @synthesize unliked=_unliked;
@property(retain, nonatomic) NSNumber *imageh; // @synthesize imageh=_imageh;
@property(retain, nonatomic) NSNumber *imagew; // @synthesize imagew=_imagew;
@property(copy, nonatomic) NSString *pvType; // @synthesize pvType=_pvType;
@property(copy, nonatomic) NSString *pingData; // @synthesize pingData=_pingData;
@property(copy, nonatomic) NSString *clickData; // @synthesize clickData=_clickData;
@property(copy, nonatomic) NSString *serverData; // @synthesize serverData=_serverData;
@property(copy, nonatomic) NSString *soid; // @synthesize soid=_soid;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(retain, nonatomic) TADDP3ReportItem *reportItem; // @synthesize reportItem=_reportItem;
@property(retain, nonatomic) NSNumber *subType; // @synthesize subType=_subType;
@property(copy, nonatomic) NSString *shareURLStr; // @synthesize shareURLStr=_shareURLStr;
@property(copy, nonatomic) NSString *shareAbstract; // @synthesize shareAbstract=_shareAbstract;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareLogoURLStr; // @synthesize shareLogoURLStr=_shareLogoURLStr;
@property(retain, nonatomic) NSNumber *isShareCustom; // @synthesize isShareCustom=_isShareCustom;
@property(retain, nonatomic) NSNumber *soundRate; // @synthesize soundRate=_soundRate;
@property(retain, nonatomic) NSNumber *soundOn; // @synthesize soundOn=_soundOn;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSNumber *videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSNumber *videoTimelife; // @synthesize videoTimelife=_videoTimelife;
@property(retain, nonatomic) NSNumber *video_cover_width; // @synthesize video_cover_width=_video_cover_width;
@property(retain, nonatomic) NSNumber *video_margin; // @synthesize video_margin=_video_margin;
@property(retain, nonatomic) NSDictionary *creativeConfig; // @synthesize creativeConfig=_creativeConfig;
@property(copy, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *landPageType; // @synthesize landPageType=_landPageType;
@property(copy, nonatomic) NSNumber *playCount; // @synthesize playCount=_playCount;
@property(copy, nonatomic) NSNumber *ratio; // @synthesize ratio=_ratio;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *videoStatusReportUrls; // @synthesize videoStatusReportUrls=_videoStatusReportUrls;
@property(retain, nonatomic) NSArray *clickReportUrls; // @synthesize clickReportUrls=_clickReportUrls;
@property(retain, nonatomic) NSArray *sdkReportUrls; // @synthesize sdkReportUrls=_sdkReportUrls;
@property(retain, nonatomic) NSArray *apiReportUrls; // @synthesize apiReportUrls=_apiReportUrls;
@property(retain, nonatomic) NSArray *clickPing; // @synthesize clickPing=_clickPing;
@property(retain, nonatomic) NSArray *viewPing; // @synthesize viewPing=_viewPing;
@property(copy, nonatomic) NSNumber *isEmpty; // @synthesize isEmpty=_isEmpty;
@property(copy, nonatomic) NSNumber *pvFcs; // @synthesize pvFcs=_pvFcs;
@property(copy, nonatomic) NSNumber *pvLimit; // @synthesize pvLimit=_pvLimit;
@property(copy, nonatomic) NSNumber *pageViews; // @synthesize pageViews=_pageViews;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *validTime; // @synthesize validTime=_validTime;
@property(retain, nonatomic) NSNumber *flowDirection; // @synthesize flowDirection=_flowDirection;
@property(copy, nonatomic) NSNumber *sec; // @synthesize sec=_sec;
@property(copy, nonatomic) NSNumber *seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSNumber *h5Timelife; // @synthesize h5Timelife=_h5Timelife;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *newsId; // @synthesize newsId=_newsId;
@property(copy, nonatomic) NSString *abstract; // @synthesize abstract=_abstract;
@property(copy, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSString *articleSource; // @synthesize articleSource=_articleSource;
@property(copy, nonatomic) NSString *dspName; // @synthesize dspName=_dspName;
@property(copy, nonatomic) NSString *iconStr; // @synthesize iconStr=_iconStr;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *style_id; // @synthesize style_id=_style_id;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *uoid; // @synthesize uoid=_uoid;
@property(retain, nonatomic) TADShareItem *shareItem; // @synthesize shareItem=_uncodableShareItem;
- (void).cxx_destruct;
- (double)imageRatio;
- (_Bool)isShouldBeRemoved;
- (_Bool)isFullscreenClickOrder;
- (_Bool)isCPDOrder;
- (_Bool)isOpenAppAd;
- (_Bool)isNativeVideoLink;
- (_Bool)isAppDownloadAd;
- (_Bool)imageIsCached;
- (_Bool)dateIsValid;
- (_Bool)limitIsReached;
- (_Bool)isEqual:(id)arg1;
- (id)itemInfoForOther;
- (id)dateString;

@end

