/*
PIC 10B Homework 4, bank_account_demo
Author: Matthew Napoli
UID: 005690610
Discussion Section: 1A
Date: 02/06/2023
*/

#include "Card.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{
    startUp();
    vector<Card> wallet = {};
    int cardChoice = -1;
    while(cardChoice != 0)
    {
        cout << "Card type : ";
        cin >> cardChoice;
        if(cardChoice == 1)
        {
            Card card1;
            card1 = card1.getInput();
            wallet.push_back(card1);
        }
        if(
    }
    
    
    return 0;
}
