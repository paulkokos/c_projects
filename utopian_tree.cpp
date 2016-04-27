#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int test_case, cycle, height, i, j;
    cin >> test_case;
    int *height2 = new int[test_case];
    for (i = 0; i < test_case; i++) {
        height = 1;
        cin >> cycle;
        if (cycle & 1) {
            for (j = 0; j < cycle / 2; j++) {
                height = height * 2;
                height = height + 1;
            }
            height = height * 2;
        }
        else {
            for (j = 0; j < cycle / 2; j++) {
                height = height * 2;
                height = height + 1;
            }
        }
        height2[i] = height;
    }
    for (i = 0; i < test_case; i++) {
        cout << height2[i] << endl;
    }
    return 0;
}
