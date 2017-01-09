#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
    ofstream mytxtfile,mybinfile;
    mytxtfile.open("txtfile");
    mybinfile.open("mybinfile");
    mytxtfile<<1234<<endl<<56;
    mytxtfile.close();
    mybinfile.close();
}
