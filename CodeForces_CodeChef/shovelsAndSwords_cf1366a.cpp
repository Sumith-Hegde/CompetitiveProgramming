#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        if(2*a<=b)
        {
            ans=a;
        }
        else if(2*b<=a)
        {
            ans=b;
        }
        else
        {
            ans=(a+b)/3;
        }
        cout<<ans<<endl;
    }
    return 0;
}