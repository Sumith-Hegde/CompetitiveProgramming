#include <bits/stdc++.h>
using namespace std;
int diff(string a,string b)
{
    int x=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            x++;
        }
    }
    return x;
}
int main()
{
    int n=0;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans+=diff(a[i],a[j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}