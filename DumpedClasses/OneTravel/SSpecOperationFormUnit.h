//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOperationFormCom.h"

@interface SSpecOperationFormUnit : SOperationFormCom
{
}

- (id)getNewString:(id)arg1;
- (_Bool)checkAirportPoiList:(id)arg1;
- (void)showGuideOfCellType:(long long)arg1 withModel:(id)arg2;
- (void)reloadWithType:(long long)arg1 cellType:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)isNoCar;
- (_Bool)isLoadEstimaCom;
- (_Bool)isInputFlightNum;
- (_Bool)isShowPersonalityServiceWithScence:(long long)arg1;
- (long long)pickupOrDropOffFormState;
- (void)clearData;
- (id)dataSource;
- (id)operationTitle;
- (_Bool)isSendButtonEnable;
- (_Bool)canOpen;
- (_Bool)canSendOrder;
- (long long)styleForSection:(long long)arg1;
- (_Bool)sectionCanBeFolded:(long long)arg1;
- (id)modelForCellAtIndexPath:(id)arg1;
- (id)sendButtonModel;
- (long long)numberOfSections;
- (long long)numberOfCellsInSection:(long long)arg1;
- (id)indexPathForCellType:(long long)arg1;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;

@end

