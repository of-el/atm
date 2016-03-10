//
//  CashDispenser.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include "CashDispenser.h"

// CashDispenser default constructor initializes count to default
CashDispenser::CashDispenser()
{
   count = INIT_COUNT; // set count attribute to default
}

// simulates dispensing of specified amount of cash; assumes enough cash 
// is available (previous call to isSufficientCashAvailable returned true)
void CashDispenser::dispenseCash(int amount)
{
   int billsRequired = amount / 20; // number of $20 bills required
   count -= billsRequired; // update the count of bills
}

// indicates whether cash dispenser can dispense desired amount
bool CashDispenser::isSufficientCashAvailable(int amount) const
{
   int billsRequired = amount / 20; // number of $20 bills required

   if (count >= billsRequired)
      return true; // enough bills are available
   else 
      return false; // not enough bills are available
}