#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    int n=0;
    cin>>n;
    int maxi=0;
    while(t--)
    {
        string s;
        unordered_map<int,int> m;
        cin>>s;
        int x=0;
        cin>>x;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            m[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='D')
            {
                for(int j=0;j<=x;j++)
                {
                    if(i+j<n&&s[i+j]=='C')
                    {
                        m[i+j]=1;
                    }
                    if(i-j>=0&&s[i-j]=='C')
                    {
                        m[i-j]=1;
                    }
                }
            }
        }
        // int range=-1;
        // for(int i=0;i<n;i++)
        // {
        //     if(s[i]=='D')
        //     {
        //         range=i+x;
        //     }
        //     if(s[i]=='C')
        //     {
        //         if(i<=range)
        //         {
        //             m[i]=1;
        //         }
        //         else
        //         {
        //             range=-1;
        //         }
        //     }
        // }
        // for(int i=n-1;i>=0;i--)
        // {
        //     if(s[i]=='D')
        //     {
        //         range=i-x;
        //     }
        //     if(s[i]=='C')
        //     {
        //         if(i>=range)
        //         {
        //             m[i]=1;
        //         }
        //         else
        //         {
        //             range=-1;
        //         }
        //     }
        // }
        // int q=x;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='D')
        //     {
        //         int q=x;
        //         i=i+1;
        //         while(q--&&i<s.size())
        //         {
        //             m[i]=1;
        //             i++;
        //         }
        //         i--; 
        //     }
        // }
        // for(int i=s.size()-1;i>=0;i--)
        // {
        //     if(s[i]=='D')
        //     {
        //         int q=x;
        //         i=i-1;
        //         while(q--&&i>=0)
        //         {
        //             m[i]=1;
        //             i--;
        //         } 
        //     }
        // }
        // int ans=0;
        for(auto i:m)
        {
            if(i.second==1)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
        // maxi=max(maxi,ans);
    }
    // cout<<maxi<<endl;
    return 0;
}