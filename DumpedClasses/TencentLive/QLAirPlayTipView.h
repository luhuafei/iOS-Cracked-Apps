//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLSImageView, UILabel;

@interface QLAirPlayTipView : UIView
{
    QLSImageView *_topContainer;
    UILabel *_tipTextLbl;
    UIView *_tipView;
}

@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UILabel *tipTextLbl; // @synthesize tipTextLbl=_tipTextLbl;
@property(retain, nonatomic) QLSImageView *topContainer; // @synthesize topContainer=_topContainer;
- (void).cxx_destruct;
- (void)updateFrames:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

