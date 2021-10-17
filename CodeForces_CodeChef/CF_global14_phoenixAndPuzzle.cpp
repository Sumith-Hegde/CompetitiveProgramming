#include <bits/stdc++.h>
using namespace std;
bool check(double x)
{
    int a=(int)(sqrt(x));
    return a*a==x;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        if(check(n/2.0)||check(n/4.0))
        {
            cout<<"YES"<<endl;
            continue;
        }       
        cout<<"NO"<<endl;
    }
}