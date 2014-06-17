/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIFont, NSString, NSArray, UIView, UIImage, ABContactViewController, <ABPersonViewControllerDelegate>;

@interface ABPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, UIViewControllerRestoration> {
    bool_badgeEmailPropertiesForMailVIP;
    bool_allowsEditing;
    bool_allowsActions;
    bool_shouldShowLinkedPeople;
    bool_allowsSharing;
    bool_allowsAddToFavorites;
    bool_allowsConferencing;
    bool_allowsContactBlocking;
    bool_allowsOnlyPhoneActions;
    bool_allowsOnlyFaceTimeActions;
    bool_highlightedImportant;
    int _style;
    int _highlightedProperty;
    int _highlightedMultiValueIdentifier;
    void *_addressBook;
    void *_displayedPerson;
    <ABPersonViewControllerDelegate> *_personViewDelegate;
    NSArray *_displayedProperties;
    ABContactViewController *_contactViewController;
    UIView *_personHeaderView;
}

@property <ABPersonViewControllerDelegate> * personViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSArray * displayedProperties;
@property bool allowsEditing;
@property bool allowsActions;
@property bool shouldShowLinkedPeople;
@property bool allowsSharing;
@property bool allowsAddToFavorites;
@property bool allowsDeletion;
@property bool allowsCancel;
@property bool allowsSounds;
@property bool allowsVibrations;
@property bool allowsConferencing;
@property bool allowsContactBlocking;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(retain) ABContactViewController * contactViewController;
@property(readonly) UIView * tableHeaderView;
@property(retain) UIView * personHeaderView;
@property bool shouldAlignPersonHeaderViewToImage;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customFooterView;
@property bool allowsOnlyPhoneActions;
@property bool allowsOnlyFaceTimeActions;
@property(copy) NSString * attribution;
@property bool shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageBody;
@property(copy) NSString * shareMessageSubject;
@property(copy) NSString * shareLocationURL;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;
@property bool badgeEmailPropertiesForMailVIP;
@property int style;
@property int highlightedProperty;
@property int highlightedMultiValueIdentifier;
@property bool highlightedImportant;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(long long)arg6 destructive:(bool)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(long long)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(long long)arg4 destructive:(bool)arg5;
- (void)setContactViewController:(id)arg1;
- (void)cancelEditing:(bool)arg1;
- (void)personViewController:(id)arg1 willSetEditing:(bool)arg2 animated:(bool)arg3;
- (bool)makeFirstFieldBecomeFirstResponder;
- (bool)_updateAllDataForExternalChange;
- (void)_updateTableDataForExternalChange;
- (bool)_updatePeopleDataForExternalChange;
- (void)addressBookChangedLocally:(struct __CFDictionary { }*)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (void)setCardContentProvider:(id)arg1;
- (bool)allowsSettingAsPreferredCardForName;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedImportant:(bool)arg1;
- (void)setHighlightedMultiValueIdentifier:(int)arg1;
- (void)setHighlightedProperty:(int)arg1;
- (bool)highlightedImportant;
- (int)highlightedMultiValueIdentifier;
- (int)highlightedProperty;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(bool)arg3;
- (void)reloadContactViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBodyIsHTML:(bool)arg1;
- (bool)shareMessageBodyIsHTML;
- (void)shareContactByEmail:(id)arg1;
- (id)willWeiboLocationCallback;
- (id)willTweetLocationCallback;
- (id)shareLocationURL;
- (id)shareMessageSubject;
- (id)personViewDelegate;
- (void)setWillTweetLocationCallback:(id)arg1;
- (bool)manuallyLinkPerson:(id)arg1;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(long long)arg2;
- (void)setAllowsSettingAsPreferredCardForName:(bool)arg1;
- (bool)appearsInLinkingPeoplePicker;
- (bool)shouldShowLinkingUIOnCard;
- (void)setBadgeEmailPropertiesForMailVIP:(bool)arg1;
- (bool)badgeEmailPropertiesForMailVIP;
- (bool)allowsVibrations;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(bool)arg4;
- (void)setShouldAlignPersonHeaderViewToImage:(bool)arg1;
- (bool)shouldAlignPersonHeaderViewToImage;
- (id)editDelegate;
- (bool)shouldShowLinkedPeople;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageDetail;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setAppearsInLinkingPeoplePicker:(bool)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setAllowsVibrations:(bool)arg1;
- (void)setShouldShowLinkingUIOnCard:(bool)arg1;
- (void)setShouldShowLinkedPeople:(bool)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (bool)handleExternalChange;
- (void*)displayedPerson;
- (id)newActionButton;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (id)displayedProperties;
- (bool)allowsConferencing;
- (bool)allowsDeletion;
- (bool)allowsContactBlocking;
- (bool)allowsAddToFavorites;
- (bool)allowsSharing;
- (bool)allowsActions;
- (void)setAllowsAddToFavorites:(bool)arg1;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (id)contactViewController:(id)arg1 highlightColorForPropertyItem:(id)arg2 contact:(id)arg3;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (id)contactViewController;
- (void)setPersonViewDelegate:(id)arg1;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setAllowsSounds:(bool)arg1;
- (bool)allowsSounds;
- (void)setAllowsOnlyFaceTimeActions:(bool)arg1;
- (bool)allowsOnlyFaceTimeActions;
- (void)setAllowsOnlyPhoneActions:(bool)arg1;
- (bool)allowsOnlyPhoneActions;
- (bool)allowsCancel;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)messageFont;
- (void)setAttribution:(id)arg1;
- (id)attribution;
- (void)setMessage:(id)arg1;
- (id)message;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (void)setAllowsCancel:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (bool)allowsEditing;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableHeaderView;
- (void)encodeRestorableStateWithCoder:(id)arg1;

@end