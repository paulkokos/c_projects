#include <iostream>
using namespace std;
class DayOfYear
{
    public:
        void output( );
        int day;
        int month;
};
int main()
{
    DayOfYear today,birthday;
    cout << "Δωστε την συμερινη ημερομηνια\n";
    cout << "\nΔωστε την ημερα του μηνα";
    cin>> today.day;
    cout<<"\nΔωστε τον μηνα ως αριθμο";
    cin>>today.month;
    cout <<"Δωστε την ημερομηνια τον γενεθλιων σας\n";
    cout<<"\nΔωστε την ημερα του μηνα";
    cin >> birthday.day;
    cout<<"\nΔωστε το μηνα ως αριθμο";
    cin >>birthday.month;

    cout<<"\nΗ συμερινη ημερομηνια ειναι ";
    today.output( );
    cout<<endl;
    cout<<"\nΤα γενεθλια σας ειναι στις ";
        birthday.output( );
    cout<<endl;
    if ((today.day==birthday.day)&&(today.month==birthday.month))
        cout<<"Χρονια Πολλα!!\n";
    else
        cout <<"Οχι χρονια πολλα!\n";
    return 0;

}
void DayOfYear::output()
{
cout<<day;
switch (month)
    {
    case 1:
        cout<<"Ιανουαριου";break;
    case 2:
        cout<<"Φεβρουαριου";break;
    case 3:
        cout<<"Μαρτιου";break;
    case 4:
        cout<<"Απριλιου";break;
    case 5:
        cout<<"Μαιου";break;
    case 6:
        cout<<"Ιουνιου";break;
    case 7:
        cout<<"Ιουλιου";break;
    case 8:
        cout<<"Αυγουστου";break;
    case 9:
        cout<<"Σεπτεμβριου";break;
    case 10:
        cout<<"Οκτωβριου";break;
    case 11:
        cout<<"Νοεμβριου";break;
    case 12:
        cout<<"Δεκεμβριου";break;
    default:
        cout<<"ΣΦΑΛΜΑ στην dayOfYear::output. \n"
            <<"Επικοινωνιστε με τον πωλητη του λογισμικου";
    }
}
