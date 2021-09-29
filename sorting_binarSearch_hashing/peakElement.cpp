// find peak element (leetcode)
// Link to the problem - https://leetcode.com/problems/find-a-peak-element/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        if(nums.size()==1) return 0;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(m>0&&m<n-1)
            {
                if(nums[m]>nums[m+1]&&nums[m]>nums[m-1])
                {
                    return m;
                }
                else
                {
                    if(nums[m+1]>nums[m-1])
                    {
                        l=m+1;
                    }
                    else
                    {
                        h=m-1;
                    }
                }
            }
            else if(m==0)
            {
                if(nums[0]>nums[1])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                if(nums[n-1]>nums[n-2])
                {
                    return n-1;
                }
                else
                {
                    return n-2;
                }
            }
        }
        return -1;
    }
};
