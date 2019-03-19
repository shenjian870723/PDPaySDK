//
//  PDPayManager.h123
//  PDPay
//
//  Created by PeiDou on 2019/1/2.
//  Copyright © 2019年 PeiDou. All rights reserved.
//  1.1.7

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PDPayManager : NSObject

/**
 初始化
 */
+ (void)initializePDPaySDK;

/**
 日志打印

 @param iFlag YES/NO
 */
+ (void)isShowLog:(BOOL)iFlag;

/**
 进去二维码扫描界面

 @param vc 当前控制器
 @param aUserid 当前用户ID
 */
+ (void)showPDQRCodeViewController:(UIViewController *)vc withUserid:(NSString *)aUserid;

/**
 进入贷款列表界面

 @param vc 当前控制器
 @param aUserId 当前用户ID
 */
+ (void)showMoneyListController:(UIViewController *)vc withUserid:(NSString *)aUserId;

//验证微信请求成功方法
+ (void)getLoadPaymentResult:(NSDictionary *)params;
@end
