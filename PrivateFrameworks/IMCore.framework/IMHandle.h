/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSAttributedString, NSURL, IMAccount, NSData, NSDate, NSSet, NSArray, NSDictionary, NSString, IMServiceImpl, NSMutableArray, IMPerson;

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {
    NSString *_guid;
    IMAccount *_account;
    NSString *_id;
    NSDictionary *_otherServiceIDs;
    NSDate *_idleSince;
    NSDate *_feedUpdatedDate;
    NSDictionary *_presenceProps;
    NSDictionary *_extraProps;
    NSDictionary *_certs;
    NSSet *_groups;
    IMPerson *_person;
    NSString *_abFirstName;
    NSString *_abLastName;
    NSString *_abFullName;
    NSString *_abNickname;
    NSArray *_abEmails;
    NSString *_displayID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_nickname;
    NSArray *_emails;
    NSString *_normalizedFormOfID;
    NSString *_IDWithoutResource;
    NSString *_IDWithTrimmedServer;
    NSString *_uniqueName;
    NSData *_pictureData;
    NSString *_statusMsg;
    NSString *_processedStatusMsg;
    NSAttributedString *_richStatusMsg;
    NSDate *_whenWentOffline;
    NSDate *_whenStatusChanged;
    NSString *_prevStatusMsg;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    NSURL *_statusURL;
    struct __CFPhoneNumber { } *_phoneNumberRef;
    NSString *_formattedNumber;
    BOOL _hasCheckedPhoneNumber;
    unsigned int _status;
    unsigned int _prevStatus;
    unsigned long long _capabilities;
    unsigned int _authRequestStatus;
    unsigned int _resourceIndex;
    int _IDStatus;
    BOOL _isRetainingAccount;
    BOOL _blockNotifications;
    BOOL _hasTemporaryWatch;
    BOOL _isMobile;
    BOOL _isBot;
    BOOL _isAnonymous;
    BOOL _beingTornDown;
    BOOL _willUpdateIdleTime;
    BOOL _hasCheckedCardMap;
    int _priority;
    int _addressBookIdentifier;
    int _notificationQueueCount;
    NSURL *_statusMessageURL;
}

@property(readonly) BOOL hasNoConferencingCaps;
@property(readonly) NSString * ID;
@property(readonly) IMAccount * account;
@property(readonly) IMServiceImpl * service;
@property int IDStatus;
@property(readonly) unsigned int authRequestStatus;
@property(readonly) NSURL * statusURL;
@property(retain) NSURL * statusMessageAsURL;
@property(readonly) unsigned int status;
@property(readonly) NSString * statusMessage;
@property(readonly) NSString * nameOfStatus;
@property(readonly) NSAttributedString * richStatusMessage;
@property(readonly) NSString * offlineString;
@property(readonly) unsigned int previousStatus;
@property(readonly) NSString * previousStatusMessage;
@property(readonly) double idleTime;
@property(readonly) NSString * idleString;
@property(readonly) NSDate * feedUpdatedDate;
@property int priority;
@property(readonly) double timeSinceWentOffline;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) BOOL canBeAdded;
@property(readonly) BOOL canBeDeleted;
@property(readonly) unsigned long long capabilities;
@property(readonly) BOOL isBot;
@property(readonly) BOOL isBuddy;
@property(readonly) BOOL isLoginIMHandle;
@property(readonly) BOOL isVisiblyBlocked;
@property(readonly) BOOL isBlocked;
@property(readonly) BOOL isAnonymous;
@property(readonly) BOOL isSystemUser;
@property(readonly) BOOL isMobile;
@property(readonly) BOOL isLoginIMHandleForAnyAccount;
@property(readonly) NSString * mobileDeviceName;
@property(readonly) BOOL watchingIMHandle;
@property(readonly) NSData * pictureData;
@property(retain) NSDictionary * otherServiceIDs;
@property(readonly) NSDictionary * presenceProperties;
@property(readonly) NSDictionary * extraProperties;
@property(readonly) NSString * displayID;
@property(readonly) NSString * normalizedID;
@property(readonly) BOOL hasName;
@property(readonly) NSString * name;
@property(readonly) NSString * fullName;
@property(readonly) NSString * uniqueName;
@property(readonly) NSString * nameAndID;
@property(readonly) NSString * nameAndEmail;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * nickname;
@property(readonly) NSString * email;
@property(readonly) NSArray * emails;
@property(setter=setIMPerson:,retain) IMPerson * person;
@property(readonly) int addressBookIdentifier;
@property(readonly) NSArray * groupsArray;
@property(readonly) NSSet * groups;
@property(readonly) BOOL hasOtherSiblings;
@property(readonly) NSSet * siblings;
@property(readonly) NSArray * siblingsArray;
@property(readonly) NSArray * accountSiblingsArray;
@property(readonly) NSArray * existingAccountSiblingsArray;
@property(readonly) id bestSibling;
@property(readonly) id bestAccountSibling;
@property(readonly) BOOL isConferenceAvailable;
@property(readonly) BOOL hasConferencing;
@property(readonly) BOOL hasVideo;
@property(readonly) BOOL hasMultiwayVideo;
@property(readonly) BOOL hasAudio;
@property(readonly) BOOL hasMultiwayAudio;
@property(readonly) BOOL supportsARDMuxing;
@property(readonly) BOOL hasResource;
@property(readonly) NSString * resource;
@property(readonly) NSString * IDWithoutResource;
@property(readonly) NSString * server;
@property(readonly) NSString * accountTypeName;
@property(readonly) NSString * guid;
@property(readonly) BOOL hasLocation;
@property(readonly) id imHandleWithoutResource;
@property(readonly) id existingIMHandleWithoutResource;
@property(readonly) BOOL hasServer;
@property(readonly) IMPerson * _cachedPerson;
@property(readonly) NSArray * dependentIMHandles;
@property(readonly) BOOL areABPropertiesRecent;
@property(retain) NSData * customPictureData;

+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (BOOL)notificationsEnabled;
+ (void)setNotificationsEnabled:(BOOL)arg1;
+ (id)nameOfStatus:(unsigned int)arg1;
+ (id)bestIMHandleInArray:(id)arg1;
+ (void)_loadStatusNames;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;

- (id)statusMessage;
- (BOOL)canBeDeleted;
- (void)_sendData:(id)arg1;
- (id)account;
- (void)setEmail:(id)arg1;
- (id)emails;
- (id)email;
- (id)lastName;
- (id)firstName;
- (void)setUniqueName:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setImageData:(id)arg1;
- (void)finalize;
- (id)imHandleRegistrarGUID;
- (void)setStatusMessageAsURL:(id)arg1;
- (id)statusMessageAsURL;
- (BOOL)isBot;
- (id)richStatusMessage;
- (id)previousStatusMessage;
- (id)feedUpdatedDate;
- (unsigned int)previousStatus;
- (id)presenceProperties;
- (id)statusURL;
- (void)setCustomPictureData:(id)arg1;
- (id)customPictureData;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (BOOL)hasMultiwayAudio;
- (BOOL)hasMultiwayVideo;
- (BOOL)isConferenceAvailable;
- (id)_bestChatSibling;
- (id)_chatSiblings;
- (BOOL)_isChatSiblingOf:(id)arg1;
- (BOOL)isSiblingOf:(id)arg1;
- (BOOL)isAccountSiblingOf:(id)arg1;
- (id)siblingsArray;
- (BOOL)hasOtherSiblings;
- (int)compareNormalizedIDs:(id)arg1;
- (int)compareLastNames:(id)arg1;
- (int)compareFirstNames:(id)arg1;
- (void)_updateIdleTime;
- (void)_scheduleIdleTimeUpdate;
- (id)idleString;
- (id)offlineString;
- (id)nameOfStatus;
- (void)statusMessageChanged:(id)arg1;
- (id)dependentIMHandles;
- (id)accountTypeName;
- (unsigned int)sortOrderInGroup:(id)arg1;
- (void)setBlocked:(BOOL)arg1;
- (BOOL)isVisiblyBlocked;
- (void)_persistentPropertiesChanged:(id)arg1;
- (id)bestSibling;
- (id)bestSiblingInGroup:(id)arg1;
- (id)bestIMHandleForAccount:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (BOOL)isLoginIMHandleForAnyAccount;
- (BOOL)hasLocation;
- (id)mobileDeviceName;
- (BOOL)isSystemUser;
- (BOOL)canBeAdded;
- (id)nameAndID;
- (void)_clearABPersonLookup;
- (void)clearABPerson;
- (id)nameAndEmail;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (id)pictureData;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (id)normalizedID;
- (id)_nameForComparisonPreferFirst:(BOOL)arg1;
- (void)_updateIdleTimer;
- (void)_clearStatusMessageURLCache;
- (void)_filterStatusMessage;
- (double)idleTime;
- (double)timeSinceStatusChanged;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (id)imHandleWithoutResource;
- (BOOL)_isMyIDInList:(id)arg1;
- (BOOL)isBlocked;
- (void)_setExtraProperties:(id)arg1;
- (void)setPresenceProperties:(id)arg1;
- (void)setStatusURLFromString:(id)arg1;
- (void)setIsBot:(BOOL)arg1;
- (void)setIsMobile:(BOOL)arg1;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (void)setStatus:(unsigned int)arg1 message:(id)arg2 richMessage:(id)arg3;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)setOtherServiceIDs:(id)arg1;
- (void)setLocalNickname:(id)arg1;
- (void)setIDStatus:(int)arg1;
- (id)bestSiblingInGroup:(id)arg1 otherThan:(id)arg2;
- (id)siblings;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (double)timeSinceWentOffline;
- (BOOL)supportsARDMuxing;
- (BOOL)isMobile;
- (void)_createPhoneNumberRefIfNeeded;
- (id)IDWithoutResource;
- (BOOL)hasResource;
- (void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4;
- (void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)_abPersonCreateIfNeeded;
- (BOOL)hasName;
- (id)_nameUsingUnique:(BOOL)arg1;
- (id)_IDWithTrimmedServer;
- (BOOL)hasServer;
- (BOOL)_hasServiceNameProperties;
- (id)_formattedPhoneNumber;
- (BOOL)_hasABName;
- (id)displayID;
- (void)sendNotificationABPersonChanged;
- (void)_registerForIMPerson;
- (void)resetUniqueName;
- (void)_clearABProperties;
- (void)resetABProperties;
- (BOOL)areABPropertiesRecent;
- (id)existingIMHandleWithoutResource;
- (void)_postNotification:(id)arg1;
- (BOOL)shouldQueueNotifications;
- (id)bestIMHandleForService:(id)arg1;
- (id)groupsArray;
- (BOOL)isAnonymous;
- (void)setAnonymous:(BOOL)arg1;
- (void)_unregisterFromIMPerson;
- (void)_imPersonPictureChanged:(id)arg1;
- (int)compareStatus:(id)arg1;
- (void)statusChanged:(unsigned int)arg1;
- (void)statusChanged:(unsigned int)arg1 message:(id)arg2;
- (void)setIMPerson:(id)arg1;
- (id)_cachedPerson;
- (BOOL)resetABPerson;
- (void)setHasTemporaryWatch:(BOOL)arg1;
- (BOOL)watchingIMHandle;
- (id)otherServiceIDs;
- (BOOL)_setCapabilities:(unsigned long long)arg1;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3;
- (void)propertiesChanged:(id)arg1;
- (void)_stopRetainingAccount:(id)arg1;
- (void)releaseNotificationQueue;
- (void)beginNotificationQueue;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (unsigned int)authRequestStatus;
- (int)compareIDs:(id)arg1;
- (int)compareAccountNames:(id)arg1;
- (void)_removeAccountReference:(id)arg1;
- (BOOL)isBetterThanIMHandle:(id)arg1;
- (id)publicAPIPropertiesDictionary;
- (id)bestAccountSibling;
- (id)resource;
- (id)uniqueName;
- (int)priority;
- (id)name;
- (id)server;
- (void)_registerForNotifications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (id)accountSiblingsArray;
- (id)imHandleForOtherAccount:(id)arg1;
- (int)addressBookIdentifier;
- (BOOL)matchesIMHandle:(id)arg1;
- (id)ID;
- (void)setCapabilities:(unsigned long long)arg1;
- (int)IDStatus;
- (void)requestIDStatus;
- (id)extraProperties;
- (id)existingAccountSiblingsArray;
- (id)person;
- (void)setEmails:(id)arg1;
- (id)fullName;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)service;
- (id)guid;
- (unsigned int)status;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)capabilities;
- (id)groups;
- (id)nickname;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (void)postNotificationName:(id)arg1;
- (void)requestValueOfProperty:(id)arg1;
- (BOOL)isBuddy;
- (BOOL)isLoginIMHandle;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)setPersonStatus:(unsigned int)arg1;
- (BOOL)hasConferencing;
- (BOOL)hasNoConferencingCaps;

@end