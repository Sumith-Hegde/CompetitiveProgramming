#include <bits/stdc++.h>
using namespace std;
#define max 1e9+7
bool check(long long n, int x)
{
    // While n is a positive number
    while (n > 0) {
 
        // Find the remainder
        int rem = n % x;
 
        // If rem is at least 2, then
        // representation is impossible
        if (rem >= 2) {
            return false;
        }
 
        // Divide the value of N by x
        n = n / x;
    }
 
    return true;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n=0,k=0;
        cin>>n>>k;
        long long i=0;
        while(k>=0)
        {
            i++;
            if(check(i,n))
            {
                k--;
            }
        }
        // int x=i%(int)max;
        cout<<(i-1)%(int)max<<endl;
    }
}