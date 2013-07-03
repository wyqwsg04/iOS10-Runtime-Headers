/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIColor, UILabel;

@interface SKUISoftwareSwooshCellLayout : SKUIItemCellLayout  {
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    struct CGSize { 
        float width; 
        float height; 
    } _maxImageSize;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    unsigned int _visibleFields;
}

@property(copy) NSString * artistName;
@property(copy) NSString * category;
@property(copy) NSString * price;
@property(copy) NSString * title;
@property struct CGSize { float x1; float x2; } maxImageSize;
@property unsigned int visibleFields;


- (void)_reloadPriceLabel;
- (struct CGSize { float x1; float x2; })cellSizeForImageOfSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setPrice:(id)arg1;
- (void)setItemOffer:(id)arg1;
- (unsigned int)visibleFields;
- (void)setVisibleFields:(unsigned int)arg1;
- (id)_newDefaultLabel;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setMaxImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })maxImageSize;
- (id)price;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCategory:(id)arg1;
- (id)category;

@end