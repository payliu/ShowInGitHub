/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDERefactoringTransformationViewController.h>

@class NSMatrix, NSTextField;

@interface IDERefactoringCreateSuperclassViewController : IDERefactoringTransformationViewController
{
    NSTextField *_superclassNameField;
    NSMatrix *_filesMatrix;
}

- (void)allowUserInput:(BOOL)arg1;
- (void)loadView;
- (id)nibName;
- (id)previewSummary;
- (void)setOriginalSymbol:(id)arg1;
- (id)userInput;

@end

