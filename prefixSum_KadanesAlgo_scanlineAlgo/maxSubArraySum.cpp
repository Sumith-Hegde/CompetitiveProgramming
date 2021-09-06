// max sub array sum (leetcode)
// Link to the problem - https://leetcode.com/problems/maximum-subarray/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//kadane's algorithm
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};