#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=0)
            {
                a[i]=min(a[i],a[i-1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int ans=INT_MAX,size=n-1;
        for(int i=0;i<n;i++)
        {
            while(b[i]>a[size-1] and size-1>=0)
            {
                --size;
            }
            ans=min(ans,i+size);
        }
        cout<<ans<<"\n";
    }
}