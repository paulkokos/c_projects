#include <iostream>
#include <stdlib.h>
using namespace std;
char array[6][12]{"10","20","30","40","50","60"};
int intArray[6];
int main()
{
char tel, sum;
for (int i=0;i<6;i++)
    {
    string test;
    cout << array[i]<<endl;
    test=array[i];
    intArray[i]=static_cast<int>(test);
    }
}
int j;
/*for (j=0;j<Chapter06;j++)
    {
    int fd;

    intArray[j]=static_cast<int>(array[j]);
    }*/
