#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


class BankAccount
{
    public:
        BankAccount(double balance,double rate);
        BankAccount(int euro,int cents,double rate);
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
        void setRate(double newRate);

    private:
        int accountEuro;
        int accountCents;
        double rate;
        double fraction(double percent);
        int euroPart(double ammount);
        int centPart(double ammount);
        int round(double number);
};
#endif // BANKACCOUNT_H
