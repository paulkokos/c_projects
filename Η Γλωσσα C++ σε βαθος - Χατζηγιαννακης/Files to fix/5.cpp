#include <iostream>
using namespace std;
double unitPrice(int diameter, double price);
double unitPrice(int length, int width, double price);
int main()
{
    int diameter,lenght,width;
    double priceRound, unitPriceRound,
    priceRectangular,unitPriceRectangular;
    cout << "Καλως ηρθατε στο προγραμμα καταναλωσης πιτσας.\n";
    cout << "Δωσε την διαμετρο σε εκατοστα της στρογγυλης πιτσας: ";
    cin >> diameter;
    cout << "Δωσε την τιμη της στρογγυλης πιτσας σε ευρω: ";
    cin >> priceRound;
    cout << "Δωσε το μηκος και το πλατος σε εκατοστα\n "
        << "της ορθογωνιας πιτσας: ";
    cin>> lenght >> width;
    cout<< "Δωστε την τιμη της ορθογωνιας πιτσας σε ευρω: ";
    cin >> priceRectangular;
    unitPriceRectangular=unitPrice(lenght,width,priceRectangular);
    unitPriceRound=unitPrice(diameter,priceRound);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<endl
        <<"Στρογυλη πιτσα: Διαμετρος= "
        <<diameter<<" εκατοστα\n"
        <<"Τιμη= "<< priceRound<< "Ευρω\n"
        <<"Ανα τετραγωνικο εκατοστο = "<< unitPriceRound<<"Ευρω\n"<<endl
        <<"Ορθογωνια πιτσα: Μηκος= "<< lenght<<"Εκατοστα\n "<<endl
        <<"Ορθογωνια πιτσα: Πλατος= "<< width<< "Εκατοστα\n"<< endl
        <<"Price = "<< priceRectangular<< "Ευρω\n"
        <<"Ανα τετραγωνικο εκατοστο= "<<unitPriceRectangular<<"Ευρω"<<endl;
    if (unitPriceRound < unitPriceRectangular)
        cout << "Η στρογγυλη ειναι καλυτερη αγορα\n";
    else
        cout << "Η ορθογωνια ειναι καλυτερη αγορα\n";
        cout << "Καλη Ορεξη\n";
    return 0;

    return 0;
}
double unitPrice(int diameter, double price)
{
    const double PI=3.14159;
    double radius,area;
    radius=diameter/double(2);
    area=PI*radius*radius;
    return(price/area);
}
double unitPrice(int length, int width, double price)
{
    double area=length*width;
    return (price/area);
}
