#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int recruits=0;
    int crimes=0;
    for(int i=0;i<n;i++)
    {
        int a=0;
        cin>>a;
        if(a>0)
        {
            recruits+=a;
        }
        else if(recruits>0)
        {
            recruits-=1;
        }
        else
        {
            crimes++;
        }
    }
    cout<<crimes<<endl;
}