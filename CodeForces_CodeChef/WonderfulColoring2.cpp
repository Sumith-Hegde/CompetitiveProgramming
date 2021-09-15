#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,k=0;
        string s;
        // map<int,int> m;
        cin>>n;
        cin>>k;
        int count=0;
        vector<int> a(n);
        vector<int> b(n,0);
        map<int,vector<int>> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]].push_back(i);
        }
        int num=0;
        for(auto i:m)
        {
            int l=i.second.size();
            if(l<k)
            {
                num+=l;
            }
        }
        int x=k;
        num=num-num%k;
        for(auto i: m)
        {
            if(i.second.size()>=k)
            {
                int y=k;
                for(auto j:i.second)
                {
                    if(y==0)
                    {
                        break;
                    }
                    b[j]=y;
                    y--;
                }
            }
            else if(num>0)
            {
                for(auto j:i.second)
                {
                    if(x==0)
                    {
                        x=k;
                    }
                    b[j]=x;
                    x--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}