//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelOrderCreateBaseViewController.h"

#import "CTHotelCouponDelelgate.h"
#import "CTHotelExtendOrderRoomCellDelegate.h"
#import "CTHotelOrderCreateFooterViewDelegate.h"
#import "CTNumericUpDownViewDelegate.h"

@class CTCommandHotelCtripTypeView, CTHotelOrderExtendCacheBean, NSMutableArray, NSString;

@interface CTHotelExtendOrderCreateViewController : CTHotelOrderCreateBaseViewController <CTNumericUpDownViewDelegate, CTHotelExtendOrderRoomCellDelegate, CTHotelOrderCreateFooterViewDelegate, CTHotelCouponDelelgate>
{
    CTHotelOrderExtendCacheBean *_cb;
    _Bool _firstLoad;
    _Bool _highLightContactTel;
    _Bool _highLightEmail;
    NSString *mSelectBtnTitle;
    _Bool _directLeave;
    NSMutableArray *_oldRoomSelectList;
    long long _oldNight;
    id <CTHotelOrderInfoViewControllerModifyOrderDelegate> _extendOrderDelegate;
    CTCommandHotelCtripTypeView *_typeView;
    long long _night;
}

@property(nonatomic) long long night; // @synthesize night=_night;
@property(retain, nonatomic) CTCommandHotelCtripTypeView *typeView; // @synthesize typeView=_typeView;
@property(nonatomic) __weak id <CTHotelOrderInfoViewControllerModifyOrderDelegate> extendOrderDelegate; // @synthesize extendOrderDelegate=_extendOrderDelegate;
- (void).cxx_destruct;
- (void)goToPayWidget;
- (void)goToOrderDetail;
- (void)didFinishSelectWithCouponsSelectorViewModel:(id)arg1 ItemModelType:(long long)arg2 viewController:(id)arg3;
- (void)cashToPrepayPressed;
- (void)helpButtonPressed;
- (void)checkCoupon:(id)arg1 Checked:(_Bool)arg2;
- (void)couponCellClicked;
- (void)invoiceCellClicked;
- (void)updateInvoice:(id)arg1;
- (double)couponCellHeight;
- (double)invoiceCellHeight;
- (id)couponCellWithTable:(id)arg1 indexPath:(id)arg2;
- (id)invoiceCellWithTable:(id)arg1 indexPath:(id)arg2;
- (id)getInvoiceAttributeText;
- (void)showRoomPriceDetail:(id)arg1;
- (void)updateCommitView;
- (void)updateHotelList;
- (void)restoreNightAndRoomSelect;
- (void)saveNightAndRoomSelect;
- (void)resetFooterView;
- (void)goToOrderDetailVersionB:(_Bool)arg1;
- (void)goToHotelOrderResult;
- (void)roomBookingCheck;
- (void)makeHotelOrder;
- (_Bool)checkInvocieEmpty:(id)arg1;
- (_Bool)checkCommitCondition;
- (void)commitButtonClicked:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmLeave:(int)arg1;
- (void)updateContactEmail:(id)arg1;
- (void)updateContactFg:(id)arg1;
- (void)updateContactTel:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 withRoom:(int)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 withRoom:(int)arg2;
- (void)room:(int)arg1 selected:(_Bool)arg2;
- (void)subPressed:(id)arg1;
- (void)addPressed:(id)arg1;
- (void)sendRoomBookingCheckFromOrderDetail;
- (void)updateViewData;
- (void)urlServiceSuccessCallBackWithBusinessCode:(id)arg1 subServiceCount:(unsigned long long)arg2;
- (void)urlServiceFailedCallBackWithBusinessCode:(id)arg1 errorCode:(int)arg2 errorInformation:(id)arg3;
- (void)doSelectFgClicked:(id)arg1;
- (id)emailCellWithTable:(id)arg1 indexPath:(id)arg2;
- (id)extendContactCellInTable:(id)arg1;
- (id)extendMaxRoomCellByIndex:(id)arg1;
- (double)heightForMaxRoomCell;
- (_Bool)roomCellDidSelectedInTable:(id)arg1 indexPath:(id)arg2;
- (id)extendRoomCellByIndex:(long long)arg1 inTable:(id)arg2;
- (id)extendNightCellInTable:(id)arg1;
- (id)extendNameCellInTable:(id)arg1;
- (double)heightForHotelNameCell;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectCellID:(int)arg2 indexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForCellID:(int)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForID:(int)arg2 indexPath:(id)arg3;
- (int)cellIDByIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (id)CT_PageId;
- (void)viewDidLoad;
- (void)initData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)backBarButtonClicked:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

