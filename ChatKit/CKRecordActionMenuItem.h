/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKActionMenuItem.h>

@class NSDate;

@interface CKRecordActionMenuItem : CKActionMenuItem {

	BOOL _wasSelected;
	NSDate* _dateSelected;

}

@property (assign,nonatomic) BOOL wasSelected;                   //@synthesize wasSelected=_wasSelected - In the implementation block
@property (nonatomic,retain) NSDate * dateSelected;              //@synthesize dateSelected=_dateSelected - In the implementation block
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setWasSelected:(BOOL)arg1 ;
-(void)setDateSelected:(NSDate *)arg1 ;
-(BOOL)wasSelected;
-(NSDate *)dateSelected;
-(void)updateForState:(long long)arg1 touchInside:(BOOL)arg2 ;
@end

