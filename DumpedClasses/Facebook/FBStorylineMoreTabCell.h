//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBFourRoundedCornerView, NSString, UIImage, UIImageView, UILabel, UIView;

@interface FBStorylineMoreTabCell : UICollectionViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    FBFourRoundedCornerView *_backgroundRoundedCornerView;
    UIView *_iconContainerView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *iconImage;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

