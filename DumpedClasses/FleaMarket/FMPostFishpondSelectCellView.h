//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMPostFishpoolSelectView, NSString;

@interface FMPostFishpondSelectCellView : UITableViewCell <FMComponentCellProtocol>
{
    FMPostFishpoolSelectView *_selectView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMPostFishpoolSelectView *selectView; // @synthesize selectView=_selectView;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)fishpoolChanged:(id)arg1;
- (void)updateConstraints;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
