// max common prefix (leetcode)
// Link to the problem - https://leetcode.com/problems/longest-common-prefix/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string check=strs[0];
        int maxPrefix=check.size();
        for(auto s:strs)
        {
            for(int i=0;i<maxPrefix;i++)
            {
                if(s[i]!=check[i])
                {
                    maxPrefix=i;
                    break;
                }
            }
        }
        string prefix="";
        for(int i=0;i<maxPrefix;i++)
        {
            prefix+=check[i];
        }
        return prefix;
    }
};