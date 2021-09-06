// max water container (leetcode)
// Link to the problem - https://leetcode.com/problems/container-with-most-water/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int water=0;
        while(i<j)
        {
            if(height[i]<=height[j])
            {
                water=max(water,(j-i)*height[i]);
                i++;
            }
            else
            {
                water=max(water,(j-i)*height[j]);
                j--;
            }
        }
        return water;
    }
};