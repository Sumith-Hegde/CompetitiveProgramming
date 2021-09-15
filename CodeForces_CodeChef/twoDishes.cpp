#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        int s=0;
        cin>>n>>s;
        for(int i=0;i<=n;i++)
        {
            if(abs(s-i)<=n)
            {
                cout<<(s-2*i)<<endl;
                break;
            }
        }
    }
}