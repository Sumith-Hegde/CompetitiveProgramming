#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        int k=0;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s=a.size();
        a[s-1]+=k;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<s&&k>0;i++)
        {
            if(a[i]>=k)
            {
                a[i]-=k;
                break;
            }
            else
            {
                k=k-a[i];
                a[i]=0;
            }
        }
        for(int i=0;i<s;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}