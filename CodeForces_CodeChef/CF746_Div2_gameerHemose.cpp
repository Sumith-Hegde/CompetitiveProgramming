#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        long long h=0;
        cin>>n>>h;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<h/(a[n-1]+a[n-2])*2+(h%(a[n-1]+a[n-2])+a[n-1]-1)/a[n-1]<<endl;
    }
}
