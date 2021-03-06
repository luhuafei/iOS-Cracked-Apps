//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AliDetailTableViewCellProtocol.h"

@class AliDetailComponentModel, AliDetailTitleDivisionComponent, NSMutableDictionary, NSString, UIViewController;

@interface AliProductDetailBaseCell : UITableViewCell <AliDetailTableViewCellProtocol>
{
    AliDetailComponentModel *_componentModel;
    AliDetailTitleDivisionComponent *_titleComponent;
    UIViewController *_parentVC;
    NSMutableDictionary *_childrenPool;
}

+ (_Bool)showTitleComponent:(id)arg1;
+ (_Bool)checkData:(id)arg1;
+ (double)getDivisionTitleHeight:(id)arg1;
+ (unsigned long long)getValidCount:(id)arg1 byLimit:(unsigned long long)arg2;
+ (struct CGSize)getChildrenSize:(id)arg1 constrainedSize:(struct CGSize)arg2;
+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *childrenPool; // @synthesize childrenPool=_childrenPool;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) AliDetailTitleDivisionComponent *titleComponent; // @synthesize titleComponent=_titleComponent;
@property(retain, nonatomic) AliDetailComponentModel *componentModel; // @synthesize componentModel=_componentModel;
- (void).cxx_destruct;
- (double)addDivisionTitle;
- (void)dealloc;
- (void)setObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

