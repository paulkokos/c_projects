#include <iostream>
#include "../functions.h"
using namespace std;
const int MAX_NUMBERS_SCORES=10;
void fillArray(int a[],int size,int& numberUsed);
double computeAverage(const int a[],int numberUsed);
void showDifference(const int a[],int numberUsed);
int main()
{
    int scope[MAX_NUMBERS_SCORES],numberUsed;
    cout <<"Αυτο το προγραμμα διαβαζει τα αποτελεσματα του γκολφ\n"
        <<"και δειχνει ποσο διαφερει το καθενα απο το καθε μεσο ορο\n\n";
    cout<<"Δωστε τα αποτελεσματα του γκολφ: ";
    fillArray(scope,MAX_NUMBERS_SCORES,numberUsed);
    showDifference(scope,numberUsed);
    return 0;
}
