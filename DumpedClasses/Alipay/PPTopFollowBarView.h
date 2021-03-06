//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AUButton, UIButton, UIImageView, UILabel;

@interface PPTopFollowBarView : UIView
{
    UIImageView *_imageView;
    AUButton *_followButton;
    UIButton *_gotoButton;
    UIView *_lineView;
    id <PPTopFollowBarViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PPTopFollowBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapGesutreTriggered:(id)arg1;
- (void)gotoButtonClicked:(id)arg1;
- (void)followButtonClicked:(id)arg1;
- (void)setButtonLoading:(_Bool)arg1;
- (void)setFollowed:(_Bool)arg1;
- (void)setImageUrl:(id)arg1;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

