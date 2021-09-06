// trailing zeroes in factorial (leetcode)
// Link to the problem - https://leetcode.com/problems/factorial-trailing-zeroes/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        int temp=n;
        int power5=5;
        while(temp/power5>0)
        {
            count+=temp/power5;
            power5=power5*5;
        }
        return count;
    }
};