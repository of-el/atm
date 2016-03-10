//
//  ATM.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef ATM_H
#define ATM_H

#include "Screen.h"
#include "Keypad.h"
#include "CashDispenser.h"
#include "DepositSlot.h"
#include "BankDatabase.h"

class Transaction;

class ATM
{
public:
   ATM();
   void run(); // start the ATM
private:
   bool userAuthenticated; // whether user is authenticated
   int currentAccountNumber; // current user's account number
   Screen screen; // ATM's screen
   Keypad keypad; // ATM's keypad
   CashDispenser cashDispenser; // ATM's cash dispenser
   DepositSlot depositSlot; // ATM's deposit slot
   BankDatabase bankDatabase; // account information database

   // private utility functions
   void authenticateUser(); // attempts to authenticate user
   void performTransactions(); // performs transactions
   int displayMainMenu() const; // displays main menu

   // return object of specified Transaction derived class
   Transaction* createTransaction(int); 
};

#endif // ATM_H
