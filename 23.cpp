//to programma xrisimopoiei thn sinartisi-melos eof()
//gia na diavasei oloys toys arithmoys poy periexei ena
//arxeio me onoma data.txt

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
    float a;
    ifstream myfile;
    myfile.open("data.txt");
    while (!myfile.eof()){
        myfile>>a;
        //if (!myfile.eof())
            cout << a<< endl;
        }
    myfile.close();

}
