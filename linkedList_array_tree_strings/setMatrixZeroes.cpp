// set matrix zeroes (leetcode)
// Link to the problem - https://leetcode.com/problems/set-matrix-zeroes/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row0=1;
        int col0=1;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    //since (0,0) is ambiguious for whether col or row, we take 2 different variables for col0 and row0
                    //to check whether row0 and col0 should be filled with 0s or not
                    if(i==0)
                    {
                        row0=0;
                    }
                    if(j==0)
                    {
                        col0=0;
                    }
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[0][j]==0||matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(row0==0)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[0][j]=0;
            }
        }
        if(col0==0)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};