/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol CKFeedCollectionViewLayoutDatasource;
@class NSMutableArray;

@interface CKFeedCollectionViewLayout : UICollectionViewLayout {

	NSMutableArray* _sectionLayoutInfos;
	CGSize _contentSize;
	BOOL _shouldDisplayCaptionsBelowBatches;
	BOOL _shouldDisplaySectionHeadersBelowSections;
	BOOL _shouldFloatThumbnails;
	BOOL _shouldFloatSectionHeaders;
	BOOL _shouldFloatWithEase;
	BOOL _shouldFloatOverShortDistances;
	id<CKFeedCollectionViewLayoutDatasource> _feedDatasource;
	unsigned long long _compositeLayoutSection;
	long long _flowDirection;
	double _thumbnailSpacing;
	double _sectionHeaderBackgroundHeight;
	double _floatingBottomDecorationHeight;
	CGSize _sectionReferenceSize;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;
	UIEdgeInsets _floatPadding;

}

@property (assign,nonatomic) id<CKFeedCollectionViewLayoutDatasource> feedDatasource;              //@synthesize feedDatasource=_feedDatasource - In the implementation block
@property (assign,nonatomic) unsigned long long compositeLayoutSection;                            //@synthesize compositeLayoutSection=_compositeLayoutSection - In the implementation block
@property (assign,nonatomic) long long flowDirection;                                              //@synthesize flowDirection=_flowDirection - In the implementation block
@property (nonatomic,readonly) unsigned flowDirectionEdge; 
@property (assign,nonatomic) CGSize sectionReferenceSize;                                          //@synthesize sectionReferenceSize=_sectionReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                                              //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                                          //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                                              //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCaptionsBelowBatches;                               //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplaySectionHeadersBelowSections;                        //@synthesize shouldDisplaySectionHeadersBelowSections=_shouldDisplaySectionHeadersBelowSections - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatThumbnails;                                           //@synthesize shouldFloatThumbnails=_shouldFloatThumbnails - In the implementation block
@property (assign,nonatomic) double thumbnailSpacing;                                              //@synthesize thumbnailSpacing=_thumbnailSpacing - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatSectionHeaders;                                       //@synthesize shouldFloatSectionHeaders=_shouldFloatSectionHeaders - In the implementation block
@property (assign,nonatomic) double sectionHeaderBackgroundHeight;                                 //@synthesize sectionHeaderBackgroundHeight=_sectionHeaderBackgroundHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatWithEase;                                             //@synthesize shouldFloatWithEase=_shouldFloatWithEase - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatOverShortDistances;                                   //@synthesize shouldFloatOverShortDistances=_shouldFloatOverShortDistances - In the implementation block
@property (assign,nonatomic) double floatingBottomDecorationHeight;                                //@synthesize floatingBottomDecorationHeight=_floatingBottomDecorationHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets floatPadding;                                            //@synthesize floatPadding=_floatPadding - In the implementation block
-(id)_delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setSectionReferenceSize:(CGSize)arg1 ;
-(void)setThumbnailSpacing:(double)arg1 ;
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1 ;
-(void)setShouldFloatThumbnails:(BOOL)arg1 ;
-(void)setShouldDisplaySectionHeadersBelowSections:(BOOL)arg1 ;
-(void)setShouldFloatSectionHeaders:(BOOL)arg1 ;
-(void)setShouldFloatWithEase:(BOOL)arg1 ;
-(void)setShouldFloatOverShortDistances:(BOOL)arg1 ;
-(void)setFloatPadding:(UIEdgeInsets)arg1 ;
-(CGRect)frameForTileAtIndexPath:(id)arg1 ;
-(long long)numberOfTilesOmittedInSection:(long long)arg1 ;
-(void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3 ;
-(void)setFlowDirection:(long long)arg1 ;
-(void)invalidateLayoutAndCache;
-(unsigned)flowDirectionEdge;
-(long long)flowDirection;
-(id)sectionsJoinedWithSection:(long long)arg1 ;
-(void)enumerateImageElementsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForSection:(long long)arg1 ;
-(id)indexPathForImageElementAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldFloatSectionHeaders;
-(BOOL)shouldFloatThumbnails;
-(double)floatingBottomDecorationHeight;
-(double)sectionHeaderBackgroundHeight;
-(void)_updateSectionLayoutInfosIfNecessary;
-(void)_updateGlobalLayoutInfoWithOptions:(long long)arg1 sectionsWithUpdatedGroupIDs:(out id*)arg2 ;
-(void)_updateLayoutInfoForSection:(long long)arg1 ignoreSizeChange:(BOOL)arg2 ;
-(void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(long long)arg2 ;
-(void)_enumerateSectionsInRect:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_getSize:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9 ;
-(CGSize)sectionReferenceSize;
-(void)_sectionAtIndex:(long long)arg1 sizeDidChangeFrom:(CGSize)arg2 to:(CGSize)arg3 ;
-(UIEdgeInsets)floatPadding;
-(BOOL)shouldFloatOverShortDistances;
-(BOOL)shouldFloatWithEase;
-(void)_getSizeForVerticalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9 ;
-(void)_getSizeForHorizontalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(BOOL)shouldDisplayCaptionsBelowBatches;
-(double)thumbnailSpacing;
-(BOOL)shouldDisplaySectionHeadersBelowSections;
-(void)setSectionHeaderBackgroundHeight:(double)arg1 ;
-(void)setFloatingBottomDecorationHeight:(double)arg1 ;
-(void)setFeedDatasource:(id<CKFeedCollectionViewLayoutDatasource>)arg1 ;
-(void)setCompositeLayoutSection:(unsigned long long)arg1 ;
-(id<CKFeedCollectionViewLayoutDatasource>)feedDatasource;
-(unsigned long long)compositeLayoutSection;
@end

