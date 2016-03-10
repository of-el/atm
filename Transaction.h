//
//  Transaction.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef TRANSACTION_H
#define TRANSACTION_H

// forward declarations
class Screen;
class BankDatabase;

class Transaction
{
public:
   Transaction(int, Screen&, BankDatabase&);
    
   virtual ~Transaction() { } // virtual destructor with empty body
   
   int getAccountNumber() const; // return account number
   Screen& getScreen() const; // return reference to screen
   BankDatabase& getBankDatabase() const; // return reference to database

   // pure virtual function to perform the transaction
   virtual void execute() = 0;
    
private:
   int accountNumber; // indicates account involved
   Screen& screen; // reference to the screen of the ATM
   BankDatabase& bankDatabase; // reference to the account info database
};

#endif // TRANSACTION_H