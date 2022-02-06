#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,m;
        cin>>n>>m;
        vector<pair<string,int>> a(n);
        // vector<string> a(n);
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            a[i].first=s;
            a[i].second=i;
            for(int j=1;j<m;j+=2)
            {
                a[i].first[j]=(char)(100-(int)a[i].first[j]);
            }
        }
        sort(a.begin(),a.end());
        for(auto i:a)
        {
            cout<<i.second+1<<" ";
        }
}