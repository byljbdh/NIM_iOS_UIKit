//
//  NIMSessionInteractor.h
//  NIMKit
//
//  Created by chris on 2016/11/7.
//  Copyright © 2016年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NIMSessionPrivateProtocol.h"
#import "NIMSessionConfigurateProtocol.h"

@class NIMKitMediaFetcher;

@interface NIMSessionInteractorImpl : NSObject<NIMSessionInteractor,NIMSessionLayoutDelegate>

- (instancetype)initWithSession:(NIMSession *)session
                         config:(id<NIMSessionConfig>)sessionConfig;

@property(nonatomic,weak) id<NIMSessionInteractorDelegate> delegate;

@property(nonatomic,strong) id<NIMSessionDataSource> dataSource;

@property(nonatomic,strong) id<NIMSessionLayout>     layout;


@property (nonatomic,strong) NIMSession  *session;

@property (nonatomic,strong) id<NIMSessionConfig> sessionConfig;

@property (nonatomic,strong) NIMKitMediaFetcher *mediaFetcher;

@property (nonatomic,strong) NSMutableArray *pendingChatroomModels;

@property (nonatomic,strong) NSMutableArray *pendingAudioMessages;

@property (nonatomic,assign) NIMKitSessionState sessionState;

@property (nonatomic,strong) NIMMessage *referenceMessage;
typedef void(^NIMSessionInteractorHandler) (BOOL success, id result);

- (void)refreshAllChatExtendDatasByModels:(NSArray<NIMMessageModel *> *)models
                               completion:(NIMSessionInteractorHandler)completion;
- (void)insertMessages:(NSArray *)messages;
- (void)processChatroomMessageModels;
@end
