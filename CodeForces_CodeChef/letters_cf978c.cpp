#include <bits/stdc++.h>
using namespace std;
long long n,m,x,t,i,a[200005];
int main()
{ 
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(int j=0;j<m;j++)
    {
        cin>>x;
        t=lower_bound(a,a+n+1,x)-a;
        cout<<t<<" "<<x-a[t-1]<<endl;
    }
    return 0;
}