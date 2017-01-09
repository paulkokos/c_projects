//anoigei to arxeio data.bin gia anagnosi ,
//diavazei kai emfanizei sthn othoni thn frasi
//kathos kai ton arithmo poy periexei to arxeio
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    ifstream fin("data.bin",ios::binary);
    char lexi[50];
    int a;
    fin.read(lexi,50);
    fin.read(reinterpret_cast<char *>(&a),sizeof(int));
    fin.close();
    cout<<lexi<<" "<<a;
}
