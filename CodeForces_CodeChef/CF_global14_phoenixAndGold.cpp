#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        int x=0;
        cin>>n>>x;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==x)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum==x)
            {
                swap(a[i],a[i+1]);
            }
        }
        cout<<"YES"<<endl;
        for(auto i:a)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}