//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMFunRecommendItemDO, UILabel;

@interface FMFunSimilarCardMoreView : UIView
{
    FMFunRecommendItemDO *_itemDO;
    UILabel *_numLabel;
    UILabel *_noteLabel;
}

@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) FMFunRecommendItemDO *itemDO; // @synthesize itemDO=_itemDO;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

