#include<bits/stdc++.h>
using namespace std;
int main() {
	long long t,n,x,k;
	cin>>k;
	while(k--){
		cin>>n>>x>>t;
		long long d=min(t/x,n-1);
		cout<<(n-d)*d+(d*(d-1))/2<<endl;
	}
}