//given an array of integers  and a sum
//output yes or no based on whether any subset of the array add up to that sum
#include<iostream>
#include<cstring>
using namespace std;
int t[101][101];
//recursion + memoize
bool subsetSum(int *a,int n,int sum)
{
    //if sum is 0 it can be achieved by taking empty subset
    if(sum==0)
    {
        return 1;
    }
    //if array has no elements and sum is not zero that cant be achieved
    if(n==0)
    {
        return 0;
    }
    //if problem already solved return that value
    if(t[n][sum]!=-1)
    {
        return t[n][sum];
    }
    if(a[n-1]>sum)
    {
        return subsetSum(a,n-1,sum);
    }
    // other wise store the 'or' of 2 cases choosing the number and not choosing the number
    return t[n][sum]=subsetSum(a,n-1,sum-a[n])+subsetSum(a,n-1,sum);

}
//TOP DOWN
// int subsetSum(int *a,int n,int sum)
// {
//     for(int i=1;i<n+1;i++)
//     {
//         for (int j = 1; j < sum+1; j++)
//         {
//            if(a[i-1]<=j)
//            {
//                 t[i][j]=t[i-1][j-a[i-1]]+t[i-1][j];
//            }
//            else
//            {
//                t[i][j]=t[i-1][j];
//            }
//         }   
//     }
//     return t[n][sum];
// }
int main(int argc, char const *argv[])
{
    int *a;
    int n,sum;
    cin>>n;
    a=new int[n];
    memset(t,-1,sizeof(t));
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>sum;
    for(int i=0;i<sum+1;i++)
    {
        t[0][i]=0;
    }
    for(int i=0;i<n+1;i++)
    {
        t[i][0]=1;
    }
    if(subsetSum(a,n,sum))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
