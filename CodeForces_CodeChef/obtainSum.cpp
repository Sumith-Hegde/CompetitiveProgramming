#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n=0,s=0;
        cin>>n>>s;
        long long sum=(n*(n+1))/2;
        long long pos=sum-s;
        if(s>=sum)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<pos<<endl;
        }
    }
}