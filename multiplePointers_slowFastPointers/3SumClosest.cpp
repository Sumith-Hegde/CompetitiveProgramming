// 3Sum Closest (leetcode)
// Link to the problem - https://leetcode.com/problems/3sum-closest/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//same as 3Sum
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3)
        {
            return 0;
        }
        int mini=INT32_MAX;
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            //to avoid duplicates move i untill same value is present (except initially at 0th index)
            if(i==0||nums[i]!=nums[i-1])
            {
                //keep left at i+1 and right at end of array
                int l=i+1;
                int r=nums.size()-1;
                while(l<r)
                {
                    int sum=nums[i]+nums[l]+nums[r];
                    //if target found then thats the closest so return that
                    if(sum==target)
                    {
                        return sum;
                    }
                    //extra condition to get closest sum
                    if(abs(sum-target)<mini)
                    {
                        ans=sum;
                        mini=abs(sum-target);
                    }
                    //if sum is less then req sum increment left
                    //if sum is greater then req sum decrement right
                    //because we have sorted
                    if(sum<target)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};