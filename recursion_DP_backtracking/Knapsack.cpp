//Knapsack
//c - capacity of bag
//w - weight array of all objects
//a - profit of all objects
//n - number of objects
#include<iostream>
#include<cstring>
using namespace std;
// depends on constraints of n and w t[n+1][w+1]
int t[101][101];
int included[100];
//Recursion+Memoize
int knapSack(int *a,int n,int *w,int c)
{
    //if bag has 0 capacity or number of objects is 0 return 0
    if(c==0||n==0)
    {
        return 0;
    }
    //if already solved case return that value
    if(t[n][c]!=-1)
    {
        return t[n][c];
    }
    //if not solved
    else
    {
        //if weight of object is greater than capacity then dont include object
        if(w[n-1]>c)
        {
            return t[n][c]=knapSack(a,n-1,w,c);
        }
        //if profit on chosing an item is greater make that item included
        if(a[n-1]+knapSack(a,n-1,w,c-w[n-1])>knapSack(a,n-1,w,c))
        {
            included[n]=1;
        }
        //if weight is less than capacity return maximum profit among the 2 cases - considered object chosen,considered object not chosen
        return t[n][c]=max(a[n-1]+knapSack(a,n-1,w,c-w[n-1]),knapSack(a,n-1,w,c));
    }
}
//Top Down
// int knapSack(int *a,int n,int *w,int c)
// {
//     for(int i=0;i<n+1;i++)
//     {
//         for(int j=0;j<c+1;j++)
//         {
//             if(i==0||j==0)
//             {
//                 t[i][j]=0;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++)
//     {
//         for(int j=1;j<c+1;j++)
//         {
//            if(w[i-1]<=j)
//            {
//                if(a[i-1]+t[i-1][j-w[i-1]]>t[i-1][j])
//                {
//                    included[i]=1;
//                }
//                t[i][j]=max(a[i-1]+t[i-1][j-w[i-1]],t[i-1][j]);
//            }
//            else
//            {
//                t[i][j]=t[i-1][j];
//            }
//         }
//     }
//     return t[n][c];
    
// }
int main()
{
    memset(t,-1,sizeof(t));
    memset(included,-1,sizeof(included));
    int n=4;
    int a[4]={5,8,4,2};
    int w[4]={5,2,8,3};
    int c=10;
    int maxProfit=knapSack(a,n,w,c);
    cout<<maxProfit<<endl;
    cout<<"Items included:"<<endl;
    for(int i=0;i<n+1;i++)
    {
        if(included[i]==1)
        {
            cout<<i<<endl;
        }
    }
}