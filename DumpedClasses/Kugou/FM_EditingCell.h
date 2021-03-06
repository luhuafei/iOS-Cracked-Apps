//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, UIButton, UILabel;

@interface FM_EditingCell : UITableViewCell
{
    UIButton *checkbox;
    UILabel *title;
    UILabel *countLabel;
    UIButton *cancelBtn;
    CALayer *cancelLayer;
    CALayer *footline;
    id <FMEditingCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FMEditingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (_Bool)checkboxIsSelected;
- (void)setCheckBoxSelected:(_Bool)arg1;
- (void)setNumberOfSelect:(long long)arg1;
- (void)checkboxClick:(id)arg1;
- (void)cancelBtnClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

