#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
    while(t--)
    {
        long long a=0,b=0,c=0;
		cin>>a>>b;
        c=abs(a-b);
		cout<<c<<' ';
		if(!c)cout<<"0\n";
		else cout<<min(a%c,c-a%c)<<'\n';
	}
	return 0;
}