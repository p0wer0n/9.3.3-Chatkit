/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKFileTransfer.h>

@class NSString, NSURL, NSDictionary, IMMessage, NSError;

@interface CKDBFileTransfer : NSObject <CKFileTransfer> {

	NSString* _guid;
	NSURL* _fileURL;
	NSDictionary* _transcoderUserInfo;
	NSString* _filename;
	long long _transferState;

}

@property (nonatomic,copy) NSString * filename;                                              //@synthesize filename=_filename - In the implementation block
@property (assign,nonatomic) long long transferState;                                        //@synthesize transferState=_transferState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IMMessage * IMMessage; 
@property (nonatomic,copy,readonly) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo;                       //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long currentBytes; 
@property (nonatomic,readonly) unsigned long long totalBytes; 
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized; 
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
-(void)dealloc;
-(NSString *)description;
-(NSURL *)fileURL;
-(NSString *)guid;
-(BOOL)isDownloadable;
-(void)setFilename:(NSString *)arg1 ;
-(unsigned long long)totalBytes;
-(NSError *)error;
-(BOOL)isFileDataReady;
-(BOOL)isRestoring;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 ;
-(void)setTransferState:(long long)arg1 ;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)isFileURLFinalized;
-(BOOL)isDownloading;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(unsigned long long)currentBytes;
-(long long)transferState;
-(NSString *)filename;
@end

