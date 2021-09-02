// buy and sell stocks 1 (leetcode)
// Link to the problem - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//greedy
// TimeComplexity = O(n)
// SpaceComplexity = O(1)
//whenever price is greater than bought store max profit
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