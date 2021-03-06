//
//  AmateurRuleTest.m
//  Basketballer
//
//  Created by sungeo on 14-1-14.
//
//

#import <XCTest/XCTest.h>

#import "../Basketballer/AmateurRule.h"
#import "../Basketballer/GameSetting.h"

@interface AmateurRuleTest : XCTestCase

@end

@implementation AmateurRuleTest

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample
{
    AmateurRule * rule = [[AmateurRule alloc] initWithMode:kMatchModeAmateur25];
    
    XCTAssertNotNil(rule, @"AmateurRule");
    XCTAssertEqual(rule.regularPeriodNumber, 2, @"regularPeriodNumber");
    XCTAssertEqual(rule.periodLength, 25*60, @"periodLength");
}

@end
