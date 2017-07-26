//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel, UISwitch;

@interface CTTrainOrderVipQiangPiaoCell : CTCustomeGroupTableViewCell
{
    _Bool _isShowSwitchValueControl;
    id <CTTrainOrderVipQiangPiaoCellDelegate> _delegate;
    NSString *_tagOfContent;
    UILabel *_labelTitle;
    UILabel *_labelSubtitle;
    UISwitch *_switchValue;
    UIButton *_buttonInfo;
    NSLayoutConstraint *_subtitleWidthConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *subtitleWidthConstraint; // @synthesize subtitleWidthConstraint=_subtitleWidthConstraint;
@property(retain, nonatomic) UIButton *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(retain, nonatomic) UISwitch *switchValue; // @synthesize switchValue=_switchValue;
@property(retain, nonatomic) UILabel *labelSubtitle; // @synthesize labelSubtitle=_labelSubtitle;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(nonatomic) _Bool isShowSwitchValueControl; // @synthesize isShowSwitchValueControl=_isShowSwitchValueControl;
@property(copy, nonatomic) NSString *tagOfContent; // @synthesize tagOfContent=_tagOfContent;
@property(nonatomic) __weak id <CTTrainOrderVipQiangPiaoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupContentWithTitle:(id)arg1 subTitle:(id)arg2 SwitchOn:(_Bool)arg3 needInfo:(_Bool)arg4;
- (void)onInfoButton:(id)arg1;
- (void)valueChangedWithSwitch:(id)arg1;
- (void)awakeFromNib;

@end
