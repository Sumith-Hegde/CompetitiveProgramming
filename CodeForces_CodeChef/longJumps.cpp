// problem link - https://codeforces.com/contest/1472/problem/C
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
        vector<int> jumps(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int maxi=0;
        //DP
        //from right store (current value+value after jumping) 
        //max of these will be the answer
        for(int i=n-1;i>=0;i--)
        {
            jumps[i]=a[i];
            if(i+a[i]<n)
            {
                jumps[i]+=jumps[i+a[i]];
            }
        }
        for(int i=0;i<jumps.size();i++)
        {
            maxi=max(maxi,jumps[i]);
        }
        cout<<maxi<<endl;
    }
}