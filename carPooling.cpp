// car pooling (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> passengers(1002,0);
        //scanline algo
        for(auto i: trips)
        {
            //slight difference is insteadof adding to passengers[i[1]-1] we add to passengers[i[1]]
            //because at the end point passengers will be dropped so no need to keep them in the sum
            //(alternate to above method could be to subtract from passengers[i[2]-1] along with passengers[i[2]] indicating the drop)
            passengers[i[1]]+=i[0];
            passengers[i[2]]-=i[0];
        }
        for(int i=1;i<passengers.size();i++)
        {
            passengers[i]+=passengers[i-1];
        }
        for(auto i: passengers)
        {
            if(i>capacity)
            {
                return false;
            }
        }
        return true;
    }
};