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
        string o,p;
        cin>>o>>p;
        vector<int> m(n,1);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(p[i]=='0')
            {
                continue;
            }
            if(p[i]=='1'&&o[i]=='0')
            {
                ans++;
            }
            if(p[i]=='1'&&o[i]=='1')
            {
                if((i-1)>=0&&o[i-1]=='1'&&m[i-1])
                {
                    ans++;
                    m[i-1]=0;
                    continue;
                }
                if(i+1<n&&o[i+1]=='1'&&m[i+1])
                {
                    ans++;
                    m[i+1]=0;
                }
            }
        }
        cout<<ans<<endl;     
    }
}