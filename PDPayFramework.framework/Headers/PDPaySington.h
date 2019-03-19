//
//  PDPaySington.h
//  PDPay
//
//  Created by Mac on 2019/2/22.
//  Copyright © 2019年 PeiDou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    PDLoadPayTypePayment = 0,//还款支付
    PDLoadPayTypeAdvancePayment,     //提前还款支付
}PDLoadPayType;

NS_ASSUME_NONNULL_BEGIN

@interface PDPaySington : NSObject



+(PDPaySington *)shareSingle;

//现金贷数据
//提前还款支付交易账单ID
@property (nonatomic,copy) NSString *advancePayBillId;
//还款支付交易账单ID
@property (nonatomic,copy) NSString *payBillId;
@property (nonatomic,assign) PDLoadPayType loadPayType;

//支付标志（用于判断是否是现金贷支付）
@property (nonatomic,assign) int loadPaymentPayType;

@property (nonatomic,strong) UIViewController *vc;

//存储商品ID
@property (nonatomic,copy) NSString *productId;

//用嘛APP token值
@property (nonatomic,assign) NSString *pdymToken;
@end

NS_ASSUME_NONNULL_END
