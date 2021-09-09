// contains duplicate 3 (leetcode)
// Link to the problem - https://leetcode.com/problems/contains-duplicate-iii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(t<0||k<=0)
        {
            return false;
        }
        long long a=t;
        long long b=k;
        multiset<long long> m;
        for(int i=0;i<nums.size();i++)
        {
            //remove start of window
            if(i>k)
            {
                m.erase((long long)nums[i-k-1]);
            }
            //in multiset find number just greater than or equal to nums[i]-t
            auto maxi=m.lower_bound((long long)nums[i]-t);
            if(maxi!=m.end())
            {
                //if that number is found then check if diffrence is less than or equal to t
                //because if nums[i] is less than lower_bound then diffrence will be greater
                if(*maxi-(long long)nums[i]<=t)
                {
                    return true;
                }
            }
            m.insert(nums[i]);
        }
        return false;
    }
};