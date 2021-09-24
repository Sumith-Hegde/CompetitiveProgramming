//find median of values in a row wise sorted matrix of order n*m
//given n*m is always odd 
//each value of matrix <=10^9
#include <bits/stdc++.h>
using namespace std;
//find upper_bound of the target to get number of values less than or equal to it
int countLessEqual(vector<int> &v,int target)
{
    int l=0;
    int h=v.size();
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(v[m]<=target)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    return l;
}
int main()
{
    int n=0;
    int m=0;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int low=1;
    //take max value possible for each entry as high
    int high=1e9;
    //if there are these i.e 'half' many numbers less than or equal to any number then that canbe considered as median
    int half=((m*n)/2)+1;
    while(low<=high)
    {
        int mid=low + (high-low)/2;
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+=countLessEqual(a[i],mid);
            
        }
        if(count<=half)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
     cout<<low<<endl;
     return 0;
}