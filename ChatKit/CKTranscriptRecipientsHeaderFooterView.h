/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UITextView, UIView;

@interface CKTranscriptRecipientsHeaderFooterView : UITableViewHeaderFooterView {

	UILabel* _headerLabel;
	UILabel* _preceedingSectionFooterLabel;
	UITextView* _locationSharingTextView;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	double _margin;

}

@property (nonatomic,retain) UILabel * headerLabel;                               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * preceedingSectionFooterLabel;              //@synthesize preceedingSectionFooterLabel=_preceedingSectionFooterLabel - In the implementation block
@property (nonatomic,retain) UITextView * locationSharingTextView;                //@synthesize locationSharingTextView=_locationSharingTextView - In the implementation block
@property (nonatomic,retain) UIView * topSeparator;                               //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                            //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (assign,nonatomic) double margin;                                       //@synthesize margin=_margin - In the implementation block
+(id)identifier;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setMargin:(double)arg1 ;
-(double)margin;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setPreceedingSectionFooterLabel:(UILabel *)arg1 ;
-(UILabel *)preceedingSectionFooterLabel;
-(void)setTopSeparator:(UIView *)arg1 ;
-(UIView *)topSeparator;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(UITextView *)locationSharingTextView;
-(void)setLocationSharingTextView:(UITextView *)arg1 ;
@end

