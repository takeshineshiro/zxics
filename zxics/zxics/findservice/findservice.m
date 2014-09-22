//
//  findservice.m
//  zxics
//
//  Created by johnson on 14-9-22.
//  Copyright (c) 2014年 moko. All rights reserved.
//

#import "findservice.h"
#import "AppDelegate.h"
#import "succourlist.h"

@interface findservice ()

@end

@implementation findservice

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

//特殊人群关怀页面跳转
-(IBAction)specialpeople:(id)sender
{
    SpecialPeople * _SpecialPeople=[[SpecialPeople alloc] init];
    
    [self.navigationController pushViewController:_SpecialPeople animated:NO];
}

//生活管家页面跳转
-(IBAction)lifemd:(id)sender
{
    lifemd * _lifemd=[[lifemd alloc] init];
    
    [self.navigationController pushViewController:_lifemd animated:NO];
}

//投诉管理页面跳转
-(IBAction)complainlist:(id)sender
{
    AppDelegate *myDelegate = [[UIApplication sharedApplication] delegate];
    if (myDelegate.entityl) {
        complainlist * _complainlist=[[complainlist alloc] init];
        
        [self.navigationController pushViewController:_complainlist animated:NO];
    }else
    {
        NSString *rowString =@"请先登陆！";
        UIAlertView * alter = [[UIAlertView alloc] initWithTitle:@"提示" message:rowString delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil, nil];
        [alter show];
    }
}

//救助申请页面跳转
-(IBAction)succourlist:(id)sender
{
    AppDelegate *myDelegate = [[UIApplication sharedApplication] delegate];
    if (myDelegate.entityl) {
        succourlist * _succourlist=[[succourlist alloc] init];
        
        [self.navigationController pushViewController:_succourlist animated:NO];
    }else{
        NSString *rowString =@"请先登陆！";
        UIAlertView * alter = [[UIAlertView alloc] initWithTitle:@"提示" message:rowString delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil, nil];
        [alter show];
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end