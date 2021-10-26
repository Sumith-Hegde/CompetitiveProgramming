// Interleaving Strings (leetcode)
// Link to the problem - https://leetcode.com/problems/interleaving-string/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //simple recursion +memoization
    //no need to have k in dp only i&j are enough
    bool check(string &s1,string &s2,string &s3,int i,int j,int k,vector<vector<vector<int>>> &dp)
    {
        if(i>=s1.size()&&j>=s2.size()&&k>=s3.size()) return true;
        if(k>=s3.size()) return false;
        if(i>=s1.size()&&j>=s2.size()) return false;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        if(s3[k]==s1[i]&&s3[k]==s2[j])
        {
            return dp[i][j][k]=check(s1,s2,s3,i+1,j,k+1,dp)||check(s1,s2,s3,i,j+1,k+1,dp);
        }
        if(s3[k]==s1[i])
        {
            return dp[i][j][k]=check(s1,s2,s3,i+1,j,k+1,dp);
        }
        if(s3[k]==s2[j])
        {
            return dp[i][j][k]=check(s1,s2,s3,i,j+1,k+1,dp);
        }
        return dp[i][j][k]=false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s3.size()!=s1.size()+s2.size()) return false;
        int l=s1.size();
        int m=s2.size();
        int n=s3.size();
        vector<vector<vector<int>>> dp(l+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return check(s1,s2,s3,0,0,0,dp);
    }
};