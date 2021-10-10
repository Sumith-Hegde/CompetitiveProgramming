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
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[2*n-i-1]<<" ";
        }
        cout<<endl;
    }
}