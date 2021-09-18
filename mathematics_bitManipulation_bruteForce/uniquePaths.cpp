// unique paths (leetcode)
// Link to the problem - https://leetcode.com/problems/unique-paths/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //grid - mxn => m-1 down steps and n-1 right steps
    //their arrangement gives total unique ways
    //so find ((n-1)+(m-1))C(m-1)
    int gcd(int a,int b)
    {
        if(a==0)
        {
            return b;
        }
        if(b==0)
        {
            return a;
        }
        return gcd(b,a%b);
    }
    int uniquePaths(int m, int n) {
        int r=m-1,num=m+n-2;
        long long ans=1,k=1;
        r=min(r,num-r);
        cout<<num<<" "<<r<<endl;
        while(r)
        {
            ans=ans*num;
            k=k*r;
            int g=gcd(ans,k);
            ans=ans/g;
            k=k/g;
            num--;
            r--;
        }
        return ans;
       
    }
};