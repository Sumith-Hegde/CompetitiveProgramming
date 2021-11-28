#include <bits/stdc++.h>
using namespace std;
int x=0;
int find(int n,int k,int pre,int ans,vector<vector<int>> &dp)
{
    if(n==0&&k==0)
    {
        ans++;
        return dp[n][k]=ans;
    }
    if(n<0||k<=0||pre>x)
    {
        return 0;
    }
    if(n==0||k==0||pre>x)
    {
        return dp[n][k]=0;
    }
    if(dp[n][k]!=-1)
    {
        return dp[n][k];
    }
    int x=find(n-pre,k-1,pre,ans,dp);
    int y=find(n,k,pre+1,ans,dp);
    return dp[n][k]=x+y;
}
int main()
{
    int n=0;
    int k=0;
    cin>>n>>k;
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    x=n;
    int ans=0;
    int pre=1;
    int abc=find(n,k,pre,ans,dp);
    cout<<abc<<endl;
    return 0;
}