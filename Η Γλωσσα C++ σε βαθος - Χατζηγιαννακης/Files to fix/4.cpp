//Παρουσιαζει την διαφορα μεταξυ μιας παραμετρου κλησης με
//τιμη και μιας παραμετρου κλησης με αναφορα.
#include <iostream>
using namespace std;
void doStuff(int par1Value,int& par2Ref);
//H par1Value ειναι μια τυπικη παραμετρος κλησης με τιμη.
//Η par2Ref ειναι μια τυπικη παραμετρος με αναφορα.
int main()
{
    int n1,n2;
    n1=1;
    n2=2;
    doStuff(n1,n2);
    cout<<"Η n1 μετα απο την κληση ειναι "<<n1<<endl;
    cout<<"H n2 μετα απο την κληση ειναι "<<n2<<endl;
    return 0;
}
void doStuff(int par1Value,int& par2Ref)
{
    par1Value=111;
    cout << "Η par1Value κατα την διαρκεια της κλησης ειναι "<< par1Value<< endl;
    par2Ref=222;
    cout << "Η par2Ref κατα την διαρκεια της κλησης ειναι " << par2Ref<< endl;
}
