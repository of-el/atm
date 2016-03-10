//
//  Transaction.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include "Transaction.h"
#include "Screen.h"
#include "BankDatabase.h"

// constructor initializes common features of all Transactions
Transaction::Transaction(int userAccNum, Screen& atmScreen, BankDatabase& atmBankDB):
    accountNumber(userAccNum),
    screen(atmScreen),
    bankDatabase(atmBankDB)
{
   
}

// return account number 
int Transaction::getAccountNumber() const
{
   return accountNumber; 
}

// return reference to screen
Screen& Transaction::getScreen() const
{
   return screen;
}

// return reference to bank database
BankDatabase& Transaction::getBankDatabase() const
{
   return bankDatabase;
} 