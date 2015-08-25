//Yperfortonontai oi telestes eisagogis kai eksagogis gia thn
//klasi rectacle

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class rectacle{
    private:
        float plevra_a;
        float plevra_b;
    public:
        float emvadon(){return plevra_a*plevra_b;}
        void set(float a,float b){plevra_a=a; plevra_b=b;}
        void show(){cout << plevra_a<<" "<<plevra_b<<endl;}
        friend ostream &operator<<(ostream &file_out,rectacle &obj);
        friend istream &operator>>(istream &file_in,rectacle &obj);
};
ostream &operator<<(ostream &file_out,rectacle &obj) {
    file_out<<obj.plevra_a<<endl;
    file_out<<obj.plevra_b<<endl;
    return file_out;
}
istream &operator>>(istream &file_in,rectacle &obj) {
    file_in>>obj.plevra_a;
    file_in>>obj.plevra_b;
    return file_in;
}
int main(){
    rectacle rec1,rec2,rec3,rec;
    int i;
    ofstream outfile;
    ifstream infile;
    outfile.open("dataa");
    rec1.set(10,23.4);
    rec2.set(2,8);
    rec3.set(6,12.6);
    outfile<<rec1<<rec2<<rec3<<endl;
    outfile.close();
    infile.open("dataa");
    for (i=1;i<=3;i++){
        infile>>rec;
        cout<<"Orthogonio - "<<i<<endl;
        rec.show();
    }

}
