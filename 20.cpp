//anoigei ena arxeio eksodoy me onoma data
//sto opoio grafei toys aroithmoys 10,20

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
main(){
    int i=10,a=20;
    ofstream myfile;
    myfile.open("data");
    myfile << i << " "<< a << endl;
    myfile<<30;
    myfile.close();
}
