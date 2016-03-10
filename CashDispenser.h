//
//  CashDispenser.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef CASH_DISPENSER_H
#define CASH_DISPENSER_H

class CashDispenser
{
public:
   CashDispenser(); // constructor initializes bill count to 500

   // simulates dispensing of specified amount of cash
   void dispenseCash(int);

   // indicates whether cash dispenser can dispense desired amount
   bool isSufficientCashAvailable(int) const;
    
private:
   static const int INIT_COUNT = 500;
   int count; // number of $20 bills remaining 
};

#endif // CASH_DISPENSER_H