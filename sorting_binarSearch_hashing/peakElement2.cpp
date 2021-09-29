// find a peak element 2 (leetcode)
// Link to the problem - https://leetcode.com/problems/find-a-peak-element-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//same as peak element 1 problem (using binary search)
    int findPeakRow(vector<int> &a)
    {
        int n=a.size();
        int l=0;
        int h=n-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(m>0&&m<n-1)
            {
                if(a[m+1]<a[m]&&a[m-1]<a[m])
                {
                    return m;
                }
                else
                {
                    if(a[m+1]>a[m-1])
                    {
                        l=m+1;
                    }
                    else
                        h=m-1;
                }
            }
            else if(m==0)
            {
                if(a[0]>a[1])
                {
                    return 0;
                }
                return 1;
            }
            else
            {
                if(a[n-1]>a[n-2])
                {
                    return n-1;
                }
                return n-2;
            }
        }
        return -1;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=0,m=0;
        vector<int> a(2);
        n=mat.size();
        m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            //in each row find peak element and check if it is overall peak element
            int peak=findPeakRow(mat[i]);
            if(i>0&&i<n-1)
            {
                if(mat[i][peak]>mat[i+1][peak]&&mat[i][peak]>mat[i-1][peak])
                {
                    a[0]=i;
                    a[1]=peak;
                    return a;
                }
            }
            else if(i==0)
            {
                if(mat[i][peak]>mat[i+1][peak])
                {
                    a[0]=i;
                    a[1]=peak;
                    return a;
                }
            }
            else
            {
                if(mat[n-1][peak]>mat[n-2][peak])
                {
                    a[0]=n-1;
                    a[1]=peak;
                    return a;
                }
            }
        }
        return a;
    }
};