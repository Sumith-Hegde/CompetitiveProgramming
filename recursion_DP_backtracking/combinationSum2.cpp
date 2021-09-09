// combination sum 2 (leetcode)
// Link to the problem - https://leetcode.com/problems/combination-sum-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findCombinations(int ind,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds)
    {
        //if target has been exhausted(it is found) then store the numbers into ans
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        //from current index for all the elements make 2 choices - either include or not include
        for(int i=ind;i<arr.size();i++)
        {
            //to avoid repetitions move untill different number is found
            if(i>ind&&arr[i]==arr[i-1]) continue;
            //if current number is greater than target then break because since array is sorted next numbers will also be greater
            if(arr[i]>target) break;
            //first choice - choose current element
            ds.push_back(arr[i]);
            findCombinations(i+1,target-arr[i],arr,ans,ds);
            //second choice - do not include current element (taken care by for loop itself)
            //but before second choice you must remove the current element from combination since it is already included in first choice
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //sort to take care of repetitions
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        //ds - to store each combinations
        vector<int> ds;
        findCombinations(0,target,candidates,ans,ds);
        return ans;
    }
};