// find all anagrams (leetcode)
// Link to the problem - https://leetcode.com/problems/find-all-anagrams-in-a-string/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//count number of occurences of each character in pattern and also number of unique characters
    vector<int> findAnagrams(string s, string p) {
        map<char,int> m;
        vector<int> ans;
        int unique=0;
        for(int i=0;i<p.size();i++)
        {
            if(m.find(p[i])!=m.end())
            {
                m[p[i]]++;
            }
            else
            {
                m[p[i]]=1;
                unique++;
            }
        }
        cout<<p.size();
        int j=0;
        int i=0;
        while(j<s.size())
        {
            //in string move i and j as a window
            //moving j - if new character is present in pattern(map) decrement it
            //if it becomes zero decrement unique 
            // unique becomes 0 => all character are present in exact number as in pattern => anagram found
            if(m.find(s[j])!=m.end())
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                {
                    unique--;
                }
            }
            if(j-i+1<p.size())
            {
                j++;
            }
            else if(j-i+1==p.size())
            {
                if(unique==0)
                {
                    ans.push_back(i);
                }
                j++;
                //while moving i calculations wrt to index i should be restored
                //if character present in pattern(map) increment it
                //if value becomes 1 then unique must be incremented indicating new character 
                if(m.find(s[i])!=m.end())
                {
                     m[s[i]]++;
                    if(m[s[i]]==1)
                    {
                        unique++;
                    }
                }
                i++;
            }
        }
        return ans;
    }
};