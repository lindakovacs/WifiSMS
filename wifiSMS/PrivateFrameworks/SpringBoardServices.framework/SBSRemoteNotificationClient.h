/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */



@interface SBSRemoteNotificationClient : NSObject 
{
}

+ (void)registerForRemoteNotificationTypes:(NSInteger)arg1;
+ (NSInteger)enabledRemoteNotificationTypes;
+ (id)getPendingNotificationUserInfo;
+ (BOOL)isSystemwideEnabled;
+ (void)setSystemwideEnabled:(BOOL)arg1;
+ (BOOL)hasRegisteredBundleIdentifiers;
+ (void)getSupportedTypes:(id*)arg1 enabledTypes:(id*)arg2;
+ (void)setEnabledNotificationTypes:(NSInteger)arg1 forBundleIdentifier:(id)arg2;


@end
