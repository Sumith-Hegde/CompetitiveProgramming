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
        map<int,int> m;
        cin>>n;
        cin>>k;
        int count=0;
        vector<int> a(n);
        vector<int> b(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(m[a[i]]<k)
            {
                m[a[i]]++;
            }
        }
        for(auto i: m)
        {
            count+=i.second;
        }
        count=count-count%k;
        for(int i=0;i<n;i++)
        {
            if(count>0)
            {
                if(m[a[i]]>0)
                {
                    b[i]=m[a[i]];
                    m[a[i]]--;
                    count--;
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