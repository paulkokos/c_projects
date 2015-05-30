#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include "../test1.h"
class BankAccount
{
    private:
       int accountEuro;     //toy ypoloipoy
       int accountCents;    //toy ypoloipoy
       double rate;         //epi tois ekato
       int euroPart(double ammount);
       int centsPart(double ammount);
       int round(double number);
       double fraction(double percent);
    public:
        BankAccount(int euro,int cents,double rate);
        BankAccount(double balance,double rate);
        BankAccount(int euro,double rate);
        BankAccount();
        void update();
        void input();
        void output();
        double getBalance();
        int getEuro();
        int getCents();
        double getRate();
        void setBalance(double balance);
        void setBalance(int euro,int cents);
        void setRate(double newRate);
};
using namespace std;
int main()
{
    BankAccount account1(1234.34,2.3), account2;
    cout <<"O account1 pairnei os arxiki timi\n";
    account1.output();
    cout <<"O account2 pairnei os arxiki timi\n";
    account2.output();
    account1=BankAccount(999,99,5.5);
    cout <<"O account1 arxikopoiite os eksis\n";
    account1.output();
    cout <<"Doste nea dedomena gia ton account2:\n ";
    account2.input();
    cout << "O account 2 arxikopoiite ek neoy os eksis:\n";
    account2.output();
    account2.update();
    cout << "se ena xrono o account2 tha ayksithei se: \n";
    account2.output();



}
BankAccount::BankAccount(double balance,double rate):accountEuro(euroPart(balance)),accountCents(centsPart(balance))
{
    setRate(rate);
}
BankAccount::BankAccount(int euro,int cents,double rate)
{
    setBalance(euro,cents);
    setRate(rate);
}
BankAccount::BankAccount(int euro, double rate):accountEuro(euro),accountCents(0)
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
    accountEuro=euroPart(balance);
    accountCents-centsPart(balance);
}
void BankAccount::input()
{
    double balanceAsDouble;
    cout << "Doste to ypoloipo toy logariasmoy se euro: ";
    cin>> balanceAsDouble;
    accountEuro=euroPart(balanceAsDouble);
    accountCents=centsPart(balanceAsDouble);
    cout <<"doste to epitokio (xoris to symbolo %): ";
    cin >> rate;
    setRate(rate);
}
void BankAccount::output()
{
    int absEuro = abs(accountEuro);
    int absCents = abs(accountCents);
    cout <<"Ypoloipo logariasmoy: ";
    if (accountEuro<0)
    cout << "-";
    cout <<absEuro<<" Euro";
    if (absCents>=10)
        cout<<"."<<absCents<<endl;
    else
        cout << "."<<'0'<<absCents<<endl;
    cout <<"Rate: "<< rate<<" %\n";
}
double BankAccount::getBalance()
{
    return (accountEuro+accountCents*0.01);
}
int BankAccount::getEuro()
{
    return accountEuro;
}
int BankAccount::getCents()
{
    return accountCents;
}
void BankAccount::setRate(double newRate)
{
    if (newRate>=0.0)
    {
        rate=newRate;
    }
    else
    {
        cout<< "Den mporei na exoume arnitiko epitokio"<<endl;
        exit(1);
    }
}

double BankAccount::getRate()
{
    return rate;
}
void BankAccount::setBalance(double balance)
{
    accountCents=centsPart(balance);
    accountEuro=euroPart(balance);
}
void BankAccount::setBalance(int euro,int cents)
{
    if((euro<0 && cents>0)||(euro>0 && cents < 0))
    {
        cout << "akatallila dedomena logariasmoy\n";
        exit(1);
    }
    accountCents=cents;
    accountEuro=euro;
}
/*void BankAccount::setRate(double newRate)
{
    if (newRate>=0)
    {
        rate=newRate;
    }
    else
    {
        cout << "Den mporoyme na exoyme arnitiko epitokio"endl;
        exit(1);
    }
}*/
int BankAccount::euroPart(double ammount)
{
    return static_cast<int>(abs(ammount));
}
int BankAccount::centsPart(double ammount)
{
    double doubleCents=ammount*100;
    int intCents=(round(fabs(doubleCents)))%100;
    if (ammount<0)
    {
        intCents=-intCents;
        return intCents;
    }
}
int BankAccount::round(double number)
{
    return static_cast<int>(floor(number+0.5));
}
double BankAccount::fraction(double percent)
{
    return (percent/100.0);
}

