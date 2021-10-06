#include<bits/stdc++.h>
 
using namespace std;
 
int t,n,m;
string s;
 
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>s;
		s="0"+s+"0";
		string p=s;
		while(m--){
			for(int i=1;i<=n;i++){
				if(p[i-1]+p[i+1]==97) s[i]='1';
			}
			if(s==p) break;
			p=s;
		}
		for(int i=1;i<=n;i++) cout<<s[i];
		cout<<"\n";
	}
}
