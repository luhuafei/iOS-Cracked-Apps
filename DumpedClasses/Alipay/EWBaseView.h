//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EWBaseViewModel;

@interface EWBaseView : UIView
{
    EWBaseViewModel *_viewModel;
}

@property(retain, nonatomic) EWBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

