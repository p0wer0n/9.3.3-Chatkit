/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class UIImage, NSArray;

@interface CKAnimatedImage : NSObject {

	UIImage* _image;
	NSArray* _durations;

}

@property (nonatomic,retain) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * durations;              //@synthesize durations=_durations - In the implementation block
@property (nonatomic,readonly) CGSize size; 
+(id)animatedImageWithContentsOfCPBitmapURL:(id)arg1 ;
-(id)frames;
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)description;
-(UIImage *)image;
-(BOOL)writeToCPBitmapURL:(id)arg1 ;
-(id)initWithImages:(id)arg1 durations:(id)arg2 ;
-(NSArray *)durations;
-(id)_initWithImage:(id)arg1 durations:(id)arg2 ;
-(void)setDurations:(NSArray *)arg1 ;
@end

