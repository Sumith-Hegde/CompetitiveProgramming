#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        // int n=0,k=0;
        string s;
        map<char,int> m;
        // cin>>n;
        cin>>s;
        int count=0;
        // vector<int> a(n);
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]<2)
            {
                m[s[i]]++;
            }
        }
        for(auto i:m)
        {
            count+=i.second;
        }
        cout<<count/2<<endl;
    }
}