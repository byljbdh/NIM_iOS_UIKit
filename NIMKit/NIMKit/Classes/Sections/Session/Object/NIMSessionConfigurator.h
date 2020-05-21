//
//  NIMSessionViewConfigurator.h
//  NIMKit
//
//  Created by chris on 2016/11/7.
//  Copyright © 2016年 NetEase. All rights reserved.
//

#import "NIMSessionViewController.h"
#import "NIMSessionConfigurateProtocol.h"

@class NIMSessionViewController,NIMSessionInteractorImpl,NIMSessionTableAdapter;

@interface NIMSessionConfigurator : NSObject

@property (nonatomic,strong) NIMSessionInteractorImpl   *interactor;

@property (nonatomic,strong) NIMSessionTableAdapter     *tableAdapter;
- (void)setup:(NIMSessionViewController *)vc;


@end
