/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHostDelegate.h>
#import <libobjc.A.dylib/SBBannerPresentingAlertItem.h>

@protocol SBBannerPresentingAlertItemDelegate;
@class CKIMDBMessage, BBBulletin, NCInteractiveNotificationHostViewController, NSString;

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate, SBBannerPresentingAlertItem> {

	CKIMDBMessage* _message;
	BOOL _playedSound;
	BBBulletin* _bulletin;
	BOOL _showingImage;
	id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate;
	NCInteractiveNotificationHostViewController* _audioPlaybackViewController;

}

@property (nonatomic,retain) BBBulletin * bulletin;                                                                  //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL showingImage;                                                                      //@synthesize showingImage=_showingImage - In the implementation block
@property (nonatomic,retain) NCInteractiveNotificationHostViewController * audioPlaybackViewController;              //@synthesize audioPlaybackViewController=_audioPlaybackViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate; 
+(int)lastMessageSenderID;
+(void)stopPlayingCurrentAlertTone;
+(void)setLastMessageSenderID:(int)arg1 ;
+(void)playMessageReceived;
-(void)dealloc;
-(id)name;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(id)accessoryView;
-(id)messageText;
-(id)address;
-(BOOL)showingImage;
-(id)alertImage;
-(NCInteractiveNotificationHostViewController *)audioPlaybackViewController;
-(id)_groupID;
-(void)didDeactivateForReason:(int)arg1 ;
-(BBBulletin *)bulletin;
-(BOOL)isAudioPlaybackAlert;
-(id<SBBannerPresentingAlertItemDelegate>)bannerPresenterDelegate;
-(void)reply;
-(void)setShowingImage:(BOOL)arg1 ;
-(void)setBannerPresenterDelegate:(id<SBBannerPresentingAlertItemDelegate>)arg1 ;
-(Class)alertSheetClass;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(void)setAudioPlaybackViewController:(NCInteractiveNotificationHostViewController *)arg1 ;
@end

