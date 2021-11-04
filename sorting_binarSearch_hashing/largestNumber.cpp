// largest number (leetcode)
// Link to the problem - https://leetcode.com/problems/largest-number/
#include <bits/stdc++.h>
using namespace std;
bool comp(int i,int j)
    {
        string s="";
        string t="";
        s+=to_string(i);
        s+=to_string(j);
        t+=to_string(j);
        t+=to_string(i);
        long long x=0;
        long long y=0;
        stringstream a(s);
        stringstream b(t);
        a>>x;
        b>>y;
        return x>y;
    }
class Solution {
public:
    //sort the array based on what order among to gives max value on concatenation
    string largestNumber(vector<int>& nums) {
        bool s=true;
        for(auto i:nums)
        {
            if(i!=0)
            {
                s=false;
            }
        }
        if(s) return "0";
        sort(nums.begin(),nums.end(),comp);
        string ans="";
        for(auto i: nums)
        {
            ans+=to_string(i);
        }
        return ans;
        
    }
};

