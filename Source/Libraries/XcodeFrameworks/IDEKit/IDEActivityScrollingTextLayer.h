/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSString;

@interface IDEActivityScrollingTextLayer : CALayer
{
    id _lastUpdateContext;
    unsigned long long _activeTransactions;
    NSMutableArray *_textLayers;
    CALayer *_containerLayer;
    NSDictionary *_textAttributes;
    NSString *_textAlignmentMode;
    NSArray *_segments;
}

- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
@property(readonly) NSAttributedString *attributedStringValue;
- (id)attributedStringValueTruncatedToWidth:(double)arg1;
- (void)clearTextLayerStack;
- (id)effectiveAttributes;
@property id lastUpdateContext; // @synthesize lastUpdateContext=_lastUpdateContext;
- (double)maximumTextWidth;
- (void)pushTextLayer:(id)arg1 context:(id)arg2 animateUpdate:(BOOL)arg3;
- (double)rowHeight;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setStringSegments:(id)arg1 context:(id)arg2 animateUpdate:(BOOL)arg3;
@property(copy) NSString *textAlignmentMode; // @synthesize textAlignmentMode=_textAlignmentMode;
@property(copy) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void)setupLayers;
@property(readonly) NSString *stringValue;
- (void)updateTextLayer;
- (void)updateTextLayerWithContext:(id)arg1 animateUpdate:(BOOL)arg2;

@end

