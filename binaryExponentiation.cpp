// x power n (leetcode)
// Link to the problem - https://leetcode.com/problems/powx-n/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        double answer=1.0;
        long long a=n;
        if(a<0) a=-1*a; //if power is negative make it positive
        //untill the power becomes zero do the following conversion
        //example - x^(2k) = (x*x)^k
        //          x^(2k+1) = x*((x)^(k-1))
        while(a)
        {
            if(a%2==0)
            {
                x=x*x;
                a=a/2;
            }
            else
            {
                answer*=x;
                a=a-1;
            }
        }
        //if power was negative we need to retor 1/answer
        if(n<0) answer=(double)1.0/(double)answer;
        return answer;
    }
};