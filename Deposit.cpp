//
//  Deposit.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include "Deposit.h"
#include "Screen.h"
#include "BankDatabase.h"
#include "Keypad.h"
#include "DepositSlot.h"

static const int CANCELED = 0; // constant representing cancel option 

Deposit::Deposit(int userAccountNumber, Screen& atmScreen, BankDatabase& atmBankDB,
                 Keypad& atmKeypad, DepositSlot& atmDepositSlot):
    Transaction(userAccountNumber, atmScreen, atmBankDB),
    keypad(atmKeypad), depositSlot(atmDepositSlot)
{
   
}

// performs transaction; overrides Transaction's pure virtual function 
void Deposit::execute()
{
    BankDatabase& bankDB = getBankDatabase(); // get reference
    Screen& screen = getScreen(); // get reference

    amount = promptForDepositAmount(); // get deposit amount from user

    // check whether user entered a deposit amount or canceled
    if (amount != CANCELED)
    {
        // request deposit envelope containing specified amount
        screen.displayMessage("\nPlease insert a deposit envelope containing ");
        screen.displayDollarAmount(amount);
        screen.displayMessageLine(" in the deposit slot.");

        // receive deposit envelope
        bool envelopeReceived = depositSlot.isEnvelopeReceived();

        // check whether deposit envelope was received
        if (envelopeReceived)
        {
            screen.displayMessageLine("\nYour envelope has been received."
                                      "\nNOTE: The money deposited will not be available until we"
                                      "\nverify the amount of any enclosed cash, and any enclosed "
                                      "checks clear.");
         
            // credit account to reflect the deposit
            bankDB.credit(getAccountNumber(), amount);
        }
        else // deposit envelope not received
        {
            screen.displayMessageLine("\nYou did not insert an "
                                      "envelope, so the ATM has canceled your transaction.");
        }
    }
    else // user canceled instead of entering amount
    {
        screen.displayMessageLine("\nCanceling transaction...");
    }
}

// prompt user to enter a deposit amount in cents 
double Deposit::promptForDepositAmount() const
{
    Screen &screen = getScreen(); // get reference to screen

    // display the prompt and receive input
    screen.displayMessage("\nPlease enter a deposit amount in "
                          "CENTS (or 0 to cancel): ");
    int input = keypad.getInput(); // receive input of deposit amount
   
    // check whether the user canceled or entered a valid amount
    if (input == CANCELED)
        return CANCELED;
    else
    {
        return static_cast<double>(input) / 100; // return dollar amount
    }
} 