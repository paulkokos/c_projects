#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
        string name;

        int value;
        ifstream myfile("myfile.txt"/*, ifstream::in*/);
         while(getline(myfile,name))
                cout << value << endl;
        return 0;
}
