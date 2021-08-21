// Pascal's triangle (leetcode)
// Link to the problem - https://leetcode.com/problems/pascals-triangle/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        pascalTriangle.push_back({1});
        int i=0;
        while(i<numRows-1)
        {
            vector<int> row;
            row.push_back(1);
            for(int j=0;j<pascalTriangle[i].size()-1;j++)
            {
                row.push_back(pascalTriangle[i][j]+pascalTriangle[i][j+1]);
            }
            row.push_back(1);
            pascalTriangle.push_back(row);
            i++;
        }
        return pascalTriangle;
    }
};