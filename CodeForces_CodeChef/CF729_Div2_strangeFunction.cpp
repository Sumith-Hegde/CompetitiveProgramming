#include <bits/stdc++.h>
using namespace std;
long long M=1000000007;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n=0;
        cin>>n;
        long long ans=0,already=0,k=2,c=2,num=0;
        while(n>0)
        {
            num+=(n-(n/c))-already;
            // ans=(ans+(((((n-n/c)-already)%M+M)%M)*k)%M)%M;
            ans+=((n-n/c-already)*k)%M;
            ans=ans%M;
            already=num;
            if(already==n)
            {
                break;
            }
            long long g=__gcd(c,k+1);
            long long mult=(k+1)/g;
            k++;
            while (mult==1)
            {
                k++;
                long long g=__gcd(c,k);
                mult=k/g;
            }
            c=c*mult;
        }
        cout<<(ans%M)<<endl;
    }
}