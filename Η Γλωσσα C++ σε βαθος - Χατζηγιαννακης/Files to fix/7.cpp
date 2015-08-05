// διαβαζει δεδομενα και εμφανιζει ενα γραφημα ραβδων που
//δειχνει την παραγωγικοτητα καθε εργοστασιου.
#include <iostream>
#include <cmath>
#include "../functions.h"
using namespace std;
const int NUMBER_OF_PLANTS=4;
void inputData(int a[],int lastPlantNumber);
//προσυνθηκη   : lastplantnumber ειναι το δηλωμενο μεγεθος του πινακα
//μετασυνθηκη  : για plantnumber=1 μεχρι lastplantnumber
//το a[plantnumber-1] ισουται με την συνολικη παραγωγη του
//εργοστασιου νουμερο plantnumber

void scale(int a[],int size);
//προσυνθηκη:   τα a[] μεχρι a[size-1] εχουν το καθενα μη αρνητικη τιμη.
//μετασυνθηκη:  το a[i] εχει αλλαχθει σε αριθμο χιλιαδων (στρογγυλοποιημενο
//σε ακεραιο) που βρισκοταν αρχικα στο a[i],
//για καθε i, οπου 0<=i<=size-1

void graph(const int asteriskCount[],int lastPlantNumber);
//προσυνθηκη:    τα a[] μεχρι a[lastplantnumber-1] εχουν
//μη αρνιτικες τιμες
//μετασυνθηκη:   εμφανιζεται ενα γραφημα ραβδων που λεει οτι ο αριθμος
//Ν εχει παραγει a[N-1] χιλιαδες μοναδες για καθε Ν,οπου
//1<=Ν<=lastplantnumber

void getTotal(int& sum);
//Διαβαζει μη αρνητικους ακεραιους απο το πληκτρολογιο και
//τοποθετει το συνολο τους στην sum

int Round(double number);
//προσυνθηκη: number>=0
//επιστρεφει τη number στρογγυλοποιημενη στον πλυσιεστερερο ακεραιο

void printAsterisks(int n);
//Εμφανιζει ν αστερισκους στην οθονη

int main()
{
    int production[NUMBER_OF_PLANTS];
    cout<< "Αυτο το προγραμμα εμφανιζει ενα γραφημα που δειχνει \n "
        <<"την παραγωγη καθε εργοστασιου της εταιριας.\n";
    inputData(production,NUMBER_OF_PLANTS);
    scale(production,NUMBER_OF_PLANTS);
    graph(production,NUMBER_OF_PLANTS);
    return 0;
}
void inputData(int a[],int lastPlantNumber)
{
    for (int plantNumber=1;plantNumber<=lastPlantNumber;plantNumber++)
    {
        cout << endl << "\nΔωστε τα δεδομενα παραγωγης για το εργοστασιο"
            <<" νουμερο "<<plantNumber<<endl;
        getTotal(a[plantNumber-1]);
    }
}
void getTotal(int& sum)
{
    cout << "Δωστε τον αριθμο των μοναδων "
        << "που παραχθηκαν απο καθε τμημα.\n"
        << "προσθεστε εναν αρνητικο αριθμο στο τελος της λιστας\n";
    sum=0;
    int next;
    cin>> next;
    while (next>=0)
    {
        sum=sum+next;
        cin>>next;
    }
    cout<<"Συνολο:= "<<sum<<endl;
}
void scale (int a[],int size)
{
    for (int index=0;index<size;index++)
    {
        a[index]=Round(a[index]/1000.0);
    }
}
int Round(double number)
{
    return static_cast<int>(floor(number+0.5));
}
void graph(const int asteriskCount[],int lastPlantNumber)
{
    cout <<"\nΜοναδες που παραχθηκαν σε χιλιαδες μοναδες: \n";
    for (int plantNumber=1;plantNumber<=lastPlantNumber;plantNumber++)
    {
        cout << "Εργοστασιο #"<<plantNumber<<" ";
            printAsterisks(asteriskCount[plantNumber-1]);
            cout<<"\n"<<endl;
    }
}
void printAsterisks(int n)
{
for (int count=1;count<=n;count++)
{
    cout << "*";
}
}
