//
//  FailedBankInfo.h
//  PrimeiroObjectiveC
//
//  Created by Nuno Cardoso on 30/11/14.
//  Copyright (c) 2014 Nuno Cardoso. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) FailedBankDetails *details;

@end
