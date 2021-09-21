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
        int odd=0,even=0;
        for(int i=0;i<2*n;i++)
        {
            int x=0;
            cin>>x;
            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even==odd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}