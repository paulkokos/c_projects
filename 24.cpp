//to programma grafei sto arxeio data.txt pragmatikoys arithmoys
//me akriveia dyo dekadikon se ena platos pedioy epta theseon
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
    float i;
    ofstream myfile;
    myfile.open("data.txt");
    for (i=10;i<12;i=i+0.4)
    {
        myfile<<setw(7)<<fixed<<setprecision(2)<<i<<endl;
    }
    myfile.close();
}
