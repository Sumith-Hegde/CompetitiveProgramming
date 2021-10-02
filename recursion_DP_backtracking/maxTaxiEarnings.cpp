// max taxi earnings (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//knapsack approach take/dont take
//to get next valid trip use binary search for efficiency(thats why sorting is necessary at start)
    long long findMax(int i,vector<vector<int>> &r,vector<long long> &dp)
    {
        if(i>=r.size())
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        long long skip=findMax(i+1,r,dp);
        long long take=0;
        int l=i;
        int h=r.size()-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(r[m][0]<r[i][1])
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        take=r[i][1]-r[i][0]+r[i][2]+findMax(l,r,dp);
        return dp[i]=max(take,skip);
    }
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(),rides.end());
        vector<long long> dp(30001,-1);
        long long a=findMax(0,rides,dp);
        return a;
    }
};