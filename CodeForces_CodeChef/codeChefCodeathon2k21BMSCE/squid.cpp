#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    vector<int> a(n);
    // unordered_map<int,int> m;
    unordered_map<int,vector<int>> adj;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // m[a[i]]=1;
        adj[a[i]].push_back(a[i]);
    }
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++)
    {
        int x=a[i];
        // x=x/3;
        while(x>0&&(x-1)%3==0)
        {
            x=x-1;
            x=x/3;
            if(adj[x].size()>0)
            {
                adj[x].push_back(a[i]);
            }
            // x=x-1;
        }
    }
    int maxi=0;
    for(auto i:adj)
    {
        maxi=max(maxi,(int)i.second.size());
    }
    cout<<maxi<<endl;
    return 0;
}