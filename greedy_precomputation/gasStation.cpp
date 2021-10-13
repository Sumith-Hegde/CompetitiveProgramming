// gasStation (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//recursive solution gives TLE
    // int size;
    // bool complete(int i,int n,vector<int> &gas,vector<int> &cost,int curGas)
    // {
    //     if(cost[i]>curGas)
    //     {
    //         return false;
    //     }
    //     if(n==0) return true;
    //     return complete((i+1)%size,n-1,gas,cost,curGas-cost[i]+gas[(i+1)%size]);
    // }
    // int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    //     int n=gas.size();
    //     size=n;
    //     for(int i=0;i<gas.size();i++)
    //     {
    //         if(complete(i,n,gas,cost,gas[i]))
    //         {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int gasNow=0;
        int k=0;
        for(int i=0;i<n;i++)
        {
            gasNow+=gas[i]-cost[i];
            if(gasNow<0)
            {
                k=i+1;
                gasNow=0;
            }
        }
        if(k>=n)
        {
            return -1;
        }
        gasNow=0;
        int i=k;
        int size=n;
        while(size--)
        {
            gasNow+=gas[i]-cost[i];
            if(gasNow<0)
            {
                return -1;
            }
            i=(i+1)%n;
        }
        return k;
    }
};