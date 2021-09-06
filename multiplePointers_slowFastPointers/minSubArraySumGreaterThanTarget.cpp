// minimum length of sub array with sum greater than target (leetcode)
// Link to the problem - https://leetcode.com/problems/minimum-size-subarray-sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int minLen=INT32_MAX;
        int sum=0;
        //2 pointer
        //move right pointer untill ypu get sum>=target
        //then store minLen
        //then untill sum becomes less than target move left pointer and decrease sum(keep updating minLen here as well)
        while(j<nums.size())
        {
            sum+=nums[j];
            cout<<sum<<endl;
            // if(sum>=target)
            // {
                // minLen=min(minLen,j-i+1);
                while(sum>=target)
                {
                    minLen=min(minLen,j-i+1);
                    sum=sum-nums[i];
                    i++;
                }
            // }
            j++;
        }
        if(minLen>nums.size()) return 0;
        return minLen;
    }
};