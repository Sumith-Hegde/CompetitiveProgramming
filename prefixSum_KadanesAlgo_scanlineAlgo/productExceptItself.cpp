// Product of Array except itself (leetcode)
// Link to the problem - https://leetcode.com/problems/product-of-array-except-self/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //prefix sum concept
    //left to right - store product till previous
    //right(last but one element) to left multiply already stored with product from right
    //start left to right with product p=1
    //start right(last but one element) to left with product p=last element
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> products(n,0);
        int p=1;
        for(int i=0;i<nums.size();i++)
        {
            products[i]=p;
            p=p*nums[i];
        }
        p=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            products[i]=products[i]*p;
            p=p*nums[i];
        }
        return products;
    }
};