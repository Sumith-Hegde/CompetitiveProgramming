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
        vector<int> a(n);
        int maxi=INT32_MIN;
        int mini=INT32_MAX;
        bool sorted=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]);
            if(i>0)
            {
                if(a[i]<a[i-1])
                {
                    sorted=false;
                }
            }
        }
        if(sorted)
        {
            cout<<0<<endl;
        }
        else
        {
            int operations=1;
            if(mini!=a[0]&&maxi!=a[n-1])
            {
                operations++;
            }
            if(mini==a[n-1]&&maxi==a[0])
            {
                operations++;
            }
            cout<<operations<<endl;
        }
    }
}