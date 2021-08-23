// search 2D matrix (leetcode)
// Link to the problem - https://leetcode.com/problems/search-a-2d-matrix/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=n*m-1;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            int i=mid/m;
            int j=mid%m;
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return false;
    }
};