// best time to buy and sell stocks 2 (leetcode)
// Link to the problem - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0||prices.size()==1)
        {
            return 0;
        }
        int profit=0;
        bool bought=false;
        for(int i=0;i<prices.size()-1;i++)
        {
            if(!bought)
            {
                if(prices[i]<=prices[i+1])
                {
                    profit-=prices[i];
                    bought=true;
                }
            }
            else
            {
                if(prices[i]>=prices[i+1])
                {
                    profit+=prices[i];
                    bought=false;
                }
            }
            
        }
        if(bought)
        {
            profit+=prices[prices.size()-1];
        }
        return profit;
    }
};