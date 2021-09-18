#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int nonZero=0;
        for(auto i:s)
        {
            sum+=i-'0';
            if(i!='0')
            {
                nonZero+=1;
            }
        }
        if(s[n-1]=='0')
        {
            cout<<sum+nonZero<<endl;
        } 
        else
        {
            cout<<sum+nonZero-1<<endl;
        }
    }
}