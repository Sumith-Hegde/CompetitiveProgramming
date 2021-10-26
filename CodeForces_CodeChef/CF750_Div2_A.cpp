#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,c=0;
        cin>>a>>b>>c;
        int x=a;
        int y=b;
        int z=c;
         if(a==b&&b==c)
        {
            cout<<0<<endl;
            continue;
        }
        
         a=a%2;
        b=b%2;
        c=c%2;
        int m=min(a,min(b,c));
        a-=m;
        b-=m;
        c-=m;
        int ans=0;
        if(a==1&&b==1)
        {
            ans=1;
        }
        else if(c==1&&b==1)
        {
            ans=1;
        }
        else if(a==1&&c==1)
        {
            ans=2;
        }
        else
        {
            ans=1*a+2*b+c*3;
        }
        // if(x==0&&y==0)
        // {
        //     if(z%2==0)
        //     {
        //         cout<<0<<endl;
        //     }
        //     else
        //     {
        //         cout<<3<<endl;
        //     }
        //     continue;
        // }
        // if(y==0&&z==0)
        // {
        //     if(x%2==0)
        //     {
        //         cout<<0<<endl;
        //     }
        //     else
        //     {
        //         cout<<1<<endl;
        //     }
        //     continue;
        // }
        // if(x==0&&z==0)
        // {
        //     if(y%2==0)
        //     {
        //         cout<<0<<endl;
        //     }
        //     else
        //     {
        //         cout<<2<<endl;
        //     }
        //     continue;
        // }
       
        // int ans=0;
        // if(a==1&&b==1||b==1&&c==1)
        // {
        //     ans=1;
        // }
        // if(a==1&&c==1&&b==0)
        // {
        //     ans=2;
        // }
        // if(a==0&&b==0)
        // {
            
        // }
        cout<<ans<<endl;
        
    }
}