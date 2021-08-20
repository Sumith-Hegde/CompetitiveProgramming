// merge intervals (leetcode)
// Link to the problem - https://leetcode.com/problems/merge-intervals/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        if(intervals.size()==0) return merged;
        sort(intervals.begin(),intervals.end());
        merged.push_back(intervals[0]);
        int i=0;
        for(int j=1;j<intervals.size();j++)
        {
            if(intervals[j][0]<=merged[i][1])
            {
                vector<int> temp;
                temp.push_back(merged[i][0]);
                temp.push_back(max(intervals[j][1],merged[i][1]));
                merged.pop_back();
                merged.push_back(temp);
            }
            else
            {
                merged.push_back(intervals[j]);
                i++;
            }
        }
        return merged;
    }
};