// reverse pairs (leetcode)
// Link to the problem - https://leetcode.com/problems/reverse-pairs/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int merge(vector<int> &nums,int low,int mid,int high)
    {
        int count=0;
        int i=low;
        int j=mid+1;
        int k=low;
        for(i=low;i<=mid;i++)
        {
            //2ll to prevent overflow
            while(j<=high&&nums[i]>2ll*nums[j])
            {
                j++;
            }
            count+=j-mid-1;
        }
        vector<int> temp;
        i=low;
        j=mid+1;
        while(i<=mid&&j<=high)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=high)
        {
            temp.push_back(nums[j]);
            j++;
        }
        for(int i=0;i<temp.size();i++)
        {
            nums[k++]=temp[i];
        }
        return count;
    }
    int mergeSort(vector<int> &nums,int low,int high)
    {
        if(low>=high) return 0;
        int count=0;
        int mid=(low+high)/2;
        count+=mergeSort(nums,low,mid);
        count+=mergeSort(nums,mid+1,high);
        count+=merge(nums,low,mid,high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        return mergeSort(nums,low,high);
    }
};