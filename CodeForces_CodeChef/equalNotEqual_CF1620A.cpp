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
        int notEqual=0;
        for(auto i:s)
        {
            if(i=='N')
            {
                notEqual++;
            }
        }
        if(notEqual==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}       