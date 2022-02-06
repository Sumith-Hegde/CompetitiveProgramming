#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,k=0;
        cin>>n>>k;
        if(n==1&&k==1)
        {
            cout<<"R"<<endl;
            continue;
        }
        if(k>ceil(n/2.0))
        {
            cout<<-1<<endl;
            continue;
        }
        vector<vector<char>> a(n,vector<char>(n,'.'));
        for(int i=0;i<n;i+=2)
        {
            for(int j=0;j<n;j+=2)
            {
                if(i==j&&k>0)
                {
                    a[i][j]='R';
                    k--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}