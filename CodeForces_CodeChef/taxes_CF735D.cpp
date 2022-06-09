#include <bits/stdc++.h>
using namespace std;
int prime(int x)
{
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(prime(n))
    {
        cout<<1;
    }
    else if(n%2==0||prime(n-2))
    {
        cout<<2;
    }
    else
    {
        cout<<3;
    }
    return 0;
}
