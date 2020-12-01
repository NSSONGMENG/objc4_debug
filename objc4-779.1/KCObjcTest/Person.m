//
//  Person.m
//  KCObjcTest
//
//  Created by MOMO on 2020/7/26.
//

#import "Person.h"

@implementation Person

- (void)dealloc {
    NSLog(@"%s",__func__);
}

+ (void)initialize {
    NSLog(@"------- debug %s",__func__);
}


+ (void)load {
    NSLog(@"------- debug %s",__func__);
}

- (void)eat {
    NSLog(@"this person eat 3 times a day");
}

- (void)work {
    NSLog(@"this person works hard");
}


@end
