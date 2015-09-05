#ifndef functions_h
#define functions_h
#include <iostream>
using namespace std;
void fillArray(int a[],int size,int& numberUsed)
{
    cout <<"\nΔωστε μεχρι " <<size<<"μη αρνητικους αριθμους.\n"
        <<"Σημειωστε στο τελος της λιστας με εναν αρνητικο αριθμο: \n";
    int next=0,index=0;
    while ((next>=0) && (index<size))
    {
        a[index]=next;
        index++;
        cin>>next;
    }
    numberUsed=index;
}
double computeAverage(const int a[],int numberUsed)
{
    double total=0;
    for (int index=0;index<numberUsed;index++)
    {
        total=total+a[index];
    }
    if (numberUsed>0)
    {
        return (total/numberUsed);
    }
    else {
        cout << "ΣΦΑΛΜΑ: ο αριθμος των στοιχειων "
            <<"στην computeAverage ειναι 0\n"
            <<"Η computeAverage επιστρεφει 0.\n";
        return 0;
    }
}
void showDifference(const int a[],int numberUsed)
{
    double average = computeAverage(a,numberUsed);
    cout << "Μεσος ορος των "<<numberUsed<<" αποτελεσματων= "
        <<average<<endl<<"Τα αποτελεσματα ειναι: \n";
        for (int index=0;index<numberUsed;index++)
        {
            cout << "Το "<<a[index]<<" διαφερει απο το μεσο ορο κατα "
                << (a[index]-average)<<endl;

        }

}
int search(const int a[],int numberUsed,int target)
{
    int index=0;
    bool found=false;
    while ((!found)&&(index<numberUsed))
    if (target==a[index])
        found=true;
    else
        index++;
    if (found)
        return index;
    else
        return -1;
}
#endif
