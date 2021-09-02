// combination sum (leetcode)
// Link to the problem - https://leetcode.com/problems/combination-sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//recursion
// TimeComplexity = O(n^2)
// SpaceComplexity = O(n^2)
//find all subsets/subsequences/combinations
    void findSumCombinations(vector<vector<int>> &combs,vector<int> &candidates,int i,int target,vector<int> &v)
    {
        if(i==candidates.size())
        {
            if(target==0)
            {
                combs.push_back(v);
            }
            return;
        }
        if(candidates[i]<=target)
        {
            v.push_back(candidates[i]);
            findSumCombinations(combs,candidates,i,target-candidates[i],v);
            v.pop_back();   
        }
        findSumCombinations(combs,candidates,i+1,target,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combs;
        vector<int> v;
        findSumCombinations(combs,candidates,0,target,v);
        return combs;
    }
};