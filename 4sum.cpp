// 4sum (leetcode)
// Link to the problem - https://leetcode.com/problems/4sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//2 pointers + 2sum method
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> quads;
        if(nums.size()==0)
        {
            return quads;
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target2=target-nums[i]-nums[j];
                int l=j+1;
                int r=n-1;
                while(l<r)
                {
                    int lr=nums[l]+nums[r];
                    if(lr<target2)
                    {
                        l++;
                    }
                    else if(lr>target2)
                    {
                        r--;
                    }
                    else
                    {
                        vector<int> a(4,0);
                        a[0]=nums[i];
                        a[1]=nums[j];
                        a[2]=nums[l];
                        a[3]=nums[r];
                        quads.push_back(a);
                        while(l<r&&nums[l]==a[2]) l++;
                        while(l<r&&nums[r]==a[3]) r--;
                    }
                    
                }
                while(j+1<n&&nums[j+1]==nums[j]) j++;
            }
            while(i+1<n&&nums[i+1]==nums[i]) i++;
        }
        return quads;
    }
};