//
//  IOS8AutoSizingCell.h
//  CellAutoSizing
//
//  Created by wangfang on 16/4/16.
//  Copyright © 2016年 WangDongYang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellModel.h"

static NSString *IOS8AutoSizingCellID = @"IOS8AutoSizingCell";

@class CellModel;
@interface IOS8AutoSizingCell : UITableViewCell
+ (instancetype)cellWithTableView:(UITableView *)tableView;

@property (nonatomic, strong) CellModel *cellM;
@end
