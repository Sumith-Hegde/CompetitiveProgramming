// palindrome number (leetcode)
// Link to the problem - https://leetcode.com/problems/palindrome-number/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //instead of checking for overflow cases we can simply reverse only tha halsf of the 
    //number and equate it to other half
    int reverse(int x) {
        int a=x;
        int prev=0;
        int res=0;
        while(a!=0)
        {
            // if(res>100000000||res<-100000000) return 0;
            if(res>(INT32_MAX/10)||res<(INT32_MIN/10)) return 0;
            int current=a%10;
            a=a/10;
            res=(res*10)+current;
            if((res-current)/10!=prev) return 0;
            prev=res;
            
        }
        return res;
        
        
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x/10==0) return true;
        int y=reverse(x);
        if(y==0) return false;
        if(y==x) return true;
        return false;
    }
};