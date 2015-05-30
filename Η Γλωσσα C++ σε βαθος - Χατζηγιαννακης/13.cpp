#include <iostream>
#include <cstdlib>
using namespace std;
class DayOfYear
{
    private:
        int month;
        int day;
    public:
        void input();
        void output();
        void set(int newMonth,int newDay);
        void set(int newMonth);
        int getMonthNumber();
        int getDay();
        DayOfYear();
        ~DayOfYear();
};
int main()
{
    DayOfYear today,bachBirthday;
    cout << "Δωστε την συμερινη ημερομηνια: \n";
    today.input();
    cout << "Η συμερινη ημερομηνια ειναι: \n";
    today.output();
    cout<<endl;
    bachBirthday.set(3,21)
}
void DayOfYear::set(int newMonth,int newDay)
{
    if ((newMonth>=1) && (newMonth<=12))
        month=newMonth;
    else
        cout << "Μη Εγκυρη τιμη μηνα. Διακοπη προγραμματος\n";
        exit(1);
    if ((newDay>=1) && (newDay<=31))
        day=newDay;
    else
        cout << "Μη Εγκυρη τιμη ημερας. Διακοπη προγραμματος\n";
        exit(1);
}
void DayOfYear::set(int newMonth)
{
    if ((newMonth>=1) && (newMonth<=12))
        month=newMonth;
    else
        cout << "Μη Εγκυρη τιμη μηνα. Διακοπη προγραμματος\n";
        exit(1);
}
int DayOfYear::getMonthNumber()
{
    return month;
}
int DayOfYear::getDay()
{
    return day;
}
void DayOfYear::input()
{
    cout <<"Δωσε ημερα του μηνα";
    cin >> day;
    cout << "Δωσε μηνα ως αριθμο";
    cin >> month;
    if ((day<1) || (day>31) ||(month<1) || (month>12))
    cout << "Μη εγκυρη τιμη ημερομηνιας!Διακοπη προγραμματος.\n";
    exit(1);
}
void DayOfYear::output()
{
    cout << day;
    switch (month)
    {
        case 1:
            cout <<"Ιανουαριου";break;
        case 2:
            cout <<"Φεβρουαριου";break;
        case 3:
            cout <<"Μαρτιου";break;
        case 4:
            cout <<"Απριλιου";break;
        case 5:
            cout <<"Μαιου";break;
        case 6:
            cout <<"Ιουνιου";break;
        case 7:
            cout <<"Ιουλιου";break;
        case 8:
            cout <<"Αυγουστου";break;
        case 9:
            cout <<"Σεπτεμβριου";break;
        case 10:
            cout <<"Οκτωβριου";break;
        case 11:
            cout <<"Νοεμβριου";break;
        case 12:
            cout <<"Δεκεμβριου";break;
        default:
            cout << "Σφαλμα στην dayofyear::output. \n"
                <<"Επικοινωνηστε με τον πωλητη του λογισμικου\n";
        }
}
