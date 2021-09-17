// link -https://codeforces.com/problemset/problem/1562/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //if we try some examples then we get the following logic
    int t=0;
    cin>>t;
    while(t--)
    {
       int l,r;
       cin>>l>>r;
       if(r<2*l)
       {
           cout<<r-l<<endl;
       } 
       else
       {
           if(r%2==0)
           {
               cout<<(r-1)/2<<endl;
           }
           else
           {
               cout<<r/2<<endl;
           }
       }
    }
}