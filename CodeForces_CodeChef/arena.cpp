#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        int ans=0;
        cin>>n;
        vector<int> a(n);
        int mini=INT32_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mini=min(mini,a[i]);
        }
        for(auto i:a)
        {
            if(i>mini)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}