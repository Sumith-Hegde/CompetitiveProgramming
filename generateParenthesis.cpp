// generate parenthesis (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//DP
//each step 2 choices - either add opening bracket or add closing bracket
    void parenthesis(vector<string> &ans,string s,int open,int close)
    {
        //when no more opening or closing brckets to add push the current string to ans
        if(open==0&&close==0)
        {
            ans.push_back(s);
        }
        //if all opening brackets are used only choice is to add closing bracket
        else if(open==0)
        {
            s+=')';
            parenthesis(ans,s,open,close-1);
        }
        //if to close brackets are more then 2 choices to open or to close
        else if(close>open)
        {
            string s1=s+')';
            string s2=s+'(';
            parenthesis(ans,s1,open,close-1);
            parenthesis(ans,s2,open-1,close);
        }
        //if close==open then we cannot close the bracket because that would violate the validity of parenthesis
        else if(close==open)
        {
            string s2=s+'(';
            parenthesis(ans,s2,open-1,close);
        }
        //close should never be less than open(to maintain validity)
        //so do nothing in that case
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        //any valid string should always start with an opening bracket 
        parenthesis(ans,"(",n-1,n);
        return ans;
    }
};