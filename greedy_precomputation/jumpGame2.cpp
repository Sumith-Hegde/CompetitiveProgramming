// jump game 2 (leetcode)
// Link to the problem - https://leetcode.com/problems/jump-game-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//set prevMax to nums[0] because that is max we can reach initially
//untill prev max reach keep updating current maxReach
//whenever we go beyond prevMax we need to make a jump so increment jump and update prevMax to maxReach
//if that is greater than or equal to last index then if max reach is within prevMax return jumps done so far
//else return jumps so far +1
    int jump(vector<int>& nums) {
        int maxReach=0;
        int prevMax=nums[0];
        int jumps=1;
        int n=nums.size();
        if(n==1) return 0;
        if(n==2) return 1;
        for(int i=0;i<n;i++)
        {
            if(i>prevMax)
            {
                jumps++;
                prevMax=maxReach;
                if(prevMax>=n-1)
                {
                    return jumps+1;
                }
            }
            maxReach=max(maxReach,i+nums[i]);
            if(maxReach>=n-1)
            {
                if(maxReach<=prevMax)
                {
                    return jumps;
                }
                return jumps+1;
            }
        }
        return 0;
    }
};