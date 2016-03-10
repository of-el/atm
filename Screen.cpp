//
//  Screen.cpp
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Screen.h" 

using namespace std;

// output a message without a newline
void Screen::displayMessage(string message) const
{
   cout << message; 
}

// output a message with a newline
void Screen::displayMessageLine(string message) const
{
   cout << message << endl;   
}

// output a dollar amount
void Screen::displayDollarAmount(double amount) const
{
   cout << "$" << amount;
}