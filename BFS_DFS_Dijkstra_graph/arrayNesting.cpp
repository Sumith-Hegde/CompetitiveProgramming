// array nesting (leetcode)
// Link to the problem - https://leetcode.com/problems/array-nesting/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//return longest possible cycle
//if a node/value is already encountered then nonneed to check for that element again
    void maximize(vector<int> &nums,vector<int> &a,int &len,int i)
    {
        if(a[i]==1) return;
        len++;
        a[i]=1;
        maximize(nums,a,len,nums[i]);
    }
    int arrayNesting(vector<int>& nums) {
        int maxi;
        int n=nums.size();
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
                if(a[i]!=1)
                {
                    int len=0;
                    maximize(nums,a,len,i);
                    if(len==n) return len;
                    maxi=max(len,maxi);
                }
        }
        return maxi;
    }
};