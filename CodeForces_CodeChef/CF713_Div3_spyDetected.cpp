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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=0;
        if(a[0]==a[1])
        {
            x=a[0];
            for(int i=2;i<n;i++)
            {
                if(a[i]!=x)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else if(a[0]==a[2])
        {
            cout<<2<<endl;
            continue;
        }
        else 
        {
            cout<<1<<endl;
            continue;
        }
    }
}