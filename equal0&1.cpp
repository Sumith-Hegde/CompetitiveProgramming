// Contiguous Array (leetcode)
// Link to the problem - https://leetcode.com/problems/contiguous-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> m;
        int maxLen=0;
        int sum=0;
        //1 => add 1
        //0 => add -1
        //use prefix sum to find max len of sub array with sum=0
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                sum+=-1;
            }
            if(nums[i]==1)
            {
                sum+=1;
            }
            if(sum==0)
            {
                maxLen=max(maxLen,i+1);
            }
            else if(m.find(sum)!=m.end())
            {
                maxLen=max(maxLen,i-m[sum]);
            }
            else
            {
                m[sum]=i;   
            }
        }
        return maxLen;
    }
};