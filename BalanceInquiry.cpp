//
//  BalanceInquiry.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include "BalanceInquiry.h"
#include "Screen.h"
#include "BankDatabase.h"


BalanceInquiry:: BalanceInquiry(int userAccountNumber, Screen &atmScreen,
                                BankDatabase &atmBankDatabase):
    Transaction(userAccountNumber, atmScreen, atmBankDatabase)
{
  
}

// performs transaction; overrides Transaction's pure virtual function
void BalanceInquiry::execute()
{
   // get references to bank database and screen
   BankDatabase& bankDatabase = getBankDatabase();
   Screen& screen = getScreen();

   // get total balance for current user's Account
   double totalBalance = bankDatabase.getTotalBalance(getAccountNumber());
   
   // display balance on screen
   screen.displayMessageLine("\nBalance Information:");
   screen.displayMessage("\n - Total balance:     ");
   screen.displayDollarAmount(totalBalance);
   screen.displayMessageLine("");
}