//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface DGPTransitPullView : UIView
{
    CDUnknownBlockType _chooseBtnClickBlock;
    CDUnknownBlockType _startBtnClickBlock;
    UILabel *_startTimeLabel;
}

@property(retain, nonatomic) UILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(copy, nonatomic) CDUnknownBlockType startBtnClickBlock; // @synthesize startBtnClickBlock=_startBtnClickBlock;
@property(copy, nonatomic) CDUnknownBlockType chooseBtnClickBlock; // @synthesize chooseBtnClickBlock=_chooseBtnClickBlock;
- (void).cxx_destruct;
- (void)updateTimeLabelWithNsdate:(id)arg1;
- (void)startBtnClick;
- (void)chooseBtnClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

