//if k==1 then only one number to xor therfore n is the answer
//else it is always possible to pick k numbers such that all max number of bits
//can be set to 1
//so find smallest power of 2 greater than n and subtract 1 to get the ans
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if(k==1)
    {
        cout<<n<<endl;
    }
    else
    {
        long long power2=1;
        while(power2<=n)
        {
            power2=power2<<1;
        }
        cout<<power2-1<<endl;
    }
    return 0;
}