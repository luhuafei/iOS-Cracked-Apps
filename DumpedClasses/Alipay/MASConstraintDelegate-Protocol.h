//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MASConstraint;

@protocol MASConstraintDelegate <NSObject>
- (MASConstraint *)constraint:(MASConstraint *)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(MASConstraint *)arg1 shouldBeReplacedWithConstraint:(MASConstraint *)arg2;
@end

