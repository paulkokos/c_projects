#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


class BankAccount
{
    public:
        BankAccount(double balance, double rate);
        BankAccount(int euro, int cents,double);
        BankAccount(int euro,double rate);
        void update();
        void input();
        void output() const;
        double getBalance const;
        int getEuro() const;
        int getCents() const;
        double getRate() const;
        void setBalance(double balance);
        void setBalance(int euro,int cents);
        void setRate(double newRate);
//      ------------------------------
        BankAccount();
        virtual ~BankAccount();
    protected:
    private:
};

#endif // BANKACCOUNT_H
