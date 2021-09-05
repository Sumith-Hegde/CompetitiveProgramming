// repeated dna seq (leetcode)
// Link to the problem - https://leetcode.com/problems/repeated-dna-sequences/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//sliding window +hashing
//TimeComplexity = O(n)
//SpaceComplexity = O(n)
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        if(s.size()<=10) return ans;
        cout<<"hi"<<endl;
        map<string,int> m;
        for(int i=0;i<s.size()-9;i++)
        {
            string temp=s.substr(i,10);
            m[temp]++;
            if(m[temp]==2)
            {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};