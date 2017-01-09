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
    cout << "doste "<< size << "arithmoys:\n";
    for (int i=0;i<size;i++)
    cin >>a[i];
    cout << "o teleytaios deiktis toy pinaka einai: "<< (size-1)<<endl;
}
