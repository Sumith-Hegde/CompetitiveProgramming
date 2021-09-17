#include <bits/stdc++.h>
using namespace std;
int power(int a,int x)
{
    int k=a;
    if(x<=0) return 1;
    for(int i=1;i<x;i++)
    {
        a=a*k;
    }
    return a;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int n=8;
        int count=0;
        while(y>=x&&n>=0)
        {
            int a=power(10,n);
            while(y>=x*a)
            {
                y=y-x*a;
                count++;
            }
            n--;
        }
        cout<<count+y<<endl;       
    }
}