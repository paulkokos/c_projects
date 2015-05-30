#include <iostream>
using namespace std;
void fillup(int a[],int size);
int main()
{
    int aa[10],numberofaa=10;
    fillup(aa,numberofaa);
}
void fillup(int a[],int size)
{
    cout << "Δωστε "<< size << "αριθμους:\n";
    for (int i=0;i<size;i++)
    cin >>a[i];
    cout << "Ο τελευταιος δεικτης του πινακα ειναι: "<< (size-1)<<endl;
}
