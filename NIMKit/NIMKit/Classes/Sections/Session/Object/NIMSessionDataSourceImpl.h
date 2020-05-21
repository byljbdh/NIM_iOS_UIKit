//
//  NIMSessionTableData.h
//  NIMKit
//
//  Created by chris on 2016/11/7.
//  Copyright © 2016年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NIMSessionConfigurateProtocol.h"
#import "NIMSessionPrivateProtocol.h"
#import "NIMSessionConfig.h"

@class NIMSessionMsgDatasource;

@interface NIMSessionDataSourceImpl : NSObject<NIMSessionDataSource>

@property (nonatomic,strong) NIMSession *session;

@property (nonatomic,strong) NIMSessionMsgDatasource *dataSource;

@property (nonatomic,strong) NSMutableArray *pendingMessages;   //缓存的插入消息,聊天室需要在另外个线程计算高度,减少UI刷新

@property (nonatomic,strong) id<NIMSessionConfig> sessionConfig;

- (instancetype)initWithSession:(NIMSession *)session
                         config:(id<NIMSessionConfig>)sessionConfig;

@end
