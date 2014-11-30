//
//  ViewController.h
//  PrimeiroObjectiveC
//
//  Created by Nuno Cardoso on 27/11/14.
//  Copyright (c) 2014 Nuno Cardoso. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UITableViewController

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;
@end

