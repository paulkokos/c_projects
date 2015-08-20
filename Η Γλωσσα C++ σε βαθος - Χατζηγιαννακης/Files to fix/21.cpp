#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
    int a,b,c;
    ifstream myfile;
    myfile.open("data");
    myfile.ignore(3);
    myfile>>a>>b;
    myfile.close();
    cout << a<<b<<endl;
}
