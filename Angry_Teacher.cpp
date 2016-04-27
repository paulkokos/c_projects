#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    if (t>=1 && t<=10) {
        for (int a0 = 0; a0 < t; a0++) {
            int late=0;
            int n;
            int k;
            cin >> n >> k;
            if ((n>=1 && n<=1000) && (k>=1 && k<=n)) {
                vector<int> a(n);
                for (int a_i = 0; a_i < n; a_i++) {
                    cin >> a[a_i];
                    if (a[a_i] <= 0) {
                        late++;
                    }
                }
                if (late < k) {
                    cout << "YES" << endl;
                } else { cout << "NO" << endl; }
            }
        }
    }
    return 0;
}