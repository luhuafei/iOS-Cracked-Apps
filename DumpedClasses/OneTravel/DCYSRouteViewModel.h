//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface DCYSRouteViewModel : NSObject
{
    int _viewType;
    int _showType;
    id _value;
    double _valueWidth;
    NSString *_imageURL;
    double _minWidth;
    double _leftMargin;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    double _backgroundCircus;
    double _horizontalMargin;
}

+ (id)attributeStringViewModel:(id)arg1;
+ (id)stringViewModel:(id)arg1;
+ (id)imageViewModel:(id)arg1;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double backgroundCircus; // @synthesize backgroundCircus=_backgroundCircus;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) double valueWidth; // @synthesize valueWidth=_valueWidth;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;

@end

