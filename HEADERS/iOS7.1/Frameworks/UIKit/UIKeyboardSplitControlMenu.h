//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView
{
    NSMutableArray *m_menuOptions;
    struct CGSize m_preferredSize;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (int)defaultSelectedIndex;
- (struct CGSize)preferredSize;
- (int)numberOfItems;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
