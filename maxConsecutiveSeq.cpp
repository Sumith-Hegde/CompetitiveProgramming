// max consecutive sequence (leetcode)
// Link to the problem - https://leetcode.com/problems/longest-consecutive-sequence/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int maxLen=0;
        // insert all nums into set
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        //check if one less than current number exists if yes move ahead(because we need least element in sequence)
        //once you find least,untill you not find next number keep increasing current and length
        //store maxLen
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                int len=1;
                int a=nums[i];
                while(s.find(a+1)!=s.end())
                {
                    a++;
                    len++;
                }
                maxLen=max(maxLen,len);
            }
        }
        return maxLen;
    }
};
