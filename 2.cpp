//Υπολογιζει το εμβαδον ενοσ κυκλου και τον ογκο μιας σφαιρας
//Χρησημοποιει την ιδια ακτινα και για τους δυο υπολογισμους.
#include <iostream>
#include <cmath>
using namespace std;
const double PI=3.14159;

double area(double radius);
//Επιστρεφει το εμβαδον του κυκλου με την καθορισμενη ακτινα
double volume(double radius);
//Επιστρεφει τον ογκο της σφαιρας με την καθορισμενη ακτινα
int main(){
    double radiusOfBoth,AreaOfCircle, volumeOfSphere;
    cout << "Δωσε την ακτινα που θα χρησημοποιηθει και για τον\n"
        <<"κυκλο και για την σφαιρα (σε εκατοστα): "<<endl;
    cin >> radiusOfBoth;
    AreaOfCircle = area(radiusOfBoth);
    volumeOfSphere = volume(radiusOfBoth);
    cout << "Ακτινα= "<< radiusOfBoth<<" εκατοστα"<< endl;
    cout << "Εμβαδον= "<< AreaOfCircle<<" τετραγωνικα εκατοστα"<< endl;
    cout << "Ογκος= "<< volumeOfSphere<<" κυβικα εκατοστα"<<endl;
    return 0;
}
double area(double radius)
{
    return (PI * pow(radius,2));
}
double volume(double radius)
{
    return ((4.0/3.0)*PI * pow(radius,3));
}
