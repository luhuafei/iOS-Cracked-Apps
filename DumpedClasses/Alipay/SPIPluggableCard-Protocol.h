//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIControl, UIView;

@protocol SPIPluggableCard <NSObject>
- (UIControl *)controlWithTag:(long long)arg1;
- (void)updateWithData:(id)arg1 isCachedData:(_Bool)arg2;
- (UIView *)viewForCard;
- (double)heightForCard;
- (long long)getTag;
- (void)setTag:(long long)arg1;
- (void)setCardContainer:(id <SPICardContainer>)arg1;

@optional
- (id)getUserData;
- (void)setUserData:(id)arg1;
@end

