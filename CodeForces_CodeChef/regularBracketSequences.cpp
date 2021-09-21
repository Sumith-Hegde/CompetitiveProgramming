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
        int k=0;
        for(int i=1;i<n+1;i++)
        {
            k=i;
            for(int j=1;j<k+1;j++)
            {
                cout<<'(';
            }
            for(int j=1;j<k+1;j++)
            {
                cout<<')';
            }
            for(int j=1;j<(n-k)+1;j++)
            {
                cout<<"()";
            }
            cout<<endl;
        }
    }
}