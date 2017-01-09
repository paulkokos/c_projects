#include <iostream>
using namespace std;
class rectacle
{
    private:
    float pleyra_a;
    float plevra_b;
    public:
        rectacle();
        rectacle(float a);

        rectacle(float a,float b);
        ~rectacle();
        float emvadon();
        void set_ab(float a,float b);
};
float rectacle::emvadon()
{
    return (pleyra_a*plevra_b);
}
void rectacle::set_ab(float a,float b)
{
    pleyra_a=a;
    plevra_b=b;
}
rectacle::rectacle(float a,float b)
{
    pleyra_a=a;
    plevra_b=b;
    cout<<"Δημιουργηθηκε ορθογωνιο "<< a <<"x"<<b<<endl;
}
rectacle::~rectacle()
{
    cout<<"Το ορθογωνιο καταστραφηκε\n";
}
rectacle::rectacle(float a)
{

}
rectacle::rectacle()
{

}
main()
{
    rectacle rec1(10,2),rec2(4,8);
    cout << "rec1= "<< rec1.emvadon()<<"\n";
    cout << "rec2= "<< rec2.emvadon()<<"\n";
    {
        rectacle rec3(3,7);
        cout << " rec3 "<< rec3.emvadon()<<"\n";
        rec3.set_ab(8,10);
        cout <<"rec3= "<< rec3.emvadon()<<endl;
    }
}
