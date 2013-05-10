//
//  MVSwipeableView.h
//  Chat
//
//  Created by Michaël Villar on 5/8/13.
//
//

#import <TwUI/TUIKit.h>

@protocol MVSwipeableViewDelegate;

@interface MVSwipeableView : TUIView

@property (weak, readwrite) NSObject <MVSwipeableViewDelegate> *delegate;

- (void)addSwipeableSubview:(TUIView *)view;
- (void)swipeToView:(TUIView *)view;

@end


@protocol MVSwipeableViewDelegate

@optional
- (void)swipeableView:(MVSwipeableView*)swipeableView
       didSwipeToView:(TUIView *)view;

@end