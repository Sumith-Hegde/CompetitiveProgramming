#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long M=1e9;
    M=M+7;
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n=0;
        int k=0;
        cin>>n>>k;
        long long ans=0;
        long long power=1;
        while(k)
        {
            ans=(long long)(ans+(k&1)*power)%M;
			k=k>>1;
			power=(long long)(power*n)%M;
        }
        cout<<ans<<endl;       
    }
}