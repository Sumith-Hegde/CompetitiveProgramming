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
        bool possible=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                possible=false;
            }
        }
        if(possible)
        {
            cout<<"YES"<<endl;
            cout<<101<<endl;
            for(int i=0;i<101;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}