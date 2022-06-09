// https://codeforces.com/contest/689/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m=0;
    cin>>m;
    long long low=0,high=1e17,ans=-1;
    while(low<=high)
    {
        long long temp=0;
        long long mid=low+(high-low)/2;
        for(long long i=2;i*i*i<=mid;i++)
        {
            temp+=mid/(i*i*i);
        }
        if(temp==m)
        {
            ans=mid;
            high=mid-1;
        }
        else if(temp<m)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}