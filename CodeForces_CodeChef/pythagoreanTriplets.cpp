// link - https://codeforces.com/problemset/problem/707/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //mathematical observations

    long long n=0;
    cin>>n;
    //method 1 -
    // if(n<=2)
    // {
    //     cout<<"-1"<<endl;
    // }
    // else if(n%2==1)
    // {
    //     long long k=(n*n)/2;
    //     cout<<(k+1)<<" "<<k<<endl;
    // }
    // else if(n%4==2)
    // {
    //     long long n1=n/2;
    //     long long k=(n1*n1)/2;
    //     cout<<2*(k+1)<<" "<<2*k<<endl;
    // }
    // else
    // {
    //     long long k=n/4;
    //     cout<<3*k<<" "<<5*k<<endl;
    // }

    //method 2 - 
    if(n<=2)
    {
        cout<<"-1"<<endl;
    }
    else if(n%2==1)
    {
        cout<<((n*n)+1)/2<<" "<<((n*n)-1)/2<<endl;
    }
    else
    {
        long long x=2;
        long long y=(n*n)/2;
        cout<<(x+y)/2<<" "<<(y-x)/2<<endl;
    }  
}