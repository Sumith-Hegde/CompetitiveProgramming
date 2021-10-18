#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n+1,0);
        for(int i=0;i<m;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            a[y]=1;
        }
        int root=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=1)
            {
                root=i;
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i!=root)
            {
                cout<<i<<" "<<root<<endl;
            }
        }
    }
}