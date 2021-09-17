// link - https://codeforces.com/problemset/problem/1305/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int m=0;
    long long product=1;
    int easy=0;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> prev(m,0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(prev[a[i]%m]){
        easy = 1;
        }
        prev[a[i]%m] = 1;
    }
    if(easy)
    {
        cout<<"0"<<endl;
    }
    else
    {
        long long ans = 1;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                ans = (ans * ((abs(a[i]-a[j])%m)))%m;
                ans = ans % m;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
}