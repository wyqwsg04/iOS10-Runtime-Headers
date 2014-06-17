/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABUIPerson, UIFont, UITableView, ABPersonTableViewActionsDelegate, NSMutableArray, ABContactViewController, UIView, NSString, <ABStyleProvider>, <ABUnknownPersonViewControllerDelegate>, ABPersonViewControllerHelper, ABPersonTableViewSharingDelegate, ABPersonTableViewDataSource, NSArray, UIImage;

@interface ABUnknownPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate> {
    void *_addressBook;
    void *_displayedPerson;
    bool_allowsActions;
    bool_allowsAddingToAddressBook;
    bool_allowsConferencing;
    bool_allowsContactBlocking;
    bool_allowsOnlyPhoneActions;
    bool_allowsOnlyFaceTimeActions;
    bool_allowsSharing;
    int _style;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    NSString *_alternateName;
    NSString *_message;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    UIView *_personHeaderView;
    <ABStyleProvider> *_styleProvider;
    ABPersonViewControllerHelper *_helper;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABUIPerson *_displayedUIPerson;
    NSArray *_displayedProperties;
    ABContactViewController *_contactViewController;
    NSString *_primaryCNProperty;
    NSString *_primaryCountryCode;
    UITableView *_vCardTableView;
    NSArray *_vCards;
    NSArray *_vCardsProperties;
    NSMutableArray *_unmergedRecords;
}

@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property bool allowsActions;
@property bool allowsAddingToAddressBook;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customFooterView;
@property bool allowsConferencing;
@property bool allowsContactBlocking;
@property bool allowsOnlyPhoneActions;
@property bool allowsOnlyFaceTimeActions;
@property bool shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageBody;
@property(copy) NSString * shareMessageSubject;
@property(copy) NSString * shareLocationURL;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property bool allowsSharing;
@property(readonly) bool canShareContact;
@property bool isLocation;
@property bool badgeEmailPropertiesForMailVIP;
@property(retain) UIView * personHeaderView;
@property bool shouldAlignPersonHeaderViewToImage;
@property bool savesNewContactOnSuspend;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(retain) ABUIPerson * displayedUIPerson;
@property(copy) NSArray * displayedProperties;
@property(copy) NSString * attribution;
@property(retain) ABContactViewController * contactViewController;
@property int style;
@property(retain) NSString * primaryCNProperty;
@property(retain) NSString * primaryCountryCode;
@property(retain) UITableView * vCardTableView;
@property(retain) NSArray * vCards;
@property(retain) NSArray * vCardsProperties;
@property(retain) NSMutableArray * unmergedRecords;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (void)setVCardsProperties:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentShareContactSheet;
- (void)presentAddToContactsSheet;
- (id)initWithVCardData:(id)arg1;
- (void)showUnmergedContactsAlert;
- (id)vCardsProperties;
- (id)findMatchingCardsForRecord:(void*)arg1;
- (void)setUnmergedRecords:(id)arg1;
- (void)addUnmergedRecords;
- (id)unmergedRecords;
- (id)primaryPropertyStringForContact:(id)arg1;
- (id)primaryCountryCode;
- (id)primaryCNProperty;
- (void)setPrimaryCountryCode:(id)arg1;
- (void)setPrimaryCNProperty:(id)arg1;
- (void)addToExistingContacts;
- (void)createNewContacts;
- (void)setVCardTableView:(id)arg1;
- (id)vCardTableView;
- (id)vCards;
- (void)setVCards:(id)arg1;
- (void)setIsLocation:(bool)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(long long)arg6 destructive:(bool)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(long long)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(long long)arg4 destructive:(bool)arg5;
- (void)setContactViewController:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(bool)arg3;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBodyIsHTML:(bool)arg1;
- (bool)shareMessageBodyIsHTML;
- (bool)canShareContact;
- (id)willWeiboLocationCallback;
- (id)willTweetLocationCallback;
- (id)shareLocationURL;
- (id)shareMessageSubject;
- (bool)isLocation;
- (id)unknownPersonViewDelegate;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setBadgeEmailPropertiesForMailVIP:(bool)arg1;
- (bool)badgeEmailPropertiesForMailVIP;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(bool)arg4;
- (void)setShouldAlignPersonHeaderViewToImage:(bool)arg1;
- (bool)shouldAlignPersonHeaderViewToImage;
- (id)sharingDelegate;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageDetail;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)reloadImageData;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (id)helper;
- (bool)savesNewContactOnSuspend;
- (void)loadContactViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void*)displayedPerson;
- (id)actionsDelegate;
- (id)newActionButton;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (id)displayedProperties;
- (bool)allowsConferencing;
- (bool)allowsContactBlocking;
- (bool)allowsSharing;
- (void)setPrimaryProperty:(int)arg1;
- (bool)allowsActions;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)allowsAddingToAddressBook;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (void)setAlternateName:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (id)contactViewController;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setAllowsOnlyFaceTimeActions:(bool)arg1;
- (bool)allowsOnlyFaceTimeActions;
- (void)setAllowsOnlyPhoneActions:(bool)arg1;
- (bool)allowsOnlyPhoneActions;
- (int)abViewControllerType;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)messageFont;
- (void)setAttribution:(id)arg1;
- (id)attribution;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)alternateName;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void)setStyle:(int)arg1;
- (id)dataSource;
- (int)style;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end