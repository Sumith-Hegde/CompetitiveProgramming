#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    if(n==1) return 10000;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    ans+=n*10000;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            ans+=10000;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>a[i+1])
        {
            ans+=10000;
        }
    }
    cout<<ans<<endl;
    return ans;
   
}