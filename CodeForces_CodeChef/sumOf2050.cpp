#include <bits/stdc++.h>
using namespace std;
//if not divisible by 2050 then not posiible
//else number will be of the form n=2050(1+1..+10+10..+100....)
//so n = 2050(sum of digits of n/2050)
//because 1+1...10+10+...+100..... will sum to n/2050 1+1.. result to unit digit
//10+10+... result to tens digit and so on..
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n=0;
        cin>>n;
        if(n%2050!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        long long x=n/2050;
        long long ans=0;
        while(x)
        {
            ans+=x%10;
            x=x/10;
        }
        cout<<ans<<endl;
    }
}