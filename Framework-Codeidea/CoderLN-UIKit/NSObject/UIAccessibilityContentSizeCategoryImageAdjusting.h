/*
 * UIAccessibilityContentSizeCategoryImageAdjusting.h
 *
 * Framework: UIKit (c) 2017
 *
 * About ME『Public：Codeidea / https://githubidea.github.io』.
 * Copyright © All members (Star|Fork) have the right to read and write『https://github.com/CoderLN』.
 *
 * 🏃🏻‍♂️ ◕该模块将系统化学习，后续替换、补充文章内容 ~
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIButton.h>
#import <UIKit/NSTextAttachment.h>

// These should be used in conjunction with the "Preserve vector data" checkbox for an asset catalog asset, to allow smooth scaling of symbolic glyphs.

NS_ASSUME_NONNULL_BEGIN

UIKIT_EXTERN API_AVAILABLE(ios(11.0),tvos(11.0))
@protocol UIAccessibilityContentSizeCategoryImageAdjusting <NSObject>

// When this is equal to YES, the receiver's intrinsic size will increase for users who prefer an accessibility content size category.
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;

@end

// If the contentMode of the UIImageView is set to a mode that scales the image (e.g. the default one), the image will be scaled for an accessibility content size category. If not, the behavior is undefined.
@interface UIImageView (UIAccessibilityContentSizeCategoryImageAdjusting) <UIAccessibilityContentSizeCategoryImageAdjusting>

@end

// If applicable, the image (not the background image) will be scaled for an accessibility content size category. Image edge insets are left unchanged.
@interface UIButton (UIAccessibilityContentSizeCategoryImageAdjusting) <UIAccessibilityContentSizeCategoryImageAdjusting>

@end

// If an image is set, the attachment bounds' size will increase for users who prefer an accessibility content size category.
// This should be used in a UIContentSizeCategoryAdjusting view that responds YES to adjustsFontForContentSizeCategory and has a font that can be adjusted. If not, the behavior is undefined.
@interface NSTextAttachment (UIAccessibilityContentSizeCategoryImageAdjusting) <UIAccessibilityContentSizeCategoryImageAdjusting>

@end

NS_ASSUME_NONNULL_END
