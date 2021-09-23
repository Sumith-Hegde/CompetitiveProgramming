// search in rotated sorted array (leetcode)
// Link to the problem - https://leetcode.com/problems/search-in-rotated-sorted-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//small modification in binary search
    int binSearch(int l,int h,vector<int> &nums,int target)
    {
        if(l==h)
        {
            if(nums[l]==target)
            {
                return l;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            int m=l+(h-l)/2;
            //normal sorted array binary search case
            if(nums[l]<nums[h])
            {
                if(target<=nums[m])
                {
                    return binSearch(l,m,nums,target);
                }
                else
                {
                    return binSearch(m+1,h,nums,target);
                }
            }
            //if above 'if' block does not run then part to be checked is rotated part so binary search on both sides
            else
            {
                int x=binSearch(l,m,nums,target);
                int y=binSearch(m+1,h,nums,target);
                if(x!=-1) return x;
                if(y!=-1) return y;
                return -1;
            }
            
        }
    }
    int search(vector<int>& nums, int target) {
        return binSearch(0,nums.size()-1,nums,target);
    }
};

//instead of special conditions just binary search on both sides of array also worked on leet code