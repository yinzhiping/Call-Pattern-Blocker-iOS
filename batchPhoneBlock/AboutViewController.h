//
//  AboutViewController.h
//  batchPhoneBlock
//
//  Created by legend on 2017/9/10.
//  Copyright © 2017年 legend. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property (nonatomic, retain) NSArray *infoDataList;
@property (nonatomic, retain) UITableView *infoTableView;
@end
