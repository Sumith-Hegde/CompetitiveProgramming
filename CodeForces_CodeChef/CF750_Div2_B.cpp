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
        int z=0,o=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                o++;
            }
            if(a[i]==0)
            {
                z++;
            }
        }
        int ans=z*o+o;
        if(z>1)
        {
            ans+=z-1;
        }
        cout<<ans<<endl;
    }
}