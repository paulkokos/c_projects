#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "BankAccount.h"
#include <cmath>
using namespace std;


BankAccount::BankAccount(double balance,double rate):accountEuro(euroPart(balance)),accountCents(centPart(balance))
{
     setRate(rate);   //ctor
}
BankAccount::BankAccount(int euro,int cents,double rate)
{
    setBalance(euro,cents);
    setRate(rate);
}
BankAccount::BankAccount(int euro, double rate)
:accountEuro(euro),accountCents(0)
{
    setRate(rate);
}
BankAccount::BankAccount():accountEuro(0),accountCents(0),rate(0.0)
{
        //skopima adeio
}
void BankAccount::update()
{
    double balance=accountEuro+accountCents*0.01;
    balance=balance+fraction(rate)*balance;
    accountCents=centPart(balance);
    accountEuro=euroPart(balance);
}
void BankAccount::input()
{
    double balanceAsDouble;
    cout<<"Doste to ypoloipo toy logariasmoy se euro ";
    cin >> balanceAsDouble;
    accountEuro=euroPart(balanceAsDouble);
}
int BankAccount::euroPart(double ammount)
{
    return static_cast<int>(ammount);
}
void BankAccount::setRate(double newRate)
{
    if (newRate>=0.0)
        rate = newRate;
    else
    {
        cout<"Δεν μπορει να εχουμε αρνητικο επιτοκιο\n";
        exit(1);
    }
}
int BankAccount::centPart(double ammount)
{
    double doublecents=ammount*100;
    int intcents=(round(fabs(doublecents)))%100;
}
void BankAccount::setBalance(double balance)
{
    accountEuro=euroPart(balance);
    accountCents=centPart(balance);
}
double BankAccount::fraction(double percent)
{
    return (percent/100.0);
}
