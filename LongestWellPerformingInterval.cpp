// longest well performing interval (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//kadane's algo
    int longestWPI(vector<int>& hours) {
        map<int,int> m;
        int sum=0;
        int maxLen=0;
        for(int i=0;i<hours.size();i++)
        {
            if(hours[i]>8) sum++;
            if(hours[i]<=8) sum--;
            if(sum>0)
            {
                maxLen=i+1;
            }
            //find sum-1 because we can only add the value '1'
            if(m.find(sum-1)!=m.end())
            {
                maxLen=max(maxLen,i-m[sum-1]);
            }
             if(m.find(sum)==m.end()) m[sum]=i;
        }
        return maxLen;
//         int j=0;
//         int ans=0;
//         int s=0;
//         unordered_map<int, int> mp;
//         while(j<hours.size())
//         {
//             if(hours[j]>8)
//                 s++;
//             else
//                 s--;
//             if(s>0)
//                 ans=j+1;
            
//             if(mp.find(s-1)!=mp.end())
//                 ans=max(ans, j-mp[s-1]);
            
//             if(mp.find(s)==mp.end())
//                 mp[s]=j;
            
//             j++;
//         }
//         return ans;
    }
};