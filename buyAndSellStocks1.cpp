// buy and sell stocks 1 (leetcode)
// Link to the problem - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxProfit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<=mini)
            {
                mini=prices[i];
            }
            else
            {
                maxProfit=max(maxProfit,prices[i]-mini);
            }
        }
        return maxProfit;
    }
};