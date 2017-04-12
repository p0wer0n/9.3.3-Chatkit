/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/FMFMapViewControllerDelegate.h>
#import <libobjc.A.dylib/CKAttachmentViewControllerDelegate.h>
#import <libobjc.A.dylib/CKTranscriptManagementNameFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CKConversation, FMFMapViewController, CKTranscriptManagementView, CKAttachmentViewController, CKTranscriptManagementNameField, NSString;

@interface CKTranscriptManagementController : CKViewController <FMFMapViewControllerDelegate, CKAttachmentViewControllerDelegate, CKTranscriptManagementNameFieldDelegate, UIGestureRecognizerDelegate> {

	BOOL _mapHidden;
	BOOL _initialLoad;
	BOOL _removeMapViewAfterScrollAnimation;
	CKConversation* _conversation;
	FMFMapViewController* _mapController;
	CKTranscriptManagementView* _managementView;
	CKAttachmentViewController* _attachmentsController;
	CKTranscriptManagementNameField* _nameField;

}

@property (nonatomic,retain) CKConversation * conversation;                                   //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) FMFMapViewController * mapController;                            //@synthesize mapController=_mapController - In the implementation block
@property (nonatomic,retain) CKTranscriptManagementView * managementView;                     //@synthesize managementView=_managementView - In the implementation block
@property (nonatomic,retain) CKAttachmentViewController * attachmentsController;              //@synthesize attachmentsController=_attachmentsController - In the implementation block
@property (nonatomic,retain) CKTranscriptManagementNameField * nameField;                     //@synthesize nameField=_nameField - In the implementation block
@property (assign,nonatomic) BOOL mapHidden;                                                  //@synthesize mapHidden=_mapHidden - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad;                           //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) BOOL removeMapViewAfterScrollAnimation;                          //@synthesize removeMapViewAfterScrollAnimation=_removeMapViewAfterScrollAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CKTranscriptManagementNameField *)nameField;
-(void)setNameField:(CKTranscriptManagementNameField *)arg1 ;
-(void)setInitialLoad:(BOOL)arg1 ;
-(void)setMapHidden:(BOOL)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(void)_handleFriendshipStatusChangedNotification:(id)arg1 ;
-(void)_handleLocationChangedNotification:(id)arg1 ;
-(void)_handleDisplayNameChangedNotification:(id)arg1 ;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(CKAttachmentViewController *)attachmentsController;
-(FMFMapViewController *)mapController;
-(void)setManagementView:(CKTranscriptManagementView *)arg1 ;
-(void)setMapHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithConversation:(id)arg1 ;
-(void)setAttachmentsController:(CKAttachmentViewController *)arg1 ;
-(CKTranscriptManagementView *)managementView;
-(void)_mapViewTouched:(id)arg1 ;
-(BOOL)mapHidden;
-(BOOL)_conversationHasLeft;
-(UIEdgeInsets)_navigationBarInsets;
-(BOOL)isInitialLoad;
-(void)_scrollAttachmentsToTopAnimated:(BOOL)arg1 ;
-(void)_updateMapInsets;
-(void)_updateAttachmentsInsets;
-(BOOL)removeMapViewAfterScrollAnimation;
-(void)setMapController:(FMFMapViewController *)arg1 ;
-(void)setRemoveMapViewAfterScrollAnimation:(BOOL)arg1 ;
-(double)_mapHeightForCurrentBounds;
-(id)fmfMapHandles:(id)arg1 ;
-(void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2 ;
-(void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2 ;
-(void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)annotationImageForHandle:(id)arg1 ;
-(void*)annotationABRecordForHandle:(id)arg1 ;
-(void)attachmentsController:(id)arg1 collectionViewWillBeginDragging:(id)arg2 ;
-(void)attachmentsController:(id)arg1 collectionViewDidScroll:(id)arg2 ;
-(void)attachmentsController:(id)arg1 collectionViewDidEndScrollingAnimation:(id)arg2 ;
-(void)attachmentsController:(id)arg1 collectionViewDidChangeEditState:(id)arg2 ;
-(void)nameField:(id)arg1 didCommitGroupName:(id)arg2 ;
@end

