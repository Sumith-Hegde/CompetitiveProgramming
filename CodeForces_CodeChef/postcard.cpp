// problem link - https://codeforces.com/contest/1472/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int w=0,h=0;
        int n=0;
        cin>>w;
        cin>>h;
        cin>>n;
        int a=1;
        int b=1;
        // count how many times can paper be divided into 2 both in width and height
        //take their product to get total cards that can be made
        while(h%2==0)
        {
            h=h/2;
            a=a*2;
        }
        while(w%2==0)
        {
            w=w/2;
            b=b*2;
        }
        int c=a*b;
        if(c>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}