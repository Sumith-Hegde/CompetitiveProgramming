// group anagrams (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        //solution 1
        //map every string to the sorted order of that string as the key
        //becuse anagrams on sorting give same string
        map<string,vector<string>> m;
        for(auto i: strs)
        {
            string temp=i;
            sort(temp.begin(),temp.end());
            m[temp].push_back(i);
        }
        for(auto i: m)
        {
            ans.push_back(i.second);
        }

        //solution 2
        //map every string to the frequency map of that string as key
        //because frequency maps of anagrams are same
        // map<map<char,int>,vector<string>> m;
        // for(auto i: strs)
        // {
        //     map<char,int> temp;
        //     for(auto j:i)
        //     {
        //         temp[j]++;
        //     }
        //     m[temp].push_back(i);
        // }
        // for(auto i:m)
        // {
        //     ans.push_back(i.second);
        // }
        return ans;
    }
};