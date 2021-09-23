// break palindrome (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        //if only one letter then not possible
        if(n<=1) return "";
        for(int i=0;i<n;i++)
        {
            if(palindrome[i]!='a')
            {
                //to get lexicographically smallest make the first non 'a' character to 'a'
                char temp=palindrome[i];
                palindrome[i]='a';
                //if the changed character is at the middle then 'a' cannot be added because string will still remain palindrome
                if(palindrome[n-i-1]=='a')
                {
                    //so revert back the change and check ahead
                    palindrome[i]=temp;
                    continue;
                }
                return palindrome;
            }
        }
        //if answer was not returned in above loop then either all characters are 'a' or only non 'a' character is in the middle
        //in that case to get lexicographically smallest make the last character as 'b'
        palindrome[n-1]='b';
        return palindrome;
    }
};