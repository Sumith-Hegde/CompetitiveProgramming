// Flight Bookings (leetcode)
// Link to the problem - https://leetcode.com/problems/corporate-flight-bookings/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> reserved(n,0);
        //scanline algorithm
        // TimeComplexity = O(n)
        // SpaceComplexity = O(n)
        for(auto i:bookings)
        {
            reserved[i[0]-1]+=i[2];
            if(i[1]<n)
            {
                reserved[i[1]]-=i[2];
            }
        }
        for(int i=1;i<reserved.size();i++)
        {
            reserved[i]+=reserved[i-1];
        }
        return reserved;
    }
};