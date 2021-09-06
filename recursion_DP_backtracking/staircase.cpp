// Given an integer indicating number of steps in staircase
//and an array consisting of 3 numbers indicating the valid steps that can be climbed each time
//find number of ways to reach the top of staircase
// input-first line number of steps
//       second line 3 numbers seperated by space
// output - number of ways to reach stair top using those steps only
// example :- 
// input-
// 4
// 1 2 3
// output-
// 7
// explanation - 
// 1+1+1+1=4
// 2+1+1=4
// 1+1+2=4
// 1+2+1=4
// 2+2=4
// 3+1=4
// 1+3=4
#include<iostream>
using namespace std;
int findNoOfWays(int steps,int *valid)
{
    int ways[steps+1];
    ways[0]=1;
    for(int i=1;i<steps+1;i++)
    {
        int totalWays=0;
        for(int j=0;j<3;j++)
        {
            if(valid[j]<=steps&&i-valid[j]>=0)
            {
                totalWays+=ways[i-valid[j]];
            }
        }
        ways[i]=totalWays;
    }
    return ways[steps];
}
int main()
{
    int n;
    cin>>n;
    int x[3];
    for(int i=0;i<3;i++)
    {
        cin>>x[i];
    }
    cout<<findNoOfWays(n,x)<<endl;
}