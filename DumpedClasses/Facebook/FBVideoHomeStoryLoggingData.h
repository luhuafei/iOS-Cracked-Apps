//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBVideoHomeChannelLoggingData, NSArray, NSString;

@interface FBVideoHomeStoryLoggingData : FBValueObject <NSCopying>
{
    NSString *_storyID;
    NSArray *_trackingData;
    FBVideoHomeChannelLoggingData *_channelData;
}

@property(readonly, copy, nonatomic) FBVideoHomeChannelLoggingData *channelData; // @synthesize channelData=_channelData;
@property(readonly, copy, nonatomic) NSArray *trackingData; // @synthesize trackingData=_trackingData;
@property(readonly, copy, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void).cxx_destruct;
- (id)initWithStoryID:(id)arg1 trackingData:(id)arg2 channelData:(id)arg3;

@end

