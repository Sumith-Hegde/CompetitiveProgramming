// uniquePaths 2 (leetcode)
// Link to the problem - https://leetcode.com/problems/unique-paths-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//normal iterative DP
//if cell is obstacle or start is obstacle then no of paths=0
//initialize first row and first column with previous cell of same column 
//because they hav only one way either from above or from left
//else no of paths to current cell=paths from above+paths from left
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        // if(obstacleGrid[n-1][m-1]==1||obstacleGrid[0][0]==1) return 0;
        // if(n==1&&m==1) return 1;
        vector<vector<int>> dp(n,(0,vector<int>(m,-1)));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    dp[i][j]=0;
                }
                else if(i==0&&j==0)
                {
                    dp[i][j]=1;
                }
                else if(i==0)
                {
                    dp[0][j]=dp[0][j-1];
                }
                else if(j==0)
                {
                    dp[i][0]=dp[i-1][0];
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    dp[i][j]=0;
                }
                else
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[n-1][m-1];
    }
};