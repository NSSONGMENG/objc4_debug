//
//  main.m
//  KCObjcTest
//
//  Created by Cooci on 2020/3/5.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Person.h"
#import "Teacher.h"
#import "Dog.h"

static char *associatedObj;

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
        Teacher *t = [[Teacher alloc] init];
        [t teach];
        
        NSLog(@"%@", t.name);
        
        
        Dog *dd = [Dog new];
        dd.idd = @"22";
        t.dd = dd;
        
        Dog *ddd = [Dog new];
        dd.idd = @"222";
        t.ddd = ddd;
        
        Dog *d = [Dog new];
        d.idd = @"1";
        objc_setAssociatedObject(t, &associatedObj, d, OBJC_ASSOCIATION_RETAIN);
        
        NSLog(@"==----------==");
        {
            __weak id wk = t;
            __weak id wkk = t;
//            wk = t;
            [wk eat];
            wk = dd;
            
            printf("----##");
            wkk = wk;
        }
        
        NSLog(@"==----==");
        [t eat];
    }
    return 0;
}
