//
//  Withdrawal.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "Transaction.h"

class Keypad;
class CashDispenser;

class Withdrawal : public Transaction
{
public:
   Withdrawal(int, Screen&, BankDatabase&, Keypad&, CashDispenser&);
   virtual void execute(); // perform transaction
    
private:
   int amount; // amount to withdraw
   Keypad& keypad; // reference to ATM's keypad
   CashDispenser& cashDispenser; // reference to ATM's dispenser
   int displayMenuOfAmounts() const; // display withdrawal menu
};

#endif