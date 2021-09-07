// max Ones (leetcode)
// Link to the problem - https://leetcode.com/problems/max-consecutive-ones/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//simple linear traversal
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                maxi=max(maxi,count);
                count=0;
            }
        }
        return max(maxi,count);
    }
};