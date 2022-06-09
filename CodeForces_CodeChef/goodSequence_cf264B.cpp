#include <bits/stdc++.h>
using namespace std;
int findSequence(vector<int> &a,int i,int prev,int len,vector<int> &dp)
{
    if(i>=a.size())
    {
        return len;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    if(prev==-1)
    {
        return dp[i]=max(findSequence(a,i+1,a[i],len+1,dp),findSequence(a,i+1,prev,len,dp));
    }
    if(a[i]<=prev||__gcd(a[i],prev)<=1)
    {
        return dp[i]=findSequence(a,i+1,prev,len,dp);
    }
    return dp[i]=max(findSequence(a,i+1,a[i],len+1,dp),findSequence(a,i+1,prev,len,dp));
}
int main()
{
    int n=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    vector<int> dp(n,-1);
    ans=findSequence(a,0,-1,0,dp);
    cout<<ans<<endl;
    return 0;
}