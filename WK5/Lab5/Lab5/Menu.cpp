//
//  Menu.cpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Menu.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <cstdlib>
using std::atoi;

/***********************************************************************
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Create an unchanged copy of the original file." << endl
    << "2. Transform each character in the file to uppercase." << endl
    << "3. Perform encryption." << endl
    << "4. Quit." << endl;
}

/***********************************************************************
 * This function gets the user's menu choice, validates it, and returns
 * it back to main.
 ***********************************************************************/
int user_selection()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures user input only contains valid numbers
    do
    {
        getline(cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("1234", 0));
        
        if (found1 != 4294967295 || number.size() > 1)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 1 and 4: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 1);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}
