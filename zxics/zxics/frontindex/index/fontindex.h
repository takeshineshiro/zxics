//
//  fontindex.h
//  zxics
//
//  Created by johnson on 14-8-4.
//  Copyright (c) 2014年 moko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpecialPeople.h"
#import "login.h"
#import "lifemd.h"
#import "complainlist.h"
#import "surveylist.h"
#import "cplist.h"
#import "repairlist.h"
#import "personIndex.h"
#import "consultlist.h"
#import "Merchantslist.h"
#import "questionslist.h"
#import "rentorshelllist.h"
#import "prowantedlist.h"
#import "serviceIndex.h"

@interface fontindex : UIViewController<UIScrollViewDelegate>


@property (weak, nonatomic) IBOutlet UIScrollView *functionscroll;
@property (weak, nonatomic) IBOutlet UIPageControl *functionpage;
@property (strong, nonatomic) IBOutlet UIView *secondview;

@end