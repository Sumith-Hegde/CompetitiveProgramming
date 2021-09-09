// max points on a line (leetcode)
// Link to the problem - https://leetcode.com/problems/max-points-on-a-line/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //to find gcd to simplify slope 
    int gcd(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
        return gcd(b,a%b);
    }
    int maxPoints(vector<vector<int>>& points) {
        int count=0;
        for(int i=0;i<points.size();i++)
        {
            int duplicates=0;
            map<pair<int,int>,int> slopes;
            for(int j=i+1;j<points.size();j++)
            {
                //store slopes as pair(dy,dx) to avoid float errors
                int dy=points[i][1]-points[j][1];
                int dx=points[i][0]-points[j][0];
                //dy==0 and dx==0 implies same point is repeating so increment duplicates
                if(dy==0&&dx==0)
                {
                    duplicates++;
                }
                else
                {
                    //simplify the slope
                    int g=gcd(dy,dx);
                    dy=dy/g;
                    dx=dx/g;
                }
                // store count of slope in map
                slopes[{dy,dx}]++;
            }
            //store count of duplicates
            count=max(count,duplicates);
            //for every slope in map take the count of slope that occurs max times i.e with highest count
            for(auto i:slopes)
            {
                count=max(count,i.second+duplicates);

            }
        }
        //return count+1 because while doing above calculations we left out the point wrt which we were calculating the slope
        return count+1;
    }
};