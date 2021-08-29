// majority element 2 (leetcode)
// Link to the problem - https://leetcode.com/problems/majority-element-ii/
#include <bits/stdc++.h>
using namespace std;
//BBoyer Moore Voting algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int e1=nums[0];
        int e2=nums[0];
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==e1)
            {
                c1++;
            }
            else if(nums[i]==e2)
            {
                c2++;
            }
            else if(c1==0)
            {
                e1=nums[i];
                c1=1;
            }
            else if(c2==0)
            {
                e2=nums[i];
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==e1)
            {
                c1++;
            }
            else if(nums[i]==e2)
            {
                c2++;
            }
        }
        if(c1>(n/3))
        {
            ans.push_back(e1);
        }
        if(c2>(n/3))
        {
            ans.push_back(e2);
        }
        return ans;
    }
};