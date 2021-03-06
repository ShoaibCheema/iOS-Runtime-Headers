/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIAttributedStringView, SKUIButtonViewElement, SKUIImageView, SKUIImageViewElement, UIControl;

@interface SKUIContentUnavailableView : SKUIViewReuseView <SKUIViewElementView> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIControl *_button;
    SKUIButtonViewElement *_buttonElement;
    } _contentInset;
    SKUIImageViewElement *_imageElement;
    SKUIImageView *_imageView;
    SKUIAttributedStringView *_messageView;
    SKUIAttributedStringView *_titleView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringWithMessageLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringWithTitleLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (float)_baselineOffsetForView:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (float)_firstBaselineOffsetForView:(id)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
