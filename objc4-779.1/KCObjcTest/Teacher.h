//
//  Teacher.h
//  KCObjcTest
//
//  Created by MOMO on 2020/7/26.
//

#import <Foundation/Foundation.h>
#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Teacher : Person

@property (nonatomic, copy) NSString *className;
@property (nonatomic, assign) NSUInteger age;

- (void)teach;

@end

NS_ASSUME_NONNULL_END
