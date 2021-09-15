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
        if(n%3==0)
        {
            cout<<n/3<<" "<<n/3<<endl;
        }
        else if(n%3==1)
        {
            cout<<n/3+1<<" "<<n/3<<endl;
        }
        else
        {
            cout<<n/3<<" "<<n/3+1<<endl;
        }
    }
}