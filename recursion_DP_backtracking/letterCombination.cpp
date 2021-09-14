// letter combination (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//replace every number with all possible characters and get all combinations
    void find(string digits,int n,map<char,list<char>> &m,vector<string> &ans)
    {
        if(n<0)
        {
            ans.push_back(digits);
        }
        else
        {
            for(auto i:m[digits[n]])
            {
                cout<<i<<endl;
                int temp=digits[n]-'0';
                digits[n]=i;
                find(digits,n-1,m,ans);
                digits[n]=(char)(temp+'0');
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        map<char,list<char>> m;
        //map the keypad
        m['2'].push_back('a');
        m['2'].push_back('b');
        m['2'].push_back('c');
        m['3'].push_back('d');
        m['3'].push_back('e');
        m['3'].push_back('f');
        m['4'].push_back('g');
        m['4'].push_back('h');
        m['4'].push_back('i');
        m['5'].push_back('j');
        m['5'].push_back('k');
        m['5'].push_back('l');
        m['6'].push_back('m');
        m['6'].push_back('n');
        m['6'].push_back('o');
        m['7'].push_back('p');
        m['7'].push_back('q');
        m['7'].push_back('r');
        m['7'].push_back('s');
        m['8'].push_back('t');
        m['8'].push_back('u');
        m['8'].push_back('v');
        m['9'].push_back('w');
        m['9'].push_back('x');
        m['9'].push_back('y');
        m['9'].push_back('z');
        find(digits,digits.size()-1,m,ans);
        return ans;
    }
};