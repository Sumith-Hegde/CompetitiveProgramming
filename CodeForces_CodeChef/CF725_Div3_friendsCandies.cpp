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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        sum=sum/n;
        sort(a.begin(),a.end());
        int req=0;
        int extra=0;
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<=sum)
            {
                req+=sum-a[i];
            }
            else
            {
                extra+=a[i]-sum;
                count++;
            }
        }
        if(extra==req)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}