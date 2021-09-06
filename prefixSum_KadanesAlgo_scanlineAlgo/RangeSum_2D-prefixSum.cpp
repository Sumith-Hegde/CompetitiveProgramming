// Range Sum 2D (leetcode)
// Link to the problem - https://leetcode.com/problems/range-sum-query-2d-immutable/
#include <bits/stdc++.h>
using namespace std;
class NumMatrix {
    vector<vector<int>> sum;
public:
    //2D prefix sum
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            vector<int> temp;
            for(int j=0;j<matrix[0].size();j++)
            {
                temp.push_back(0);
            }
            sum.push_back(temp);
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                sum[i][j]=0;
                sum[i][j]+=matrix[i][j];
                if(i-1>=0)
                {
                    sum[i][j]+=sum[i-1][j];
                }
                if(j-1>=0)
                {
                    sum[i][j]+=sum[i][j-1];
                }
                if(i-1>=0&&j-1>=0)
                {
                    sum[i][j]-=sum[i-1][j-1];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int s=sum[row2][col2];
        if(row1-1>=0)
        {
            s-=sum[row1-1][col2];
        }
        if(col1-1>=0)
        {
            s-=sum[row2][col1-1];
        }
        if(row1-1>=0&&col1-1>=0)
        {
            s+=sum[row1-1][col1-1];
        }
        return s;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */