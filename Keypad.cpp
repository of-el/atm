//
//  Keypad.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include <iostream>
#include "Keypad.h" 

using namespace std;

// return an integer value entered by user
int Keypad::getInput() const
{
   int input; // variable to store the input
   cin >> input; // we assume that user enters an integer
   return input; // return the value entered by user
}