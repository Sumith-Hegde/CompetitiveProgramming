// reverse integer (leetcode)
// Link to the problem - https://leetcode.com/problems/reverse-integer/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int a=x;
        int prev=0;
        int res=0;
        while(a!=0)
        {
            // if(res>100000000||res<-100000000) return 0;
            // to check overflow
            if(res>(INT32_MAX/10)||res<(INT32_MIN/10)) return 0;
            int current=a%10;
            a=a/10;
            res=(res*10)+current;
            //to check overflow
            if((res-current)/10!=prev) return 0;
            prev=res;
            
        }
        return res;
        
        
    }
};