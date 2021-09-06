// length of last word (leetcode)
// Link to the problem - https://leetcode.com/problems/length-of-last-word/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        bool foundCharacter=false;
        int length=0;
        //from the end of the string untill you find a space character increase length
        //(ignoring trailing spaces)
        for(int i=s.size()-1;i>=0;i--)
        {
            if(!foundCharacter&&s[i]==' ')
            {
                continue;
            }
            foundCharacter=true;
            if(s[i]==' ')
            {
                break;
            }
            length++;
        }
        return length;
    }
};