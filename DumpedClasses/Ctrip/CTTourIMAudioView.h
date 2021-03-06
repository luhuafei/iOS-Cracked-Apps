//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTChatMessage, NSArray, UIButton, UIImageView, UILabel;

@interface CTTourIMAudioView : UIView
{
    NSArray *_audioPicArray;
    UIButton *_backgroundBtn;
    CTChatMessage *_audioMessage;
    UIImageView *_audioImageView;
    UILabel *_timeLabel;
    UIView *_unreadIcon;
    long long _audioDirection;
}

@property(nonatomic) long long audioDirection; // @synthesize audioDirection=_audioDirection;
@property(retain, nonatomic) UIView *unreadIcon; // @synthesize unreadIcon=_unreadIcon;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *audioImageView; // @synthesize audioImageView=_audioImageView;
@property(retain, nonatomic) CTChatMessage *audioMessage; // @synthesize audioMessage=_audioMessage;
@property(retain, nonatomic) UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
- (void).cxx_destruct;
- (void)audioMessageHasRead:(_Bool)arg1;
- (void)audioStopAnimation;
- (void)audioStartAnimation;
- (void)layoutSubviews;
- (void)setAudioPictAnimation;
- (void)initUI;
- (id)initAudioViewWithType:(long long)arg1;

@end

