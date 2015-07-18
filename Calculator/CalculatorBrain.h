//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Anakha Palissery on 12-12-19.
//  Copyright (c) 2012 University of Waterloo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
