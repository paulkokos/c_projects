//grafoyn sto arxeio data.bin ti frasi "antikeimenostrafis programmatismos"
//kathos kai ton akeraio 40
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
    ofstream fout("data.bin",ios::binary);
    char lexi[50]="Antikeimenostrafis programatismos";
    int a=40;
    fout.write(lexi,50);
    fout.write(reinterpret_cast<char *>(&a),sizeof(int));
    fout.close();
}
