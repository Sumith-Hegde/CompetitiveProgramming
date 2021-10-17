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
        sort(a.begin(),a.end());
        int i=0;
        while(a[i]==a[i+1]&&i<n-1)
        {
            i++;
        }
        cout<<n-i-1<<endl;
    }
}