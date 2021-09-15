#include <bits/stdc++.h>
using namespace std;
int index(int x,int n)
{
    if(x<0)
    {
        return n-1;
    }
    else if(x>=n) return 0;
    else return x; 
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,k=0;
        cin>>n>>k;
        vector<int> a(n);
        int sum=0;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(k==0)
        {
            cout<<sum<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(a[index(i-1,n)]>0)
            {
                sum+=k;
                m[i]=k;
            }
            else
            {
                if(m.find(index(i-1,n))!=m.end()&&m[index(i-1,n)]>0)
                {
                    sum+=m[index(i-1,n)]-1;
                    m[i]+=m[index(i-1,n)]-1;
                }
            }
        }
        // cout<<sum<<endl;
        // for(auto i: m)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for(int i=n-1;i>=0;i--)
        {
            if(a[index(i+1,n)]>0)
            {
                sum+=k;
                m[i]=k;
            }
            else
            {
                if(m.find(index(i+1,n))!=m.end()&&m[index(i+1,n)]>0)
                {
                    sum+=m[index(i+1,n)]-1;
                    m[i]+=m[index(i+1,n)]-1;
                }
            }
        }
        cout<<sum<<endl;
    }
}