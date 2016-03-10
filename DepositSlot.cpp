//
//  DepositSlot.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include "DepositSlot.h" 

// indicates whether envelope was received (always returns true, 
// because this is only a software simulation of a real deposit slot)
bool DepositSlot::isEnvelopeReceived() const
{
    return true; // deposit envelope was received
}