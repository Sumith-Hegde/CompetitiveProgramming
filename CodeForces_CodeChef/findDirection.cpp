#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int x=0;
        cin>>x;
        vector<string> a;
        a.push_back("NORTH");
        a.push_back("EAST");
        a.push_back("SOUTH");
        a.push_back("WEST");
        cout<<a[x%4]<<endl;
    }
}