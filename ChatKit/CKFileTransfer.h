/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IMMessage, NSString, NSURL, NSDictionary, NSError;


@protocol CKFileTransfer <NSObject>
@property (nonatomic,retain) IMMessage * IMMessage; 
@property (nonatomic,copy,readonly) NSString * guid; 
@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long currentBytes; 
@property (nonatomic,readonly) unsigned long long totalBytes; 
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized; 
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@required
-(NSURL *)fileURL;
-(NSString *)guid;
-(BOOL)isDownloadable;
-(unsigned long long)totalBytes;
-(NSError *)error;
-(IMMessage *)IMMessage;
-(BOOL)isFileDataReady;
-(BOOL)isRestoring;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)isFileURLFinalized;
-(BOOL)isDownloading;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
-(unsigned long long)currentBytes;
-(void)setIMMessage:(id)arg1;
-(NSString *)filename;

@end

