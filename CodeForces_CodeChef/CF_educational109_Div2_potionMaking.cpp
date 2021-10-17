#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        int x=n;
        int y=100-x;
        int g=__gcd(x,y);
        x=x/g;
        y=y/g;
        cout<<x+y<<endl;       
    }
}