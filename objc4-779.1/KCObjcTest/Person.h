//
//  Person.h
//  KCObjcTest
//
//  Created by MOMO on 2020/7/26.
//

#import <Foundation/Foundation.h>
#import "Dog.h"

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSUInteger age;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, weak) Dog *dd;
@property (nonatomic, strong) Dog *ddd;

- (void)eat;
- (void)work;

@end

NS_ASSUME_NONNULL_END
