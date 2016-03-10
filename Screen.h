//
//  Screen.h
//  ATM
//
//  Created by Avel Aguilar on 10/19/15.
//  Copyright (c) 2015 Zilla. All rights reserved.
//

#ifndef SCREEN_H
#define SCREEN_H

#include <string>

using namespace std;

class Screen
{
public:
   void displayMessage(string) const; // output a message
   void displayMessageLine(string) const; // output message with newline
   void displayDollarAmount(double) const; // output a dollar amount
};

#endif