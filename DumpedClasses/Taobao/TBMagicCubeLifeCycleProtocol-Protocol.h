//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol TBMagicCubeLifeCycleProtocol <NSObject>
- (UIView *)getComponentView;
- (void)bindData:(id)arg1;

@optional
- (id)getData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload:(_Bool)arg1;
- (void)viewDidLoad:(_Bool)arg1;
@end

