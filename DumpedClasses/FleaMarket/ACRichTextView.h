//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ACRichTextMultiComponent, NSMutableArray, NSString, UIColor, UIFont;

@interface ACRichTextView : UIView
{
    _Bool _invalidIntrisictSize;
    unsigned char _lineBreakMode;
    _Bool _allowCopy;
    struct __CTFrame *_textFrame;
    NSString *_plainText;
    NSString *_text;
    UIColor *_textColor;
    UIFont *_font;
    unsigned long long _textAlignment;
    double _lineSpacing;
    unsigned long long _numberOfLines;
    unsigned long long _textImageAlignment;
    double _ascentDescentRate;
    id <ACRichTextDelegate> _delegate;
    ACRichTextMultiComponent *_components;
    NSMutableArray *_links;
    struct CGSize _estimatedSize;
    struct CGPoint _copyMenuOrigin;
}

@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
@property(retain, nonatomic) ACRichTextMultiComponent *components; // @synthesize components=_components;
@property(nonatomic) id <ACRichTextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double ascentDescentRate; // @synthesize ascentDescentRate=_ascentDescentRate;
@property(nonatomic) struct CGPoint copyMenuOrigin; // @synthesize copyMenuOrigin=_copyMenuOrigin;
@property(nonatomic) _Bool allowCopy; // @synthesize allowCopy=_allowCopy;
@property(nonatomic) unsigned long long textImageAlignment; // @synthesize textImageAlignment=_textImageAlignment;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct CGSize estimatedSize; // @synthesize estimatedSize=_estimatedSize;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(nonatomic) struct __CTFrame *textFrame; // @synthesize textFrame=_textFrame;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)showPasteMenu;
- (id)linkAtIndex:(long long)arg1;
- (struct CGRect)getLineBounds:(struct __CTLine *)arg1 point:(struct CGPoint)arg2;
- (id)touchLinkInView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)applyImageToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withComponent:(id)arg3;
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLengt:(long long)arg4;
- (void)applySmallAttributes:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (struct CGColor *)copyUIColorFromValue:(id)arg1;
- (id)colorForHex:(id)arg1;
- (void)applyDoubleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applySingleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyBoldItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (_Bool)renderAttributeString:(struct __CFAttributedString *)arg1;
- (void)renderImage:(struct __CFString *)arg1 context:(struct CGContext *)arg2 originX:(double)arg3 originY:(double)arg4 withAttributes:(struct __CFDictionary *)arg5;
- (void)renderTruncateLastLine:(struct __CTLine *)arg1 lineOrigin:(struct CGPoint)arg2 attributedString:(struct __CFAttributedString *)arg3 withContext:(struct CGContext *)arg4;
- (void)render;
- (void)drawRect:(struct CGRect)arg1;
- (id)generateImageUrlFileName:(id)arg1;
- (void)asyDownLoadImage:(id)arg1;
- (void)textImageAligmentAttributes:(id)arg1;
- (id)analysisText:(id)arg1;
- (void)fixIOS6EstimatedSize:(_Bool)arg1;
- (id)getTag:(id)arg1;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

