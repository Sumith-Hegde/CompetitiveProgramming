// problem link - https://codeforces.com/contest/1567/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L'||s[i]=='R')
            {
                s1+=s[i];
            }
            else if(s[i]=='U')
            {
                s1+='D';
            }
            else if(s[i]=='D')
            {
                s1+='U';
            }
        }
        cout<<s1<<endl;
    }
}