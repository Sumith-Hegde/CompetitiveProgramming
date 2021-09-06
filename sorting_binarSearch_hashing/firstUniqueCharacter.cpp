// first unique character (leetcode)
// Link to the problem - https://leetcode.com/problems/first-unique-character-in-a-string/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> frequency;
        for(int i=0;i<s.size();i++)
        {
            frequency[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(frequency[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};