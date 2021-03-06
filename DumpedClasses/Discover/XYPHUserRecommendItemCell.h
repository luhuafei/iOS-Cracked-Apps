//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, XYFollowButton;

@interface XYPHUserRecommendItemCell : UICollectionViewCell
{
    UIImageView *_portraitImage;
    UILabel *_userNameLabel;
    UILabel *_userRecommendInfoLabel;
    XYFollowButton *_followButton;
    CDUnknownBlockType _followButtonClick;
}

@property(copy, nonatomic) CDUnknownBlockType followButtonClick; // @synthesize followButtonClick=_followButtonClick;
@property(retain, nonatomic) XYFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *userRecommendInfoLabel; // @synthesize userRecommendInfoLabel=_userRecommendInfoLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *portraitImage; // @synthesize portraitImage=_portraitImage;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)followButtonEvent;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

