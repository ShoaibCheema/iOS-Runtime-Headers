/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKTextStyle, NSString;

@interface GKButton : UIButton <GKTextStyleReplay> {
    GKTextStyle *_appliedStyle;
    GKTextStyle *_baseStyle;
}

@property(retain) GKTextStyle * appliedStyle;
@property(retain) GKTextStyle * baseStyle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)initialize;

- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)baseStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1;
- (void)setAppliedStyle:(id)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setBaseStyle:(id)arg1;

@end