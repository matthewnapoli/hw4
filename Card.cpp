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

void startUp() //compartmentalizing the startup console out
{
    cout << "********************" << endl;
    cout << "*  Wallet Printer! *" << endl;
    cout << "********************" << endl << endl;
    
    cout << "Print Cards by selecting the type (0 when done) :" << endl << endl;
    cout << "1. Basic Card" << endl;
    cout << "2. ID Card" << endl;
    cout << "3. Bank Card" << endl << endl;
}

Card::Card() //default constructor
{
    instit = "";
    name = "";
    exp_date = -1;
}
Card::Card(string instit_inp, string name_inp, int exp_date_inp) //initializer constructor
{
    instit = instit_inp;
    name = name_inp;
    exp_date = exp_date_inp;
}

void Card::printCard(const Card& card_inp)
{
    
}

string Card::get_instit() const{
    return instit;
}

string Card::get_name() const{
    return name;
}

int Card::get_exp_date() const{
    return exp_date;
}

void Card::set_instit(string instit_new){
    instit = instit_new;
}

void Card::set_name(string name_new){
    name = name_new;
}
void Card::set_exp_date(int exp_date_new){
    exp_date = exp_date_new;
}

Card Card::getInput()
{
    string instit_for_input;
    string name_for_input;
    int exp_date_for_input;
    cout << "Intstitution name : ";
    cin >> instit_for_input;
    cout << "Card holder name : ";
    cin >> name_for_input;
    cout << "Expiration date mmddyyyy (0 if none) : ";
    cin >> exp_date_for_input;
    cout << endl << endl;
    Card card1(instit_for_input,name_for_input, exp_date_for_input);
    return card1;
}
    
IDCard::IDCard getInput()
{
    
}
    
void printCard(const IDCard& card_inp);

