// find duplicate (leetcode)
// Link to the problem - https://leetcode.com/problems/find-the-duplicate-number/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //similar to finding cycle and start of cycle in linked list
    // TimeComplexity = O(n)
    // SpaceComplexity = O(1)
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int j=0;
        do
        {
            i=nums[i];
            j=nums[nums[j]];
        }while(nums[i]!=nums[j]);
        i=0;
        while(nums[i]!=nums[j])
        {
            i=nums[i];
            j=nums[j];
        }
        return nums[j];
    }
};