//
//  FailedBankDetails.h
//  PrimeiroObjectiveC
//
//  Created by Nuno Cardoso on 30/11/14.
//  Copyright (c) 2014 Nuno Cardoso. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) FailedBankInfo *info;

@end
