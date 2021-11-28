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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1||a[i]==3)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}