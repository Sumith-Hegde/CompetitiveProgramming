// single element in sorted array (leetcode)
// Link to the problem - https://leetcode.com/problems/single-element-in-a-sorted-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //O(n) solution using xor
        
        // int xorr=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     xorr=(xorr^nums[i]);
        // }
        // return xorr;
        
        //O(logn) solution using binarySearch
        int l=0;
        int h=nums.size()-2;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            //if all numbers appear twice i.e no single element,
            //then always first instance will be at even index and second at odd index
            //so to find single element
            //check on which side (right or left) the above rule is violated
            //and search on that side
            if(m%2==0)
            {
                if(nums[m+1]==nums[m])
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
            else
            {
                if(nums[m-1]==nums[m])
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
        }
        return nums[l];
    }
};