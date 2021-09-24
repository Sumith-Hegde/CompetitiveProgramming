#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,a=0,b=0;
        cin>>n>>a>>b;
        bool found=false;
        if(a<2)
        {
            n=(n-1)%b;
        }      
        else 
        {
            for(long long m=1;m<=n;m*=a)
            {
                if((n-m)%b<1)
                {
                    n=0;
                }
            }
        }
        if(n==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}