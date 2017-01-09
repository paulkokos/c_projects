#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
struct CDAccount
{
    double initialBalance;
    double interestRate;
    int term;
    Date maturity;
    double balanceAtMaturity;
};
void getCDData(CDAccount& theAccount);
void getDate(Date theDate);
int main()
{
    CDAccount account;
    double rateFraction,interest;
    cout<<"Δωστε τα δεδομενα του λογαριασμου την ημερα "
        <<" που ανοιχτηκε ο λογαριασμος: \n";
    getCDData(account);
    rateFraction=account.interestRate/100.0;
    interest=account.initialBalance*(rateFraction*(account.term/12.0));
    account.balanceAtMaturity=account.initialBalance+interest;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Οταν το CD σας ληξει στις "<< account.maturity.day
        <<" - "<<account.maturity.month <<" - "<<account.maturity.year
        <<" "<<endl<<"θα εχει υπολοιπο "<<account.balanceAtMaturity<<endl;
    return 0;
}
void getCDData(CDAccount& theAccount)
{
    cout<<"Δωστε το αρχικο υπολοιπο του λογαριασμου σε ευρω\n";
    cin>> theAccount.initialBalance;
    cout<<"Δωστε το επιτοκιο του λογαριασμου: ";
    cin>> theAccount.interestRate;
    cout<<"Δωστε τον αριθμο μηνων μεχρι την ληξη: ";
    cin >> theAccount.term;
    cout<<"Δωστε την ημερομηνια ληξης: ";
    getDate(theAccount.maturity);
}
void getDate(Date theDate)
{
    cout<<"Δωστε ημερα: ";
    cin >> theDate.day;
    cout<<"Δωστε μηνα: ";
    cin >> theDate.month;
    cout<<"Δωστε ετος: ";
    cin >> theDate.year;
}
