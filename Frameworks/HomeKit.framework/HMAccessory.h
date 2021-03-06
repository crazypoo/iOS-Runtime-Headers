/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessory : NSObject <HMMessageReceiver, NSSecureCoding> {
    BOOL _blocked;
    BOOL _bridgedAccessory;
    <HMAccessoryDelegate> *_delegate;
    HMHome *_home;
    NSArray *_identifiersForBridgedAccessories;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    BOOL _paired;
    BOOL _reachable;
    HMRoom *_room;
    NSArray *_services;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (getter=isBlocked, nonatomic) BOOL blocked;
@property (getter=isBridged, nonatomic, readonly) BOOL bridged;
@property (nonatomic) BOOL bridgedAccessory;
@property (getter=isConfigured, nonatomic, readonly) BOOL configured;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMAccessoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, copy) NSArray *identifiersForBridgedAccessories;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL paired;
@property (getter=isReachable, nonatomic) BOOL reachable;
@property (nonatomic) HMRoom *room;
@property (nonatomic, copy) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleCharacteristicsUpdated:(id)arg1;
- (void)_handleConnectivityChanged:(id)arg1;
- (void)_handleRenamed:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_handleServiceTypeAssociated:(id)arg1;
- (void)_handleServicesUpdated:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (void)_registerNotificationHandlers;
- (BOOL)bridgedAccessory;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (void)configureMessageDispatcher:(id)arg1;
- (void)copyFrom:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)enableNotification:(BOOL)arg1 forCharacteristic:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findService:(id)arg1;
- (void)handleMultipleCharacteristicsUpdated:(id)arg1;
- (id)home;
- (id)identifier;
- (id)identifiersForBridgedAccessories;
- (void)identifyWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isBlocked;
- (BOOL)isBridged;
- (BOOL)isConfigured;
- (BOOL)isReachable;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)migrateDelegateToAccessory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)msgDispatcher;
- (id)name;
- (BOOL)paired;
- (void)readValueForCharacteristic:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)room;
- (id)services;
- (void)setBlocked:(BOOL)arg1;
- (void)setBridgedAccessory:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifiersForBridgedAccessories:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setPaired:(BOOL)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)setRoom:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)unconfigure;
- (void)updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 forService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)workQueue;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(id /* block */)arg3;

@end
