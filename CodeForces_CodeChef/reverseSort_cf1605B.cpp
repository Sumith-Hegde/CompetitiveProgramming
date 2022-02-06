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
        string s;
        cin>>s;
        bool correct=true;
        int ones=0;
        int zeroes=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]-'0'>s[i+1]-'0')
            {
                correct=false;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') zeroes++;
        }
        if(correct)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<1<<endl;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(i<zeroes&&s[i]=='1')
            {
                // cout<<i+1<<" ";
                ans.push_back(i);
            }
            if(i>=zeroes-1&&s[i]=='0')
            {
                // cout<<i+1<<" ";
                ans.push_back(i);
            }
        }
        cout<<ans.size()<<" ";
        for(auto i:ans)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}