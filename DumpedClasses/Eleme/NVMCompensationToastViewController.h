//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "NVMPresentationDelegate.h"

@class EODCancelOderCompensateRedEnvelop, NSString, NVMOrderSnapshot, UILabel;

@interface NVMCompensationToastViewController : NVMViewController <NVMPresentationDelegate>
{
    EODCancelOderCompensateRedEnvelop *_compensateRedEnvelop;
    NVMOrderSnapshot *_snapshot;
    CDUnknownBlockType _cancelAction;
    UILabel *_alertTitle;
    UILabel *_alertMessage;
}

@property(retain, nonatomic) UILabel *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) UILabel *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) NVMOrderSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) EODCancelOderCompensateRedEnvelop *compensateRedEnvelop; // @synthesize compensateRedEnvelop=_compensateRedEnvelop;
- (void).cxx_destruct;
- (void)animateAlongPresentation:(_Bool)arg1;
- (void)sendCompensateRedEnvelopRequest;
- (void)cancelButtonDidTap;
- (void)contactButtonDidTap;
- (void)closeButtonDidTap:(CDUnknownBlockType)arg1;
- (id)cancelOrderTrackParams;
- (id)safeRestaurantId;
- (id)messageDescription;
- (void)loadViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

