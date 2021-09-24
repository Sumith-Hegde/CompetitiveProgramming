// link - https://codeforces.com/contest/1540/problem/A
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
            a[i]=i+1;
        }
        if(n%2==0)
        {
            for(int i=0;i<n;i+=2)
            {
                swap(a[i],a[i+1]);
            }
        }
        else
        {
            a[0]=3;
            a[1]=1;
            a[2]=2;
            for(int i=3;i<n;i+=2)
            {
                swap(a[i],a[i+1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}   