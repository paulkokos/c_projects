#include "Server.h"
#include <iostream>

using namespace std;
bool Server::nowOpen=true;
int Server::turn=0;
int Server::lastServed=0;
int main()
{
    Server s1('A'),s2('B');
    int number,count;
    do
    {
        cout<<"Ποσοι ειστε στην ομαδα σας; ";
        cin >>number;
        cout<<"Οι σειρες σας ειναι: ";
        for (count=0;count<number;count++)
        {
            cout<<Server::getTurn()<<' ';
        }
        cout<<endl;
        s1.serveOne();
        s2.serveOne();
    } while (Server::stillOpen());
cout <<"Τωρα σταματα η εξυπηρετηση.\n";
    return 0;
}
