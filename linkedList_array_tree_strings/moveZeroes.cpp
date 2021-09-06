// Move Zeroes (leetcode)
// Link to the problem - https://leetcode.com/problems/move-zeroes/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int current=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[current++]=nums[i];
            }
        }
        i=current;
        while(i<nums.size())
        {
            nums[i++]=0;
        }
    }
};