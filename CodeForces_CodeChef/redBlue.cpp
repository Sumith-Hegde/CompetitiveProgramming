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
        s += 'R';
		int i=0;
		for(;i<s.size();i++)
        {
            if(s[i] != '?') break;
        }
		for(int j=i-1;j>=0;j--)
        {
            s[j]='R'-s[j+1]+'B';
        }
		for(;i<s.size();i++)
        {
            if(s[i]=='?') s[i]='R'-s[i-1]+'B';
        }
		cout<<s.substr(0,n)<<endl;
	}
}