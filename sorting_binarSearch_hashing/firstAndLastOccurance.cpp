// first and last occurance in an array(sorted) (leetcode)
// Link to the problem - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//modified binary search
//TimeComplexity = O(log(n))
//SpaceComplexity = O(log(n)) - auxillary space for recursion
    vector<int> search(vector<int> nums,int target,int l,int h,int side)
    {
        int m=(l+h)/2;
        vector<int> z(2,-1);
        if(l>=h)
        {
            vector<int> a(2,-1);
            //l==h => single element so first and last occurance will be same
            if(nums[h]==target)
            {
                a[0]=h;
                a[1]=h;
                return a;
            }
            return a;
        }
        if(nums[m]>target)
        {
            //if target is smaller than middle search only left side
            return search(nums,target,l,m,0);
        }
        if(nums[m]<target)
        {
            //if target is greater than middle search only right side
            return search(nums,target,m+1,h,1);
        }
        if(nums[m]==target)
        {
            //if middle element is equal to target then we need to search both sides inorder to find first and last occurance
            vector<int> left(search(nums,target,l,m,0));
            vector<int> right(search(nums,target,m+1,h,1));
            //after getting answer from both sides,return first and last occurance using those answers
            if(right[0]==-1||left[0]==-1)
            {
                right[0]=max(right[0],left[0]);
            }
            else
            {
                right[0]=min(right[0],left[0]);
            }
            right[1]=max(right[1],left[1]);
            return right;
        }
        return z;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        vector<int> z(2,-1);
        //same as function but initial call
        if(nums.size()==0)
        {
            return z;
        }
        int high=nums.size()-1;
        int mid=(low+high)/2;
        if(nums[mid]>target)
        {
            return search(nums,target,low,mid,0);
        }
        if(nums[mid]<target)
        {
            return search(nums,target,mid+1,high,1);
        }
        vector<int> left(search(nums,target,low,mid,0));
        vector<int> right(search(nums,target,mid+1,high,1));
        if(right[0]==-1||left[0]==-1)
        {
            right[0]=max(right[0],left[0]);
        }
        else
        {
            right[0]=min(right[0],left[0]);
        }
        right[1]=max(right[1],left[1]);
        return right;
    }
};

//improvement - 
//binary search for target and target-1
//both give same index then target not present
//else first occurance is index obtained by searching target-1 and last occurance is index obtained by searching target
class Solution
{
public:
    int bSearch(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size();
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int p2 = bSearch(nums, target);
        int p1 = bSearch(nums, target - 1);
        if (p1 == p2 )// That means element is not present hence return [-1,-1]
            return {-1, -1};
        return {p1, p2-1}; //element is present 
    }
};
