//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QQAsynUrlImageView, QQGroupRobotKeyItem, UIImageView, UILabel, UIView;

@interface QQGroupRobotKeywordCell : UICollectionViewCell
{
    UIImageView *_backgroundImageView;
    QQAsynUrlImageView *_iconView;
    UILabel *_textLabel;
    UIView *_maskView;
    QQGroupRobotKeyItem *_keyItem;
}

@property(retain, nonatomic) QQGroupRobotKeyItem *keyItem; // @synthesize keyItem=_keyItem;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

