#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n=0,k=0;
    cin>>n>>k;
    long long l=0,h=k-1;
    long long ans=0;
    if((n-1)>k*(k-1)/2)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(l<=h)
    {
        long long mid=l+(h-l)/2;
        long long pipes=((mid)*(2*k-1-mid))/2;
        if(pipes>=n-1)
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}