//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class GWV6MessageMemer, NSString, UIImage;

@interface GWNMessageModel : GWObject
{
    NSString *_optType;
    NSString *_sender;
    NSString *_content;
    NSString *_title;
    NSString *_category;
    NSString *_sendTimes;
    NSString *_messageID;
    NSString *_releaseURL;
    NSString *_tag;
    NSString *_releaseIDType;
    NSString *_read;
    NSString *_releaseID;
    NSString *_type;
    NSString *_jumpid;
    NSString *_releaseExt;
    GWV6MessageMemer *_member;
    NSString *_timeText;
    UIImage *_downedImage;
}

@property(retain, nonatomic) UIImage *downedImage; // @synthesize downedImage=_downedImage;
@property(retain, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(retain, nonatomic) GWV6MessageMemer *member; // @synthesize member=_member;
@property(copy, nonatomic) NSString *releaseExt; // @synthesize releaseExt=_releaseExt;
@property(copy, nonatomic) NSString *jumpid; // @synthesize jumpid=_jumpid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *releaseID; // @synthesize releaseID=_releaseID;
@property(copy, nonatomic) NSString *read; // @synthesize read=_read;
@property(copy, nonatomic) NSString *releaseIDType; // @synthesize releaseIDType=_releaseIDType;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *releaseURL; // @synthesize releaseURL=_releaseURL;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSString *sendTimes; // @synthesize sendTimes=_sendTimes;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *optType; // @synthesize optType=_optType;
- (void).cxx_destruct;
- (_Bool)hasRead;
- (id)commentid;
- (id)recommentid;

@end

