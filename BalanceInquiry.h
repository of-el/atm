//
//  BalanceInquiry.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef BALANCE_INQUIRY_H
#define BALANCE_INQUIRY_H

#include "Transaction.h"

class BalanceInquiry : public Transaction
{
public:
   BalanceInquiry(int, Screen&, BankDatabase&);
   virtual void execute(); // perform the transaction
};

#endif // BALANCE_INQUIRY_H