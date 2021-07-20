// The planet earth is under a threat from aliens and Avnegers team is busy fighting against them.
// The Inredible Hulk has to defeat an enemy who is n steps above the level where he is 
// standing(assume it 0th level).Hulk can only jump in powers of 2.
// What is the minimum possible jumps Hulk should make to reach the enemy?  
//Input - first line consists of number of test cases 
//first line each line is the level on which enemy is standing
//Output - each line is minimum no of jumps for Hulk to reach enemy
#include<iostream>
using namespace std;
int noOfSteps(int n)
{
    //Hulk has ability to take onlu jumps that are power of 2 and we need to minimize the number of jumps
    //so the answer should be number of set bits in binary representation of n(level of enemy)
    int a=0;

    //first method - O(log2(n))
    // while(n>0)
    // {
    //     // n and 1 gives 1 if last bit is 1 and 0 if last bit is 0
    //     a+=n&1;
    //     //shifting pushes out last bit
    //     //so when n becomes 0 we get count of set bits
    //     n=n>>1;
    // }

    //second method - inbuilt function that return number of set bits in binary of input number
    // return __builtin_popcount(n);

    //third method - O(log2(no of set bits))
    while(n>0)
    {
        //n and n-1 always decreases number of set bits by1
        //so when n becomes 0 we get count of set bits
        n=n&(n-1);
        a++;
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        t--;
        // cout<<"number of steps = "<<noOfSteps(n)<<endl;
        cout<<noOfSteps(n)<<endl;
    }
}