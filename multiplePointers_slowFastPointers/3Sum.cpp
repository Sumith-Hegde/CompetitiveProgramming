// 3Sum (leetcode)
// Link to the problem - https://leetcode.com/problems/3sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//can be done by hashing each triplets to avoid duplicates in O(n^2) but space complexity is more
//TimeComplec=xity = O(n^2)
//SpaceComplexity = O(1) (ignoring output)
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        if(nums.size()<3)
        {
            return triplets;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            //to avoid duplicates move i untill same value is present (except initially at 0th index)
            if(i==0 || (i>0&&(nums[i]!=nums[i-1])))
            {
                //keep left at i+1 and right at end of array
                //sum of the 3 numbers should be 0 => sum of 2 == -(third one)
                //so problem comes down to 2 sum 
                int l=i+1;
                int r=nums.size()-1;
                int sum=0-nums[i];
                while(l<r)
                {
                    //if sum found then store them
                    if(nums[l]+nums[r]==sum)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        triplets.push_back(temp);
                        //to avoid duplicates move untill l&r cross or they point diffrent value
                        while(l<r&&nums[l]==nums[l+1]) l++;
                        while(l<r&&nums[r]==nums[r-1]) r--;
                        l++;
                        r--;
                    }
                    //if l+r is less then req sum increment left
                    //if l+r is greater then req sum decrement right
                    //because we have sorted
                    else if(nums[l]+nums[r]<sum) l++;
                    else r--;
                }
            }
        }
        return triplets;
    }
};