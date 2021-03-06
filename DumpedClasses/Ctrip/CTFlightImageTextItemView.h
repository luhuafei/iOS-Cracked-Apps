//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTFlightImageView, NSLayoutConstraint, UIColor, UILabel;

@interface CTFlightImageTextItemView : UIView
{
    UIColor *_textColor;
    CTFlightImageView *_imageView;
    UILabel *_lbText;
    double _fontSize;
    NSLayoutConstraint *_cnsImageWidth;
    NSLayoutConstraint *_cnsImageHeight;
    NSLayoutConstraint *_cnsImageTopY;
    NSLayoutConstraint *_cnsTextLeading;
    NSLayoutConstraint *_cnsViewWidth;
    double _imageWidth;
    double _textToImageX;
}

+ (double)heightForText:(id)arg1 fontSize:(double)arg2 viewWidth:(double)arg3 imageWidth:(double)arg4 textToImageX:(double)arg5;
@property(nonatomic) double textToImageX; // @synthesize textToImageX=_textToImageX;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnsViewWidth; // @synthesize cnsViewWidth=_cnsViewWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnsTextLeading; // @synthesize cnsTextLeading=_cnsTextLeading;
@property(nonatomic) __weak NSLayoutConstraint *cnsImageTopY; // @synthesize cnsImageTopY=_cnsImageTopY;
@property(nonatomic) __weak NSLayoutConstraint *cnsImageHeight; // @synthesize cnsImageHeight=_cnsImageHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnsImageWidth; // @synthesize cnsImageWidth=_cnsImageWidth;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) __weak UILabel *lbText; // @synthesize lbText=_lbText;
@property(nonatomic) __weak CTFlightImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (double)updateView:(id)arg1 text:(id)arg2 superView:(id)arg3 viewWidth:(double)arg4 viewX:(double)arg5 viewY:(double)arg6;
- (void)addToSuperView:(id)arg1 fontSize:(double)arg2 imageSize:(struct CGSize)arg3 imageTop:(double)arg4 textToImageX:(double)arg5;

@end

