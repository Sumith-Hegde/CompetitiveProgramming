// sub array sum equals k (leetcode)
// Link to the problem - https://leetcode.com/problems/subarray-sum-equals-k/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        map<int,int> m;
        //since count is asked conditions must be in if instead of else if(inorder to get all count)
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
            {
                count++;
            }
            if(m.find(sum-k)!=m.end())
            {
                count+=m[sum-k];        
            }
            m[sum]++;   
        }
        return count;
    }
};