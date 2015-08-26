//grafei kai diavazei 3 antikeimena typoy rectacle
//se ena arxeio me onoma data
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
class rectaclee{
private:
    float plevra_a;
    float plevra_b;
    char xroma[40];
public:
    float emvadon(){return plevra_a*plevra_b;}
    void show(){cout <<xroma<<" "<<plevra_a<<" "<<plevra_b<<endl;}
    void set(float a,float b, char color[]){plevra_a=a; plevra_b=b; strcpy(xroma,color);}
};
int main(){
    rectaclee array[3],rec;
    int i;
    ofstream outfile;
    ifstream infile;
    outfile.open("data",ios::binary);
    array[0].set(10,23.4,"red");
    array[1].set(2,8,"blue");
    array[2].set(6,12.6,"green");
    for (i=0;i<=2;i++){
        outfile.write(reinterpret_cast<char *>(&array[i]),sizeof(rectaclee));}
    outfile.close();
    infile.open("data",ios::binary);
    for(i=0;i<=2;i++){
        infile.read(reinterpret_cast<char *>(&rec),sizeof(rectaclee));
        rec.show();
    }
    infile.close();
}
