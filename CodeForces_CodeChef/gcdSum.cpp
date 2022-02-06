#include <bits/stdc++.h>
using namespace std;
long long sum(long long n)
{
    long long sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n=0;
        cin>>n;
        // if(n%3==0) cout<<n<<endl;
        // else if(n%2==0&&gcdSum2(n)) cout<<n<<endl;
        // else if((n+1)%3==0||((n+1)%2==0&&gcdSum2(n+1))) cout<<n+1<<endl;
        // else cout<<n+2<<endl;
        for(long long i=n;;i++)
        {
            if(__gcd(i,sum(i))>1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}