/* Generated by RuntimeBrowser.
 */

@protocol AXHARemoteControllerDelegate <NSObject>

@required

- (void)controller:(AXHARemoteController *)arg1 didCloseConnectionWithError:(NSError *)arg2;
- (void)controller:(AXHARemoteController *)arg1 didFinishSendingData:(AXHARemoteMessage *)arg2;
- (void)controller:(AXHARemoteController *)arg1 didReceiveData:(AXHARemoteMessage *)arg2;
- (void)controllerDidFinishConnecting:(AXHARemoteController *)arg1;

@end
