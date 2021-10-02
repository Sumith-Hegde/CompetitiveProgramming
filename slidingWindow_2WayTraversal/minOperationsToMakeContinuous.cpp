// min operations to make array continuous (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;            
class Solution {
public:
    int minOperations(vector<int>& nums) {
        // int count=0;
        // map<int,int> m;
        // for(auto i:nums)
        // {
        //     if(m[i]>0)
        //     {
        //         count++;
        //     }
        //     m[i]++;
        // }
        // cout<<count<<endl;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        //removes duplicates
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int mini=INT32_MAX;
        int j=0;
        //find max sub array which satisfies the constraints of continuous array
        //other elemnts which are not part of that sub array can be changed to make total array continuous
        for(int i=0;i<n;i++)
        {
            while(j<nums.size()&&(nums[j]-nums[i])<=n-1)
            {
                j++;
            }
            mini=min(mini,n-j+i);
        }
        // if(count>0)
        // {
        //     return mini+count-1;
        // }
        return mini;
    }
};
