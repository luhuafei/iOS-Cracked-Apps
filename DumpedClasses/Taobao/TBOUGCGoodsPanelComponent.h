//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class TBIMShareItemObject, UIImageView, UILabel, UIView;

@interface TBOUGCGoodsPanelComponent : TBOBaseUGCComponent
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIView *_moreView;
    TBIMShareItemObject *_curItem;
}

+ (id)componentName;
@property(retain, nonatomic) TBIMShareItemObject *curItem; // @synthesize curItem=_curItem;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isModify;
- (void)doActionWithCompleted:(CDUnknownBlockType)arg1;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end
