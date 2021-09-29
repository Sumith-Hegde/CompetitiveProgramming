// kth smallest element in sorted matrix (leetcode)
// Link to the problem - https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//gives number of elements less than or equal to x in the sorted matrix
    int lessThan(int x,vector<vector<int>> &m)
    {
        int i=0;
        int j=m.size()-1;
        int count=0;
        while(i>=0&&j>=0&&i<m.size()&&j<m.size())
        {
            if(m[i][j]>x)
            {
                j--;
            }
            else
            {
                count+=j+1;
                i++;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int l=matrix[0][0];
        int h=matrix[n-1][n-1];
        int ans=-1;
        //binary search with low=smallest element in array and high=largest value in array
        while(l<=h)
        {
            int m=l+(h-l)/2;
            int c=lessThan(m,matrix);
            if(c>=k)
            {
                ans=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
        
    }
}; 