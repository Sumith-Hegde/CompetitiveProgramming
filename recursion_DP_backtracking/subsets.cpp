// subsets (leetcode)
// Link to the problem - https://leetcode.com/problems/subsets/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    void makeSubsets(int i,int n,vector<int> nums)
    {
        if(i==n)
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        makeSubsets(i+1,n,nums);
        v.pop_back();
        makeSubsets(i+1,n,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        makeSubsets(0,nums.size(),nums);
        return ans;
    }
};