#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int a[s.size()+1]={0};
        a[1]=s[0]-'a'+1;
        for(int i=2;i<s.size()+1;i++)
        {
            a[i]=a[i-1]+s[i-1]-'a'+1;
        }
        cout<<endl;
        while(q--)
        {
            int l=0,r=0;
            cin>>l>>r;
            cout<<a[r]-a[l-1]<<endl;
        }       
}