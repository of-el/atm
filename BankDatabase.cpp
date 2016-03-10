//
//  BankDatabase.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include "BankDatabase.h" 

BankDatabase::BankDatabase()
{
    // create Account objects
    Account account1(12345, 54321, 1750.0);
    Account account2(98765, 56789, 510.0);
    Account account3(24680, 00642, 3789.0);
    
    // add the Account objects to the vector accounts
    accounts.push_back(account1);
    accounts.push_back(account2);
    accounts.push_back(account3);
}

// retrieve specified account number
Account* BankDatabase::getAccount(int accountNumber)
{
    // loop through accounts searching for matching account number
    for (size_t i = 0; i < accounts.size(); i++)
    {
        // return current account if match found
        if ( accounts[i].getAccountNumber() == accountNumber)
            return& accounts[i];
    }

    return NULL; // if no matching account was found, return NULL
}

// determine if account number and PIN match
// those of an account in the database
bool BankDatabase::authenticateUser(int userAccountNumber, int userPIN)
{
    // attempt to retrieve the account with the account number
    Account* const userAccountPtr = getAccount(userAccountNumber);

    // if account exists, return result of Account function validatePIN
    if (userAccountPtr != NULL)
        return userAccountPtr->validatePIN(userPIN);
    else
        return false; // account number not found, so return false
}

// return total balance of Account with specified account number
double BankDatabase::getTotalBalance(int userAccountNumber)
{
    Account* const userAccountPtr = getAccount(userAccountNumber);
    return userAccountPtr->getTotalBalance();
}

// credit an amount to Account with specified account number
void BankDatabase::credit(int userAccountNumber, double amount)
{
    Account* const userAccountPtr = getAccount(userAccountNumber);
    userAccountPtr->credit(amount);
}

// debit an amount from Account with specified account number
void BankDatabase::debit(int userAccountNumber, double amount)
{
    Account* const userAccountPtr = getAccount(userAccountNumber);
    userAccountPtr->debit(amount);
}