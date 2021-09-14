#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		b=s.find("11");
		a=s.rfind("00");
		cout<<(b!=-1&&a!=-1&&b<a?"NO":"YES")<<'\n';
	}
}