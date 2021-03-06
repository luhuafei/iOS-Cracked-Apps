//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class QLSImageView, QLTailTextLabelView;

@interface QLImageTitleButtonV2 : UIControl
{
    double wholeTitleLength;
    double myContentLength;
    QLSImageView *correspondImage;
    QLTailTextLabelView *bottomTitleLabel;
    struct CGSize imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize;
@property(retain, nonatomic) QLTailTextLabelView *bottomTitleLabel; // @synthesize bottomTitleLabel;
@property(retain, nonatomic) QLSImageView *correspondImage; // @synthesize correspondImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, nonatomic, getter=getContentLength) double contentLength;
- (void)setTitleFont:(id)arg1 withTailTextFont:(id)arg2;
- (void)setTitleColor:(id)arg1 withTailTextColor:(id)arg2;
- (void)setTitle:(id)arg1 withTailText:(id)arg2 forState:(unsigned long long)arg3;
- (void)setVerticalGap:(double)arg1;
- (void)setImageURL:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

