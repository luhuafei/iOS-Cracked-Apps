//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSIndexPath, NSLayoutConstraint, Train12306TicketModel, TrainTicketPassengerInfoModel, UIButton, UIImageView, UILabel, UIView;

@interface CTTrainOrderDetailPassengerCell : CTCustomeGroupTableViewCell
{
    _Bool _is12306Passenger;
    UILabel *_nameLabel;
    UILabel *_ticketTypeLabel;
    UILabel *_priceLabel;
    UILabel *_seatNameLabel;
    UILabel *_idCardLabel;
    UILabel *_seatNumberLabel;
    UILabel *_ticketStateLabel;
    UILabel *_moneyMarkLabel;
    UILabel *_tagLabel1;
    UILabel *_tagLabel2;
    UIImageView *_backImgView;
    UIButton *_refundButton;
    UIButton *_resignButton;
    UIButton *_qiangButton;
    UIButton *_showFlowButton;
    UIButton *_cancelButton;
    NSIndexPath *_indexPath;
    Train12306TicketModel *_ticketInfo;
    id <CTTrainOrderDetailPassengerCellDelegate> _delegate;
    UIView *_contentBackView;
    UIView *_lineView;
    TrainTicketPassengerInfoModel *_passengerInfoModel;
    NSLayoutConstraint *_tagLabel1WidthConstraint;
    NSLayoutConstraint *_tagLabel2WidthConstraint;
    NSLayoutConstraint *_packageButtonWidthConstraint;
    UIButton *_packageButton;
    UIView *_buttonsBGView;
}

@property(nonatomic) _Bool is12306Passenger; // @synthesize is12306Passenger=_is12306Passenger;
@property(nonatomic) __weak UIView *buttonsBGView; // @synthesize buttonsBGView=_buttonsBGView;
@property(nonatomic) __weak UIButton *packageButton; // @synthesize packageButton=_packageButton;
@property(nonatomic) __weak NSLayoutConstraint *packageButtonWidthConstraint; // @synthesize packageButtonWidthConstraint=_packageButtonWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tagLabel2WidthConstraint; // @synthesize tagLabel2WidthConstraint=_tagLabel2WidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tagLabel1WidthConstraint; // @synthesize tagLabel1WidthConstraint=_tagLabel1WidthConstraint;
@property(retain, nonatomic) TrainTicketPassengerInfoModel *passengerInfoModel; // @synthesize passengerInfoModel=_passengerInfoModel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIView *contentBackView; // @synthesize contentBackView=_contentBackView;
@property(nonatomic) __weak id <CTTrainOrderDetailPassengerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Train12306TicketModel *ticketInfo; // @synthesize ticketInfo=_ticketInfo;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *showFlowButton; // @synthesize showFlowButton=_showFlowButton;
@property(retain, nonatomic) UIButton *qiangButton; // @synthesize qiangButton=_qiangButton;
@property(retain, nonatomic) UIButton *resignButton; // @synthesize resignButton=_resignButton;
@property(retain, nonatomic) UIButton *refundButton; // @synthesize refundButton=_refundButton;
@property(nonatomic) __weak UIImageView *backImgView; // @synthesize backImgView=_backImgView;
@property(nonatomic) __weak UILabel *tagLabel2; // @synthesize tagLabel2=_tagLabel2;
@property(nonatomic) __weak UILabel *tagLabel1; // @synthesize tagLabel1=_tagLabel1;
@property(nonatomic) __weak UILabel *moneyMarkLabel; // @synthesize moneyMarkLabel=_moneyMarkLabel;
@property(nonatomic) __weak UILabel *ticketStateLabel; // @synthesize ticketStateLabel=_ticketStateLabel;
@property(nonatomic) __weak UILabel *seatNumberLabel; // @synthesize seatNumberLabel=_seatNumberLabel;
@property(nonatomic) __weak UILabel *idCardLabel; // @synthesize idCardLabel=_idCardLabel;
@property(nonatomic) __weak UILabel *seatNameLabel; // @synthesize seatNameLabel=_seatNameLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *ticketTypeLabel; // @synthesize ticketTypeLabel=_ticketTypeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)showPackageAction:(id)arg1;
- (void)restoreAllView;
- (void)grayAllView;
- (id)handleIndentificationNumber:(id)arg1;
- (void)showFlowAction:(id)arg1;
- (void)qiangAction:(id)arg1;
- (void)refundAction:(id)arg1;
- (void)resignAction:(id)arg1;
- (void)setupContentWithTicketInfo:(id)arg1 isCtripOrder:(_Bool)arg2 isLastRow:(_Bool)arg3;
- (void)build12306PassengerButtons:(id)arg1 isCtripOrder:(_Bool)arg2;
- (void)clearPassengerButtons;
- (id)buildButton:(id)arg1 action:(SEL)arg2 enable:(_Bool)arg3 referenceButton:(id)arg4;
- (void)buildButtons:(id)arg1;
- (void)configPassengerInfoCell:(id)arg1 isLastRow:(_Bool)arg2;
- (double)tagTextWidth:(id)arg1;
- (void)initBaseData;
- (void)showPackageButtonWithWidth:(double)arg1;
- (void)packageButtonHidden;
- (void)awakeFromNib;

@end

