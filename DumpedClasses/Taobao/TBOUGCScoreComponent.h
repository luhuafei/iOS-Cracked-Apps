//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class UIButton;

@interface TBOUGCScoreComponent : TBOBaseUGCComponent
{
    long long maxRowNum;
    UIButton *_btnExpand;
}

+ (id)componentName;
@property(retain, nonatomic) UIButton *btnExpand; // @synthesize btnExpand=_btnExpand;
- (void).cxx_destruct;
- (void)setSubComponents:(id)arg1;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isValid;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (id)initWithContext:(id)arg1 parent:(id)arg2;
- (void)layoutSubviews;

@end
