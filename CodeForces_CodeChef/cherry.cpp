#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long ans=0;
        int n=0;
        long long maxi=0;
        cin>>n;
        vector<long long> a(n);


        // for(int i=0;i<n;i++)
        // {
        //     cin>>a[i];
        //     if(a[maxi]<a[i])
        //     {
        //         maxi=i;
        //     }           
        // }
        // if(maxi==n-1) cout<<a[maxi]*a[maxi-1]<<endl;
        // else if(maxi==0) cout<<a[maxi]*a[maxi+1]<<endl;
        // else cout<<a[maxi]*max(a[maxi-1],a[maxi+1])<<endl;


        for(int i=0;i<n;i++)
        {
            cin>>a[i];           
        }
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,a[i]*a[i-1]);           
        }
        cout<<maxi<<endl;
    }
}