#include <bits/stdc++.h>
using namespace std;
// int minBoost(vector<pair<int,int>> &m,int n)
// {
//     int boosters=0;
//     int currentBooster=m[0].first;
//     int range=m[0].first;
//     // cout<<range<<endl;
//     for(int i=0;i<m.size();i++)
//     {
//         range=min(range,m[i].first-m[i].second);
//         if(m[i].first==currentBooster)
//         {
//             boosters++;
//             currentBooster=range;
//         }
//     }
//     return boosters;
// }
int minBoost(int pre,int currentReach,int i,vector<pair<int,int>> &m,int boosters,int distance,vector<int> &dp)
{
    if(i>m.size()-1||currentReach>m[i].first)
    {
        return -1;
    }
    if(currentReach<=0)
    {
        return dp[i]=boosters;
    }
    if(dp[i]!=-1) return dp[i];
    int x=0;
    // if(m[i].first>=currentReach)
    // {
        x=minBoost(m[i].first,currentReach-m[i].second,i+1,m,boosters+1,distance,dp);
    // }
    // else
    // {
    //     x=minBoost(m[i].first,currentReach+m[i].second,i+1,m,boosters+1,distance,dp);
    // }
    int y=minBoost(m[i].first,currentReach,i+1,m,boosters,distance,dp);
    if(x==-1&&y==-1)
    {
        return -1;
    }
    if(x==-1)
    {
        return dp[i]=y;
    }
    if(y==-1)
    {
        return dp[i]=x;
    }
    return dp[i]=min(x,y);
}
int main()
{
    vector<int> answers;
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        if(n==0)
        {
            answers.push_back(-1);
            continue;
        }
        if(n==1)
        {
            answers.push_back(0);
            continue;
        }
        vector<pair<int,int>> m(n);
        vector<pair<int,int>> m2(n);
        for(int i=0;i<n;i++)
        {
            cin>>m[i].first>>m[i].second;
        } 
        int dist,reach;
        cin>>dist>>reach;
        // cout<<dist<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     m2[i].first=dist-m[i].first;
        //     m2[i].second=m[i].second;
        //     // cout<<i.first<<endl;
        // }
        sort(m.begin(),m.end(),greater<pair<int,int>>());
        // for(int i=0;i<n;i++)
        // {
        //     cout<<m[i].first<<" "<<m[i].second<<endl;
        // }
        // cout<<minBoost(m,m[0].first)<<endl;
        vector<int> dp(n+1,-1);
        int boosters=0;
        int pre=dist;
        // cout<<minBoost(pre,dist-reach,0,m,boosters,dist,dp)<<endl;
        answers.push_back(minBoost(pre,dist-reach,0,m,boosters,dist,dp));
    }
    for(auto i: answers)
    {
        cout<<i<<endl;
    }
    return 0;
}