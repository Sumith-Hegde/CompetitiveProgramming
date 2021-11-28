#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,vector<int>> m1;
    unordered_map<int,int> m2;
    for(int i=1;i<n+1;i++)
    {
        int x=a[i]/i;
        m1[x].push_back(a[i]);
    }
    int ans=0;
    for(auto i:m1)
    {
        int size=(int)i.second.size();
        ans+=size*(size-1)/2;
    }
    cout<<ans<<endl;
}