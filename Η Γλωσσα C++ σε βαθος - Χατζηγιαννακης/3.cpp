#include <iostream>
using namespace std;
void getNumbers(int& input1,int& input2);
//Διαβαζει δυο ακαιρεους απο το πληκτρολογιο
void swapNumbers(int& variable1, int& variable2);
//αντιμεταθετει τις τιμες του variable1 και variable2
void showNumbers(int output1, int output2);
//Εμφανιζει τις τιμες των variable1 variable2 με αυτη την σειρα
int main()
{
    int firstNum,secondNum;
    getNumbers(firstNum,secondNum);
    swapNumbers(firstNum,secondNum);
    showNumbers(firstNum,secondNum);
    return 0;
}
void getNumbers(int& input1,int& input2)
{
    cout<<"Δωσε δυο ακεραιους: ";
    cin>>input1>>input2;
}
//Διαβαζει δυο ακαιρεους απο το πληκτρολογιο
void swapNumbers(int& variable1, int& variable2)
{
    int temp;
    temp=variable1;
    variable1=variable2;
    variable2=temp;
}
//αντιμεταθετει τις τιμες του variable1 και variable2
void showNumbers(int output1, int output2)
{
    cout << "Με αντιστροφη σειρα οι αριθμοι ειναι "
        << output1 <<" "<< output2<< endl;
}
//Εμφανιζει τις τιμες των variable1 variable2 με αυτη την σειρα
