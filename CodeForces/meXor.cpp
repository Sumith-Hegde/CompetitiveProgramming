// problem link - https://codeforces.com/contest/1567/problem/B
#include <bits/stdc++.h>
using namespace std;
//gives xor value till n
int xorTillN(int n)
{
    if(n%4==0)
    {
        return n;
    }
    if(n%4==1)
    {
        return 1;
    }
    if(n%4==2)
    {
        return n+1;
    }
    return 0;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a;
        cin>>b;
        //minimum of 'a' elements should be present beacuse mex value must be 'a' (0,1,2,.....(a-1))
        //so get xor value till 'a-1'
        int x=xorTillN(a-1);
        //if xor is equal to b then no need to add more elements return 'a'
        if(x==b)
        {
            cout<<a<<endl;
        }
        //if xor!=b and xor!=a then we just add the xor value to array so return 'a+1'
        else if((x^b)!=a)
        {
            cout<<a+1<<endl;
        }
        //if xor equal to 'a' (which should not be present in array)
        //we need to add 2 more elements whose xor will be equal to 'a' so return 'a+2'
        else
        {
            cout<<a+2<<endl;
        }
    }
}