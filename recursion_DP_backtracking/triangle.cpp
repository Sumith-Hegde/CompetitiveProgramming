// triangle (leetcode)
// Link to the problem - https://leetcode.com/problems/triangle/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
// recursion method gives TLE
//     int minPath(vector<vector<int>> &triangle,int row,int col)
//     {
//         if(row==triangle.size()-1) return triangle[row][col];
//         int sum=triangle[row][col];
//         int mini=min(minPath(triangle,row+1,col),minPath(triangle,row+1,col+1));
//         return sum+mini;
        
        
        
//     }
    int minimumTotal(vector<vector<int>>& triangle) {
        // return minPath(triangle,0,0);
        
        //copy last row and from there climb up taking min values
        vector<int> t;
        int n=triangle.size();
        for(int i=0;i<triangle[n-1].size();i++)
        {
            t.push_back(triangle[n-1][i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                t[j]=triangle[i][j]+min(t[j],t[j+1]);
            }
        }
        return t[0];
    }
};