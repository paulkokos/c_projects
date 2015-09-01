#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    std::ifstream input("myfile.txt");
    std::(int)line;

    while( std::getline( input,line ) ) {
        std::cout<<line<<'\n';
    }

    return 0;
}
