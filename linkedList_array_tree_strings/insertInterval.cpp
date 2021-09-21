// insert interval (leetcode)
// Link to the problem - https://leetcode.com/problems/insert-interval/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i=0;
        if(intervals.size()==0) 
        {
            ans.push_back(newInterval);
            return ans;
        }
        if(newInterval[0]<intervals[0][0])
        {
            ans.push_back(newInterval);
        }
        while(i<intervals.size()&&intervals[i][0]<=newInterval[0])
        {
            ans.push_back(intervals[i]);
            i++;
        }
        int k=ans.size()-1;
        if(newInterval[0]==ans[k][0])
        {
             ans[k][1]=max(newInterval[1],ans[k][1]);
        }
        else
        {
            if(newInterval[0]<=ans[k][1])
            {
                ans[k][1]=max(newInterval[1],ans[k][1]);
            }
            else
            {
                ans.push_back(newInterval);
            }
        }
        for(;i<intervals.size();i++)
        {
            k=ans.size()-1;
            if(intervals[i][0]==ans[k][0])
            {
                ans[k][1]=max(intervals[i][1],ans[k][1]);
            }
            else
            {
                if(intervals[i][0]<=ans[k][1])
                {
                    ans[k][1]=max(intervals[i][1],ans[k][1]);
                }
                else
                {
                    ans.push_back(intervals[i]);
                }
            }
                
        }
        return ans;
    }
};