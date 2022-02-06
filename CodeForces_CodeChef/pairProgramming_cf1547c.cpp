#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int k,n,m;
        cin>>k>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        vector<int> ans(n+m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int i=0;
        int j=0;
        int in=0;
        bool found=true;
        while(i<n&&j<m&&found)
        {
            if(a[i]>k&&b[j]>k)
            {
                cout<<-1<<endl;
                found=false;
                break;
            }
            while(i<n&&a[i]==0)
            {
                ans[in]=a[i];
                k++;
                in++;
                i++;
            }
            while(j<m&&b[j]==0)
            {
                ans[in]=b[j];
                k++;
                in++;
                j++;
            }
            while(i<n&&a[i]<=k&&a[i]!=0)
            {
                ans[in]=a[i];
                in++;
                i++;
            }
            while(j<m&&b[j]<=k&&b[j]!=0)
            {
                ans[in]=b[j];
                in++;
                j++;
            }
        }
        if(!found)
        {
            continue;
        }
        while(i<n)
        {
            if(a[i]==0)
            {
                ans[in]=a[i];
                in++;
                i++;
                k++;
            }
            else
            {
                if(a[i]>k)
                {
                    found=false;
                    break;
                }
                else
                {
                    ans[in]=a[i];
                    in++;
                    i++;
                }
            }
        }
        while(j<m)
        {
            if(b[j]==0)
            {
                ans[in]=b[j];
                in++;
                j++;
                k++;
            }
            else
            {
                if(b[j]>k)
                {
                    found=false;
                    break;
                }
                else
                {
                    ans[in]=b[j];
                    in++;
                    j++;
                }
            }
        }
        if(!found)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            for(int i=0;i<n+m;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

    }
}