#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string s="";
        cin>>s;
        bool alphabetical=true;
        int l=0;
        int r=s.size()-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[r]==i+97)
            {
                r--;
            }
            else if(s[l]==i+97)
            {
                l++;
            }
            else
            {
                alphabetical=false;
            }
        }
        if(alphabetical)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}