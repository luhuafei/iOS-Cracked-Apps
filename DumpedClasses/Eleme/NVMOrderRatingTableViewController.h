//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NVMOrderRateFoodPhotoCell, NVMOrderRating, NVMOrderRatingFoldCell, NVMOrderRatingRecordCell, NVMOrderRestaurantCell, NVMPickerViewController, NVMRateFoldFoodCell, NVMRateRiderCell, NVMRateServiceCell, NVMRateSpeedCell, NVMRatingEditCell, NVMTableView, NVMTableViewCell;

@interface NVMOrderRatingTableViewController : NVMViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasRated;
    _Bool _hasUnfoldFoods;
    _Bool _hasUnfoldRecord;
    _Bool _keyboardOn;
    CDUnknownBlockType _didSuccessEdit;
    NVMOrderRating *_orderRating;
    NSArray *_ratedOrderItems;
    NSArray *_unratedOrderItems;
    NVMPickerViewController *_timePicker;
    NSString *_orderId;
    NVMTableView *_tableView;
    NSArray *_tableData;
    NSArray *_ratedFoodCellsArray;
    NSArray *_unratedFoodCellsArray;
    NVMRateServiceCell *_orderServiceCell;
    NVMRateRiderCell *_rateRiderCell;
    NVMOrderRestaurantCell *_orderRestaurantCell;
    NVMRateSpeedCell *_speedCell;
    NVMRateFoldFoodCell *_foldFoodCell;
    NVMOrderRatingFoldCell *_foldCell;
    NVMTableViewCell *_favorCell;
    NVMRatingEditCell *_editCell;
    NVMOrderRatingRecordCell *_recordCell;
    NVMOrderRateFoodPhotoCell *_photosCell;
    NSArray *_ratableTags;
    struct UIEdgeInsets _tableViewOriginalInset;
}

@property(copy, nonatomic) NSArray *ratableTags; // @synthesize ratableTags=_ratableTags;
@property(nonatomic) _Bool keyboardOn; // @synthesize keyboardOn=_keyboardOn;
@property(nonatomic) _Bool hasUnfoldRecord; // @synthesize hasUnfoldRecord=_hasUnfoldRecord;
@property(nonatomic) _Bool hasUnfoldFoods; // @synthesize hasUnfoldFoods=_hasUnfoldFoods;
@property(nonatomic) _Bool hasRated; // @synthesize hasRated=_hasRated;
@property(retain, nonatomic) NVMOrderRateFoodPhotoCell *photosCell; // @synthesize photosCell=_photosCell;
@property(retain, nonatomic) NVMOrderRatingRecordCell *recordCell; // @synthesize recordCell=_recordCell;
@property(retain, nonatomic) NVMRatingEditCell *editCell; // @synthesize editCell=_editCell;
@property(retain, nonatomic) NVMTableViewCell *favorCell; // @synthesize favorCell=_favorCell;
@property(retain, nonatomic) NVMOrderRatingFoldCell *foldCell; // @synthesize foldCell=_foldCell;
@property(retain, nonatomic) NVMRateFoldFoodCell *foldFoodCell; // @synthesize foldFoodCell=_foldFoodCell;
@property(retain, nonatomic) NVMRateSpeedCell *speedCell; // @synthesize speedCell=_speedCell;
@property(retain, nonatomic) NVMOrderRestaurantCell *orderRestaurantCell; // @synthesize orderRestaurantCell=_orderRestaurantCell;
@property(retain, nonatomic) NVMRateRiderCell *rateRiderCell; // @synthesize rateRiderCell=_rateRiderCell;
@property(retain, nonatomic) NVMRateServiceCell *orderServiceCell; // @synthesize orderServiceCell=_orderServiceCell;
@property(retain, nonatomic) NSArray *unratedFoodCellsArray; // @synthesize unratedFoodCellsArray=_unratedFoodCellsArray;
@property(retain, nonatomic) NSArray *ratedFoodCellsArray; // @synthesize ratedFoodCellsArray=_ratedFoodCellsArray;
@property(nonatomic) struct UIEdgeInsets tableViewOriginalInset; // @synthesize tableViewOriginalInset=_tableViewOriginalInset;
@property(retain, nonatomic) NSArray *tableData; // @synthesize tableData=_tableData;
@property(retain, nonatomic) NVMTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NVMPickerViewController *timePicker; // @synthesize timePicker=_timePicker;
@property(retain, nonatomic) NSArray *unratedOrderItems; // @synthesize unratedOrderItems=_unratedOrderItems;
@property(retain, nonatomic) NSArray *ratedOrderItems; // @synthesize ratedOrderItems=_ratedOrderItems;
@property(retain, nonatomic) NVMOrderRating *orderRating; // @synthesize orderRating=_orderRating;
@property(copy, nonatomic) CDUnknownBlockType didSuccessEdit; // @synthesize didSuccessEdit=_didSuccessEdit;
- (void).cxx_destruct;
- (id)indexPathInDataSourceOfCell:(id)arg1;
- (void)checkSensitiveWords:(id)arg1;
- (id)trackParams;
- (void)stopEditing;
- (_Bool)hasRatedContentAtServiceCell;
- (_Bool)hasRatedContent;
- (_Bool)hasTypedText;
- (void)adjustTableViewOffsetBasedOnKeyboardEndRect:(struct CGRect)arg1 animationDuration:(double)arg2;
- (id)currentActiveCell;
- (void)currentActiveCellStopEditing;
- (void)applyExtraBottomInset:(double)arg1;
- (id)rateFoodCellForUnratedOrderItem:(id)arg1;
- (void)editRatingData;
- (void)showDeliveryTimesPicker;
- (void)showBigPhotoPreview:(id)arg1 fromRect:(struct CGRect)arg2 sourceImageView:(id)arg3;
- (void)goToTagEditWithPhoto:(id)arg1;
- (void)showPhotoPicker;
- (void)unFoldRatingRecord;
- (void)unFoldUnratedFoodCells;
- (void)foldAllStarTextViewCellsWithEmptyInput:(id)arg1;
- (void)markInvalidTextViewInput;
- (void)switchControlAction:(id)arg1;
- (void)handleKeyboardNotification:(id)arg1 hideKeyboard:(_Bool)arg2;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)unratedFoodRatingTitleCell;
- (id)ratedFoodRatingTitleCell;
- (id)foodRatingTitleCell;
- (void)setupSpeedCell;
- (void)loadFoodCellsWithOrderRatableStatus:(_Bool)arg1;
- (void)updateTableData;
- (void)saveAllTagsFromOrderRating:(id)arg1;
- (void)fillInDataWithOrderRating:(id)arg1 unratedOrderItems:(id)arg2 ratedOrderItems:(id)arg3 orderId:(id)arg4 orderRatable:(_Bool)arg5;
- (void)loadTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

