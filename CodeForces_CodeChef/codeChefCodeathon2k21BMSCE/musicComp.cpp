#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        m[a[i]]++;
    }
    int teams=0;
    for(auto i:m)
    {
        i.second>sum/4;
        cout<<i.first<<" ";
        teams++;
    }
    cout<<endl;
    cout<<teams<<endl;
    return 0;


}