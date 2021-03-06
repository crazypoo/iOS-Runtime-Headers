/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadSearchHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    int _activeFacetIndex;
    SKUIClientContext *_clientContext;
    <SKUIIPadSearchHeaderViewDelegate> *_delegate;
    NSMutableArray *_facetButtons;
    UIPopoverController *_facetPopoverController;
    NSMutableDictionary *_facetSelections;
    NSArray *_searchFacets;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIIPadSearchHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *facetSelections;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *searchFacets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_destroyFacetPopover;
- (void)_facetButtonAction:(id)arg1;
- (int)_selectedIndexForFacet:(id)arg1;
- (id)_titleForFacet:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)facetSelections;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 clientContext:(id)arg2;
- (void)layoutSubviews;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)searchFacets;
- (void)setDelegate:(id)arg1;
- (void)setSearchFacets:(id)arg1 selections:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
