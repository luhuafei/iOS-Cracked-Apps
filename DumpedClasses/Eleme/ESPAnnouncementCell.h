//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface ESPAnnouncementCell : UICollectionViewCell
{
    NSString *_data;
    CDUnknownBlockType _closeAnnouncementAction;
    UIImageView *_announcementIcon;
    UILabel *_contentLabel;
    UIButton *_closeButton;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *announcementIcon; // @synthesize announcementIcon=_announcementIcon;
@property(copy, nonatomic) CDUnknownBlockType closeAnnouncementAction; // @synthesize closeAnnouncementAction=_closeAnnouncementAction;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)didPressClose;
- (id)initWithFrame:(struct CGRect)arg1;

@end

