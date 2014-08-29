//
//  goodsDetail.h
//  zxics
//
//  Created by johnson on 14-8-11.
//  Copyright (c) 2014年 moko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface goodsDetail : UIViewController
{
    NSMutableArray *list;
    NSInteger page;
}

@property(retain , nonatomic) NSDictionary * gdsdetail;//商品详情

@property (weak, nonatomic) IBOutlet UIScrollView *introSView;
@property (weak, nonatomic) IBOutlet UINavigationBar *UINavigationBar;
@property (weak, nonatomic) IBOutlet UINavigationItem *UINavigationItem;
@property (strong, nonatomic) IBOutlet UIView *secondView;
@property (strong, nonatomic) IBOutlet UIView *thirdView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *shopprcLabel;
@property (weak, nonatomic) IBOutlet UILabel *marketprcLabel;
@property (weak, nonatomic) IBOutlet UILabel *goodsnoLabel;
@property (weak, nonatomic) IBOutlet UILabel *sellnoLabel;
@property (weak, nonatomic) IBOutlet UITextField *countnoLabel;
@property (weak, nonatomic) IBOutlet UIScrollView *goodsimageSView;
@property (weak, nonatomic) IBOutlet UIButton *detailButton;
@property (weak, nonatomic) IBOutlet UIButton *introductButton;
@property (weak, nonatomic) IBOutlet UIButton *assessButton;
@property (weak, nonatomic) IBOutlet UILabel *miaoshu;
@property (weak, nonatomic) IBOutlet UILabel *maoshuLabel;
@property (weak, nonatomic) IBOutlet UILabel *xiangqing;
@property (weak, nonatomic) IBOutlet UILabel *xiangqingLabel;
@property (weak, nonatomic) IBOutlet UITableView *assessTView;

@end
