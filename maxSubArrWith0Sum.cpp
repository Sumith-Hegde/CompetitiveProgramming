#include <bits/stdc++.h>
using namespace std;
int maxSubArr0(vector<int> nums)
{
    int len=0;
    int sum=0;
    int n=nums.size();
    map<int,int> m;
    //extending kadane's algorithm
    //if sum is already found then from that index till current index sum will be zero
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        if(sum==0)
        {
            len=i+1;
        }
        else
        {
            if(m.find(sum)!=m.end())
            {
                len=max(len,i-m[sum]);
            }
            else
            {
                m[sum]=i;
            }
        }
    }
    return len;
}