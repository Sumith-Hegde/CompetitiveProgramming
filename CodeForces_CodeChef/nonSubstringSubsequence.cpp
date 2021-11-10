#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        int q=0;
        cin>>n>>q;
        string s="";
        cin>>s;
        while(q--)
        {
            int l,r;
            bool found=false;
            cin>>l>>r;
            //check if first character of [l....r] appears before l in the string
            //if yes then subsequence exists
            for(int i=0;i<l-1;i++)
            {
                if(s[i]==s[l-1])
                {
                    found=found||true;
                    break;
                }
            }
            //check if last character of [l....r] appears after r in the string
            //if yes then subsequence exists
            if(!found)
            {
                for(int i=r;i<n;i++)
                {
                    if(s[i]==s[r-1])
                    {
                        found=found||true;
                        break;
                    }
                }
            }
            if(found)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}