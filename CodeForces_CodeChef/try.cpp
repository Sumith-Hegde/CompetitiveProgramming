#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCollisions(string dir) {
        int r=0, l = 0, ans = 0;
        bool left = true, right = true;
        int i = 0, j = dir.length()-1;
        while(i < dir.length() and dir[i] == 'L')
        {
            i++;
        }
        while(j >= 0 and dir[j] == 'R')
        {
            j--;
        }
        while(i <= j)
        {
            if(dir[i] == 'R') 
            {
                left = false;
                r++;
            }
            else if(dir[i] == 'L')
            {
                l++;
            }
            else
            {
                right = false;
                left = false;
            } 
            if(!left or !right)
            {
                ans += r + l;
                r = 0;
                l = 0;
            }
            i++;    
        }
        return ans;
    }
};
