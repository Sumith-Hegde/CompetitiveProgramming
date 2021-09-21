#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long n=0,m=0;
        cin>>n;
        vector<long long> a(n);
        long long strength=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            strength+=a[i];
        }       
        cin>>m;
        vector<pair<long long,long long>> b(n);
        vector<long long> coins;
        for(int i=0;i<m;i++)
        {
            cin>>b[i].first>>b[i].second;
        }
        for(int i=0;i<m;i++)
        {
            long long mini=INT64_MAX;
            for(int j=0;j<n;j++)
            {
                long long help=0;
                if(b[i].first-a[j]>0)
                {
                    help+=b[i].first-a[j];
                }
                if(b[i].second-(strength-a[j])>0)
                {
                    help+=b[i].second-(strength-a[j]);
                }
                if(help==0)
                {
                    coins.push_back(0);
                    break;
                }
                mini=min(mini,help);
            }
            coins.push_back(mini);
        }
        cout<<"hi"<<coins.size()<<endl;
        for(int i=0;i<coins.size();i++)
        {
            cout<<coins[i]<<endl;
        }
}