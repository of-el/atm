//
//  Account.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include "Account.h"

Account::Account(int theAccountNumber, int thePIN, double theTotalBalance):
    accountNumber(theAccountNumber),
    pin(thePIN),
    totalBalance(theTotalBalance)
{

}

// determines whether a user-specified PIN matches PIN in Account
bool Account::validatePIN( int userPIN ) const
{ 
   if ( userPIN == pin )
      return true;
   else
      return false;
}

// returns the total balance
double Account::getTotalBalance() const
{
   return totalBalance;
}

// credits an amount to the account
void Account::credit( double amount )
{
   totalBalance += amount; // add to total balance
}

// debits an amount from the account
void Account::debit( double amount )
{
   totalBalance -= amount; // subtract from total balance
}

// returns account number
int Account::getAccountNumber() const
{
   return accountNumber;  
} 