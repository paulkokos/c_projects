#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        if(n%3==0)
        {
            for(int i=0;i<n;i++)
                cout<<5;
            cout<<endl;
        }
        else if(n%5==0)
        {
            int part_of_three = n;
            while(part_of_three>0)
            {
                if(part_of_three%3==0)
                {
                    int part_of_five = n-part_of_three;
                    for(int i=0;i<part_of_three;i++)
                        cout<<5;
                    for(int i=0;i<part_of_five;i++)
                        cout<<3;
                    cout<<endl;
                    break;
                }
                else
                    part_of_three-=5;
            }
            if(part_of_three<=0)
            {
                for(int i=0;i<n;i++)
                    cout<<3;
                cout<<endl;
            }
        }
        else if((n%5!=0)&&(n%3!=0))
        {
            int part_of_five = n%3;
            int part_of_three = n-part_of_five;

            while(part_of_three>0)
                if(part_of_five%5!=0)
                {
                    part_of_three-=3;
                    part_of_five +=3;
                }
                else
                    break;
            if(part_of_three<=0)
                cout<<-1<<endl;
            else
            {
                for(int i=0;i<part_of_three;i++)
                    cout<<5;
                for(int i=0;i<part_of_five;i++)
                    cout<<3;
                cout<<endl;
            }
        }
    }
    return 0;
}