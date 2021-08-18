// rotate array (leetcode)
// Link to the problem - https://leetcode.com/problems/rotate-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(int start,int end,vector<int> &nums)
    {
        int i=start;
        int j=end;
        while(i<=j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0||nums.size()==1)
        {
            return;
        }
        if(nums.size()<k)
        {
            while(k--)
            {
                reverse(0,nums.size()-2,nums);
                reverse(0,nums.size()-1,nums);
            }
            return;
        }
      // while(k--)
      // {
      //     int a=nums[nums.size()-1];
      //     nums.pop_back();
      //     nums.insert(nums.begin(),a);
      // }
        int breakP=nums.size()-k-1;
        reverse(0,breakP,nums);
        reverse(breakP+1,nums.size()-1,nums);
        reverse(0,nums.size()-1,nums);
    }
};
