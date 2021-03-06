//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKComponentController.h>

@class FBSearchBreakingNewsArticlesCarouselComponent, FBSearchBreakingNewsArticlesCarouselView;

@interface FBSearchBreakingNewsArticlesCarouselComponentController : CKComponentController
{
    unsigned long long _fromIndex;
    unsigned long long _toIndex;
    double _percentage;
    shared_ptr_6a94d7a4 _mountedChildren;
    struct unordered_map<UIView *, FBSearchBreakingNewsArticlesCarouselComponentMountInfo, FB::HashFunctor<NSObject *>, std::__1::equal_to<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, FBSearchBreakingNewsArticlesCarouselComponentMountInfo>>> _viewToMountInfo;
    struct unordered_map<id, UIView *, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<std::__1::pair<const id, UIView *>>> _scopeFrameTokenToView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setupLayout:(const struct CKComponentLayout *)arg1 view:(id)arg2;
- (void)unmountView:(id)arg1;
- (void)updatePercentage;
- (void)willUnmount;
- (void)setupView;
- (void)updateMountState;
- (void)moveFocusToIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 percentage:(double)arg3;
- (void)didUpdateComponent;
- (void)didMount;
@property(readonly, nonatomic) FBSearchBreakingNewsArticlesCarouselView *carouselView;
@property(readonly, nonatomic) FBSearchBreakingNewsArticlesCarouselComponent *carouselComponent;

@end

