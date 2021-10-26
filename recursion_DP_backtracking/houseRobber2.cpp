// house robber 2 (leetcode)
// Link to the problem - link_to_the_problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//gives wrong answer
//     int n=0;
//     int find(vector<int> &nums,int i,int sum,bool first,vector<int> &dp)
//     {
//         if(i>=nums.size())
//         {
//             return dp[i]=max(dp[i],sum);
//         }
//         if(dp[i]!=-1)
//         {
//             if(i==n-1)
//             {
//                 if(first)
//                 {
//                     return dp[i]=max(dp[i],sum);
//                 }
//                 return dp[i]=max(dp[i],sum+nums[n-1]);
//             }
//             return dp[i];
//         }
//         if(i==0)
//         {
//             return dp[i]=max(find(nums,i+2,sum+nums[i],true,dp),max(find(nums,i+1,sum,false,dp),dp[i]));
//         }
//         if(i==n-1)
//         {
//             if(first)
//             {
//                 return dp[i]=max(dp[i],sum);
//             }
//             return dp[i]=max(dp[i],sum+nums[i]);
//         }
//         return dp[i]=max(find(nums,i+2,sum+nums[i],first,dp),max(find(nums,i+1,sum,first,dp),dp[i]));
        
//     }

// modify house robber 1 code 
    int robHelp(vector<int>& nums,int start,int end)
    {
        int n=end+1;
        if(n==1) return nums[start];
        if(n==2) return max(nums[start],nums[start+1]);
        vector<int> dp(n,-1);
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-2],dp[n-1]);
        for(int i=n-3;i>=start;i--)
        {
            dp[i]=max(dp[i+1],nums[i]+dp[i+2]);
        }
        return max(dp[0],dp[1]);
    }
    //since it is circular, use house robber 1 code with start and end
    //if start is 0(i.e robbing first house), do not include last element/house 
    //if start is 1(i.e not robbing first house),include last element/house 
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        if(nums.size()==2)
        {
            return max(nums[0],nums[1]);
        }
        // vector<int> dp(nums.size()+1,-1);
        // n=nums.size();
        // bool first=false;
        // int x=max(find(nums,0,0,first,dp),find(nums,1,0,first,dp));
        // return x;
        return max(robHelp(nums,0,nums.size()-2),robHelp(nums,1,nums.size()-1));
    }

};
