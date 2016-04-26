/*Given a time in AM/PM format, convert it to military (2424-hour) time.
Note: Midnight is 12:00:00AM12:00:00AM on a 1212-hour clock, and 00:00:0000:00:00 on a 2424-hour clock. Noon is 12:00:00PM12:00:00PM on a 1212-hour clock, and 12:00:0012:00:00 on a 2424-hour clock.
Input Format
A single string containing a time in 1212-hour clock format (i.e.: hh:mm:ssAMhh:mm:ssAM or hh:mm:ssPMhh:mm:ssPM), where 01≤hh≤1201≤hh≤12.
Output Format
Convert and print the given time in 2424-hour format, where 00≤hh≤2300≤hh≤23.

Sample Input
07:05:45PM
Sample Output
19:05:45*/
//#include <iostream>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//int main(){
//    string time="07:05:45PM";
//    string dodekaoro;
//    int hours,minutes,seconds;
//    char a,b,c;
//    stringstream ss(time);
//    ss>> hours>>a>>minutes>>b>>seconds>>dodekaoro;
//    if (time.find("PM")){
//        hours=hours+12;
//        if (hours==24)
//            hours=0;
//        cout <<setfill('0')<<setw(2)<<hours<< a <<setw(2)<< minutes<<b<<setw(2)<<seconds;
//    } else
//        cout <<setfill('0')<<setw(2)<<hours<< a <<setw(2)<< minutes<<b<<setw(2)<<seconds;
//
//    return 0;
//}
#include <map>
#include <queue>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int sum=0;
    vector<int> find;
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4; j++){
            sum = arr[i][j]+arr[i][j+1] + arr[i][j +2]+arr[i +1][j +1]+ arr[i +2][j]+ arr[i +2][j +1] +
                  arr[i +2][j +2] ;
            find.push_back(sum);
        }
    }
    vector<int>::iterator it= max_element( find.begin(), find.end());
    cout<< *it;
    return 0;
}


