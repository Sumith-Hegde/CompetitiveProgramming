#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char an=s[0];
        for(auto i:s)
        {
            if(i<an)
            {
                an=i;
            }
        }
        string a="";
        a+=an;
        string b="";
        bool taken=false;
        for(auto i:s)
        {
            if(!taken&&i==an)
            {
                taken=true;
                continue;
            }
            else
            {
                b+=i;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}