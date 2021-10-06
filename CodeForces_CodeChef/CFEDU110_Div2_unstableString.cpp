#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int max0=0;
        int max1=0;
        long long ans=0;
        for(auto i:s)
        {
            if(i=='0')
            {
                max1=0;
                max0++;
                ans+=max0;
            }
            else if(i=='1')
            {
                max0=0;
                max1++;
                ans+=max1;
            }
            else
            {
                max1++;
                max0++;
                ans+=max(max0,max1);
            }
            swap(max0,max1);
        }
        cout<<ans<<endl;
    }
}   