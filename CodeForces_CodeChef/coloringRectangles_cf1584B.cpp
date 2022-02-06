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
        int area=n*m;
        int ans=area/3;
        if(area%3==0)
        {
            cout<<ans<<endl;
        }       
        else
        {
            cout<<ans+1<<endl;
        }
    }
}