#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        // int a,b,c,m;
        // cin>>a>>b>>c>>m;
        vector<int> a(4,0);
        vector<int> b(3,0);
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        if(a[0]+a[1]+a[2]-3<a[3])
        {
            cout<<"NO"<<endl;
            continue;
        }
        int pairs=0;
        bool ti=true;
        while(ti)
        {
            for(int i=0;i<3;i++)
            {
                if(pairs==a[3])
                {
                    ti=false;
                    break;
                }
                if(a[i]>=2)
                {
                    a[i]-=2;
                    pairs++;
                    b[i]++;
                }
            }
        }
        if(a[0]+a[1]+b[0]+b[1]+1<a[2]+b[2]||a[0]+a[2]+b[0]+b[2]+1<a[1]+b[1]||a[2]+a[1]+b[2]+b[1]+1<a[0]+b[0])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}