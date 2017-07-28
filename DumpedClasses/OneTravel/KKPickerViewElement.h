//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKViewElement.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class KKElement, NSArray, NSMutableArray, NSString, UIPickerView;

@interface KKPickerViewElement : KKViewElement <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSMutableArray *_sections;
    KKElement *_selectedElement;
}

+ (id)elementWithPickerView:(id)arg1;
+ (id)elementWithName:(id)arg1 parent:(id)arg2;
@property(nonatomic) __weak KKElement *selectedElement; // @synthesize selectedElement=_selectedElement;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)didAddChildren:(id)arg1;
- (void)didRemoveChildren:(id)arg1;
- (void)layoutChildren;
- (id)elementInSection:(long long)arg1 row:(long long)arg2;
- (id)elementInSection:(long long)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)addSectionElementWith:(CDUnknownBlockType)arg1;
- (id)addSectionElement;
- (id)withPickerView:(CDUnknownBlockType)arg1;
- (id)copyElementWithZone:(struct _NSZone *)arg1;
- (id)initWithPickerView:(id)arg1;
@property(readonly, nonatomic) UIPickerView *pickerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
