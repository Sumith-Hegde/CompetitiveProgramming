// Wild Card Matching (leetcode)
// Link to the problem - https://leetcode.com/problems/wildcard-matching/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool match(int n,int m,string &s,string &p,vector<vector<int>> &dp)
    {
        //if both are exhausted then they match
        if(m<0&&n<0) return true;
        //if only pattern is exhausted then they do not match
        if(m<0) return false;
        //if only string is exhausted then remaining characters in pattern must be '*' to match
        if(n<0)
        {
            for(int i=0;i<=m;i++)
            {
                if(p[i]!='*')
                {
                    return false;
                }
            }
            return true;
        }
        //memoization
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        bool ans=false;
        //if characters of string and pattern match then decrement both n and m and check for rest of the string and pattern
        if(s[n]==p[m]||p[m]=='?')
        {
            ans=match(n-1,m-1,s,p,dp);
        }
        else if(p[m]=='*')
        {
            //if they do not match and current char of pattern is * then check for 2 cases- 
            //go further only in string or check further only in pattern
            ans=ans||match(n-1,m,s,p,dp);
            ans=ans||match(n,m-1,s,p,dp);
        }
        //memoization
        return dp[n][m]=ans;
    }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return match(n-1,m-1,s,p,dp);
    }
};