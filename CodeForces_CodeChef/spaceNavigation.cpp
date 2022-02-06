#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int x,y;
        string s;
        cin>>x>>y>>s;
        int l=0,r=0,u=0,d=0;
        if(x==0&&y==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(auto i:s)
        {
            switch(i)
            {
                case 'L':l++;
                break;
                case 'R':r++;
                break;
                case 'U':u++;
                break;
                case 'D':d++;
                break;
            }
        } 
        if(-l<=x&&u>=y&&-d<=y&&r>=x)
        {
            cout<<"YES"<<endl;
        }   
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}