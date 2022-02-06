#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int l=INT_MAX,r=INT_MIN,c=INT_MAX;
        int a=INT_MAX;
        int b=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x,y,z; 
            cin>>x>>y>>z;
            if(x<l)
            {
                a=INT_MAX;
                c=INT_MAX;
            }
            if(y>r)
            {
                b=INT_MAX;
                c=INT_MAX;
            }
            l=min(l,x);
            r=max(r,y);
            if(l==x)
            {
                a=min(a,z);
            } 
            if(r==y)
            {
                b=min(b,z);
            }
            if(l==x&&r==y)
            {
                c=min(c,z);
            }
            cout<<min(a+b,c)<<endl;
        }

    }
    return 0;
}