// count vowel sun=b strings (leetcode)
// Link to the problem - https://leetcode.com/contest/weekly-contest-266/problems/count-vowel-substrings-of-a-string/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //sliding window
    bool isVowel(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') return true;
        return false;
    }
    int atmostKunique(string word,int k)
    {
        int i=0;
        // int j=0;
        int n=word.size();
        unordered_map<char,int> m;
        int count=0;
        int ans=0;
        for(int j=0;j<n;j++)
        {
            if(!isVowel(word[j]))
            {
                i=j+1;
                //substring breaks here so clear previous
                m.clear();
                continue;
            }
            m[word[j]]++;
            while(m.size()>k)
            {
                m[word[i]]--;
                if(m[word[i]]==0) m.erase(word[i]);
                i++;
            }
            ans+=j-i+1;
        }
        return ans;
    }
    int countVowelSubstrings(string word) {
        //to get exact 5, find less than or equal to 5 - less than or equal to 4        
        return atmostKunique(word,5)-atmostKunique(word,4);
    }
};