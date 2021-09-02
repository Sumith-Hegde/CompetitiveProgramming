// sum of range (leetcode)
// Link to the problem - https://leetcode.com/problems/range-sum-query-immutable/
#include <bits/stdc++.h>
using namespace std;
class NumArray {
    vector<int> sum;
public:
//prefix sum
// TimeComplexity = O(n)
// SpaceComplexity = O(n)
    NumArray(vector<int>& nums) {
        // arr=nums;
        int s=0;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
           if(i==0)
           {
               sum.push_back(nums[i]);
           }
            else
            {
                sum.push_back(sum[i-1]+nums[i]);
            }
        }
    }
    //each query - O(1)
    int sumRange(int left, int right) {
        if(left==0) return sum[right];
        return sum[right]-sum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */