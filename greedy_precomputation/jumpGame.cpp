// jump game (leetcode)
// Link to the problem - https://leetcode.com/problems/jump-game/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//set prevMax to nums[0] because that is max we can reach initially
//untill prev max reach keep updating current maxReach
//whenever we go beyond prevMax we need to make a jump so increment jump and update prevMax to maxReach
//if that is greater than or equal to last index then return true
//if we never reach last index return false
    bool canJump(vector<int>& nums) {
        int maxReach=0;
        int prevMax=nums[0];
        int n=nums.size();
        if(n==1) return true;
        for(int i=0;i<n;i++)
        {
            if(i<=maxReach)
            {
                if(i>prevMax)
                {
                    prevMax=maxReach;
                    if(prevMax>=n-1)
                    {
                        return true;
                    }
                }
                maxReach=max(maxReach,i+nums[i]);
                if(maxReach>=n-1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};