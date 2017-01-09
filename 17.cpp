#include <iostream>
#include <cstdlib>
using namespace std;
class DayOfYear
{
    private:
        int month;
        int day;
        void testDate();
    public:
        DayOfYear(int monthValue,int dayValue);
        DayOfYear(int monthValue);
        DayOfYear();
        void input();
        void output();
        int getMonthNumber;
        int getDay();
};
class Holiday
{
    public:
        Holiday();
        Holiday(int month,int day,bool theEnforcement);
        void output();
    private:
        DayOfYear date;
        bool parkingEnforcement;
};
int main()
{
    Holiday h(2,14,true);
    cout<<"dokimi ths klasis holiday\n";
    h.output();
}
Holiday::Holiday():date(1,1),parkingEnforcement(false)
{
    //skopimos adeio
}
Holiday::Holiday(int month,int day,bool theEnforcement):date(month,day),parkingEnforcement(theEnforcement)
{
    //skopimos adeio
}
void Holiday::output()
{
    date.output();
    cout << endl;
    if (parkingEnforcement)
    {
        cout <<"Tha epivlithoyn metra stathmeysis\n";
    }
    else{
        cout<<"Den tha epivlithoyn metra stathmeysis\n";
    }
}
DayOfYear::DayOfYear(int monthValue,int dayValue):month(monthValue),day(dayValue)
{
    testDate();
}
void DayOfYear::testDate()
{
    if ((month<1)||(month>12))
    {
        cout <<"mh egiri timi mina!!\n";
        exit(1);
    }
    if ((day<1)||(day>31))
    {
        cout <<"mh egiri timi meras\n";
        exit(1);
    }
}
void DayOfYear::output()
{
    cout<<day;
    switch(month)
    {
        case 1:
            cout<<"Ianoyarioy";break;
        case 2:
            cout<<"fevroyarioy";break;
        case 3:
            cout<<"martioy";break;
        case 4:
            cout<<"Aprilioy";break;
        case 5:
            cout<<"Maioy";break;
        case 6:
            cout<<"ioynioy";break;
        case 7:
            cout<<"ioylioy";break;
        case 8:
            cout<<"Aygoystoy";break;
        case 9:
            cout<<"Septembrioy";break;
        case 10:
            cout<<"Oktombrioy";break;
        case 11:
            cout<<"Noembrioy";break;
        case 12:
            cout<<"Dekembrioy";break;
        default:
            cout<<"SFALMA sthn dayofyear::output\n"
                <<"epikoinoniste me ton politi toy logismikoy";
    }
    cout<<day;
}
