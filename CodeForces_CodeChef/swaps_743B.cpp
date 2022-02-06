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
        vector<int> b(n);
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        if(a[0]<b[0])
        {
            cout<<0<<endl;
            continue;
        }
        int i=0;
        int mini=0;
        int maxi=0;
        for(i=0;i<n;i++)
        {
            if(a[mini]<b[maxi]) break;
            if(a[i]<a[mini]) mini=i;
            if(b[i]>b[maxi]) maxi=i;
        }
        cout<<mini+maxi<<endl;
    }
    return 0;
}   