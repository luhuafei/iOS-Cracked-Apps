//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface VZBarrageChannel : NSObject
{
    long long _state;
    unsigned long long _channelIndex;
    long long _sequence;
    NSMutableArray *_channelViews;
}

@property(retain, nonatomic) NSMutableArray *channelViews; // @synthesize channelViews=_channelViews;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)allActiveViews;
- (id)activeView;
- (void)removeAllViews;
- (void)removeBarrageChannelView:(id)arg1;
- (void)addBarrageChannelView:(id)arg1;
- (id)init;

@end

