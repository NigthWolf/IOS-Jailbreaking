//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class DOMHTMLInputElement, NSArray, NSDictionary, NSMutableDictionary, WebFrame;

@interface WBUFormAutoCompleteState : NSObject <UIActionSheetDelegate>
{
    DOMHTMLInputElement *_textField;
    WebFrame *_webFrame;
    NSDictionary *_formMetadata;
    NSDictionary *_textFieldMetadata;
    unsigned int _formType;
    int _action;
    BOOL _gatheringFormValues;
    NSDictionary *_formValues;
    NSArray *_potentialCredentialMatches;
    BOOL _canAutoComplete;
    NSMutableDictionary *_matchesByCompletion;
}

+ (BOOL)_shouldSaveCredentialsInProtectionSpace:(id)arg1;
@property(readonly, nonatomic) WebFrame *webFrame; // @synthesize webFrame=_webFrame;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_generateAndSuggestPassword;
- (int)_passwordGenerationAssistanceAction;
- (BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
- (void)_autoFillCreditCardData;
- (void)_autoFillFormWithCreditCardData:(id)arg1;
- (BOOL)_canAutoFillCreditCardData;
- (BOOL)_textFieldLooksLikeCreditCardFormField;
- (id)_matchesForPartialString:(id)arg1;
- (void)_ensureFormMetadata;
- (void)acceptedAutoFillWord:(id)arg1;
- (id)suggestionsForString:(id)arg1;
- (BOOL)hasCurrentSuggestions;
- (void)autoFill;
- (void)_showDisallowedActionAlert;
- (int)_action;
- (id)titleOfAutoFillButton;
- (void)_updateAutoFillButton;
- (void)_gatherFormValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithTextField:(id)arg1 webFrame:(id)arg2;

@end
