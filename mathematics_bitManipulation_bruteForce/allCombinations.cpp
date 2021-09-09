// comn=binations (leetcode)
// Link to the problem - https://leetcode.com/problems/combinations/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>result;
    void backtrack(int i,int k,vector<int>&nums,vector<int>&solution)
    {
    
        if(k==0)
        {
            result.push_back(solution);
            return;
        }

        if(i==nums.size())
        {
            return;
        }

        if(k<0)
        {
            return;
        }

        // Skip the current element increment pointer i 

        backtrack(i+1,k,nums,solution);

        // Add the current element in our solution array

        solution.push_back(nums[i]);

        backtrack(i+1,k-1,nums,solution);
        
        //remove current element as it was already included

        solution.pop_back();
    }

vector<vector<int>> combine(int n, int k) {
    vector<int>nums;
    vector<int>solution;
    for(int i=1;i<=n;i++){
        nums.push_back(i);
    }
    backtrack(0,k,nums,solution);
    
    return result;
}
};