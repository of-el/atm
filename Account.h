//
//  Account.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account(int, int, double);
   bool validatePIN(int) const; // is user-specified PIN correct?
   double getTotalBalance() const; // returns total balance
   void credit(double); // adds an amount to the Account balance
   void debit(double); // subtracts an amount from the Account balance
   int getAccountNumber() const; // returns account number
private:
   int accountNumber; // account number
   int pin; // PIN for authentication
   double totalBalance; // funds available + funds waiting to clear
};

#endif // ACCOUNT_H


