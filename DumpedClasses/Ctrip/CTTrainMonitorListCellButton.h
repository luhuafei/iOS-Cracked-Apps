//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface CTTrainMonitorListCellButton : UIView
{
    int _cellButtonType;
    id <CTTrainMonitorListCellButtonDelegate> _delegate;
    UIView *_viewBackground;
    UIImageView *_imageViewBackground;
    UIView *_viewDark;
    UILabel *_labelTitle;
    UIButton *_bgButton;
}

@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIView *viewDark; // @synthesize viewDark=_viewDark;
@property(retain, nonatomic) UIImageView *imageViewBackground; // @synthesize imageViewBackground=_imageViewBackground;
@property(retain, nonatomic) UIView *viewBackground; // @synthesize viewBackground=_viewBackground;
@property(nonatomic) __weak id <CTTrainMonitorListCellButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=setCellButtonType:) int cellButtonType; // @synthesize cellButtonType=_cellButtonType;
- (void).cxx_destruct;
- (void)stopRotation;
- (void)startRotation;
- (void)setupButtonWithType:(int)arg1;
- (void)tappedAction;
- (id)initButtonWithFrame:(struct CGRect)arg1;

@end

