//
//  UIResponder.h
//  UIKit
//
//  Copyright (c) 2005-2014 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIEvent.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE_IOS(2_0) @interface UIResponder : NSObject

- (nullable UIResponder*)nextResponder;

- (BOOL)canBecomeFirstResponder;    // default is NO
- (BOOL)becomeFirstResponder;

- (BOOL)canResignFirstResponder;    // default is YES
- (BOOL)resignFirstResponder;

- (BOOL)isFirstResponder;

// Generally, all responders which do custom touch handling should override all four of these methods.
// Your responder will receive either touchesEnded:withEvent: or touchesCancelled:withEvent: for each
// touch it is handling (those touches it received in touchesBegan:withEvent:).
// *** You must handle cancelled touches to ensure correct behavior in your application.  Failure to
// do so is very likely to lead to incorrect behavior or crashes.
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event;
- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event;
- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event;
- (void)touchesCancelled:(nullable NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event;

- (void)motionBegan:(UIEventSubtype)motion withEvent:(nullable UIEvent *)event NS_AVAILABLE_IOS(3_0);
- (void)motionEnded:(UIEventSubtype)motion withEvent:(nullable UIEvent *)event NS_AVAILABLE_IOS(3_0);
- (void)motionCancelled:(UIEventSubtype)motion withEvent:(nullable UIEvent *)event NS_AVAILABLE_IOS(3_0);

- (void)remoteControlReceivedWithEvent:(nullable UIEvent *)event NS_AVAILABLE_IOS(4_0);

- (BOOL)canPerformAction:(SEL)action withSender:(nullable id)sender NS_AVAILABLE_IOS(3_0);
// Allows an action to be forwarded to another target. By default checks -canPerformAction:withSender: to either return self, or go up the responder chain.
- (nullable id)targetForAction:(SEL)action withSender:(nullable id)sender NS_AVAILABLE_IOS(7_0);

@property(nullable, nonatomic,readonly) NSUndoManager *undoManager NS_AVAILABLE_IOS(3_0);

@end

typedef NS_OPTIONS(NSInteger, UIKeyModifierFlags) {
    UIKeyModifierAlphaShift     = 1 << 16,  // This bit indicates CapsLock
    UIKeyModifierShift          = 1 << 17,
    UIKeyModifierControl        = 1 << 18,
    UIKeyModifierAlternate      = 1 << 19,
    UIKeyModifierCommand        = 1 << 20,
    UIKeyModifierNumericPad     = 1 << 21,
} NS_ENUM_AVAILABLE_IOS(7_0);

NS_CLASS_AVAILABLE_IOS(7_0) @interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding>

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@property (nonatomic,readonly) NSString *input;
@property (nonatomic,readonly) UIKeyModifierFlags modifierFlags;
@property (nullable,nonatomic,copy) NSString *discoverabilityTitle NS_AVAILABLE_IOS(9_0);

// The action for UIKeyCommands should accept a single (id)sender, as do the UIResponderStandardEditActions below

// Creates an key command that will _not_ be discoverable in the UI.
+ (UIKeyCommand *)keyCommandWithInput:(NSString *)input modifierFlags:(UIKeyModifierFlags)modifierFlags action:(SEL)action;

// Key Commands with a discoverabilityTitle _will_ be discoverable in the UI.
+ (UIKeyCommand *)keyCommandWithInput:(NSString *)input modifierFlags:(UIKeyModifierFlags)modifierFlags action:(SEL)action discoverabilityTitle:(NSString *)discoverabilityTitle NS_AVAILABLE_IOS(9_0);

@end

@interface UIResponder (UIResponderKeyCommands)
@property (nullable,nonatomic,readonly) NSArray<UIKeyCommand *> *keyCommands NS_AVAILABLE_IOS(7_0); // returns an array of UIKeyCommand objects<
@end

@interface NSObject(UIResponderStandardEditActions)   // these methods are not implemented in NSObject

- (void)cut:(nullable id)sender NS_AVAILABLE_IOS(3_0);
- (void)copy:(nullable id)sender NS_AVAILABLE_IOS(3_0);
- (void)paste:(nullable id)sender NS_AVAILABLE_IOS(3_0);
- (void)select:(nullable id)sender NS_AVAILABLE_IOS(3_0);
- (void)selectAll:(nullable id)sender NS_AVAILABLE_IOS(3_0);
- (void)delete:(nullable id)sender NS_AVAILABLE_IOS(3_2);
- (void)makeTextWritingDirectionLeftToRight:(nullable id)sender NS_AVAILABLE_IOS(5_0);
- (void)makeTextWritingDirectionRightToLeft:(nullable id)sender NS_AVAILABLE_IOS(5_0);
- (void)toggleBoldface:(nullable id)sender NS_AVAILABLE_IOS(6_0);
- (void)toggleItalics:(nullable id)sender NS_AVAILABLE_IOS(6_0);
- (void)toggleUnderline:(nullable id)sender NS_AVAILABLE_IOS(6_0);

- (void)increaseSize:(nullable id)sender NS_AVAILABLE_IOS(7_0);
- (void)decreaseSize:(nullable id)sender NS_AVAILABLE_IOS(7_0);

@end

@class UIInputViewController;
@class UITextInputMode;
@class UITextInputAssistantItem;

@interface UIResponder (UIResponderInputViewAdditions)

// Called and presented when object becomes first responder.  Goes up the responder chain.
@property (nullable, nonatomic, readonly, strong) __kindof UIView *inputView NS_AVAILABLE_IOS(3_2);
@property (nullable, nonatomic, readonly, strong) __kindof UIView *inputAccessoryView NS_AVAILABLE_IOS(3_2);

/// This method is for clients that wish to put buttons on the Shortcuts Bar, shown on top of the keyboard.
/// You may modify the returned inputAssistantItem to add to or replace the existing items on the bar.
/// Modifications made to the returned UITextInputAssistantItem are reflected automatically.
/// This method should not be overriden. Goes up the responder chain.
@property (nonnull, nonatomic, readonly, strong) UITextInputAssistantItem *inputAssistantItem NS_AVAILABLE_IOS(9_0) __WATCHOS_PROHIBITED;

// For viewController equivalents of -inputView and -inputAccessoryView
// Called and presented when object becomes first responder.  Goes up the responder chain.
@property (nullable, nonatomic, readonly, strong) UIInputViewController *inputViewController NS_AVAILABLE_IOS(8_0);
@property (nullable, nonatomic, readonly, strong) UIInputViewController *inputAccessoryViewController NS_AVAILABLE_IOS(8_0);

/* When queried, returns the current UITextInputMode, from which the keyboard language can be determined.
 * When overridden it should return a previously-queried UITextInputMode object, which will attempt to be
 * set inside that app, but not persistently affect the user's system-wide keyboard settings. */
@property (nullable, nonatomic, readonly, strong) UITextInputMode *textInputMode NS_AVAILABLE_IOS(7_0);
/* When the first responder changes and an identifier is queried, the system will establish a context to
 * track the textInputMode automatically. The system will save and restore the state of that context to
 * the user defaults via the app identifier. Use of -textInputMode above will supercede use of -textInputContextIdentifier. */
@property (nullable, nonatomic, readonly, strong) NSString *textInputContextIdentifier NS_AVAILABLE_IOS(7_0);
// This call is to remove stored app identifier state that is no longer needed.
+ (void)clearTextInputContextIdentifier:(NSString *)identifier NS_AVAILABLE_IOS(7_0);

// If called while object is first responder, reloads inputView, inputAccessoryView, and textInputMode.  Otherwise ignored.
- (void)reloadInputViews NS_AVAILABLE_IOS(3_2);

@end

// These are pre-defined constants for use with the input property of UIKeyCommand objects.
UIKIT_EXTERN NSString *const UIKeyInputUpArrow         NS_AVAILABLE_IOS(7_0);
UIKIT_EXTERN NSString *const UIKeyInputDownArrow       NS_AVAILABLE_IOS(7_0);
UIKIT_EXTERN NSString *const UIKeyInputLeftArrow       NS_AVAILABLE_IOS(7_0);
UIKIT_EXTERN NSString *const UIKeyInputRightArrow      NS_AVAILABLE_IOS(7_0);
UIKIT_EXTERN NSString *const UIKeyInputEscape          NS_AVAILABLE_IOS(7_0);

@interface UIResponder (ActivityContinuation)
@property (nullable, nonatomic, strong) NSUserActivity *userActivity NS_AVAILABLE_IOS(8_0);
- (void)updateUserActivityState:(NSUserActivity *)activity NS_AVAILABLE_IOS(8_0);
- (void)restoreUserActivityState:(NSUserActivity *)activity NS_AVAILABLE_IOS(8_0);
@end

NS_ASSUME_NONNULL_END

