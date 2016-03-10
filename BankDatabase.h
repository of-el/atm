//
//  BankDatabase.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef BANK_DATABASE_H
#define BANK_DATABASE_H

#include <vector> 
#include "Account.h"

using namespace std;

class BankDatabase
{
public:
   BankDatabase(); // constructor initializes accounts

   // determine whether account number and PIN match those of an Account
   bool authenticateUser(int, int); // returns true if Account authentic

   double getAvailableBalance(int); // get an available balance
   double getTotalBalance(int); // get an Account's total balance
   void credit(int, double); // add amount to Account balance
   void debit(int, double); // subtract amount from Account balance
private:
   vector<Account> accounts; // vector of the bank's Accounts

   // private utility function
   Account* getAccount(int); // get pointer to Account object
};

#endif // BANK_DATABASE_H