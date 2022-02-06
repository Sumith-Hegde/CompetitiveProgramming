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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> ans;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%2)
            {
                ans.push_back(a[i]);
            }
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%2==0)
            {
                ans.push_back(a[i]);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}   