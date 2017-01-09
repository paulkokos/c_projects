#include "functions.h"
#include <iostream>
using namespace std;
const int DECLARED_SIZE=20;
void fillArray(int a[],int size,int& numberUsed);
int search(const int a[],int numberUsed,int target);
int main()
{
    int arr[DECLARED_SIZE],listSize,target;
    fillArray(arr,DECLARED_SIZE,listSize);
    char ans;
    int result;
    do
    {
    cout << "Δωστε εναν αριθμο προς αναζητηση:\n";
    cin>>target;
    result=search(arr,listSize,target);
    if (result==-1)
    {
        cout <<"Το "<< target << "δεν ειναι λιστα.\n";
    }
    else
        cout<<"To"<<target<<" βρισκεται στη θεση του πινακα "<<result<< endl
            <<"(Θυμηθητε: Η πρωτη θεση ειναι η 0.)\n";
        cout << "Νεα αναζητηση; (Y/N και ακολουθει enter): ";
        cin >>ans;
    } while ((ans!='n')&&(ans!='N'));
    cout << "Τελος προγραμματος\n";
    return 0;
}
