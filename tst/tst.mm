
#include "header.h"
#import <XCTest/XCTest.h>

@interface test : XCTestCase

@end

@implementation test

- (void)test_lab {
    const int n = 9;
    int a[n];
    Inverse(a, n);
    
    XCTAssertNotEqual(n, 1);
    
    
}

@end
