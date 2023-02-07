/*
PIC 10B Homework 4, bank_account_demo
Author: Matthew Napoli
UID: 005690610
Discussion Section: 1A
Date: 02/06/2023
*/

#ifndef Card_hpp
#define Card_hpp

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>



using namespace std;

void startUp();

class Card
{
private:
    string instit;
    string name;
    int exp_date;
public:
    Card();
    Card(string instit_inp, string name_inp, int exp_date_inp);
    string get_instit() const;
    string get_name() const;
    int get_exp_date() const;
    void set_instit(string instit_new);
    void set_name(string name_new);
    void set_exp_date(int exp_date_new);
    void printCard(const Card& card_inp);
    Card getInput();
    };

class IDCard : public Card
{
private:
    int id_num;
    int d_o_b;
public:
    IDCard getInput();
    void printCard(const IDCard& card_inp);
}
#endif
