#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,l=0,r=0;
        cin>>n>>l>>r;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long count=0;
        for(int i=0;i<n;i++)
        {
            int x=upper_bound(a.begin()+i+1,a.end(),r-a[i])-a.begin();
            int y=lower_bound(a.begin()+i+1,a.end(),l-a[i])-a.begin();
            count+=x-y;
        }  
        cout<<count<<endl;
    }
}