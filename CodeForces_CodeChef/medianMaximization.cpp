#include<iostream>
using namespace std;
long long t,n,s;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>s;
		cout<<s/(n-(n-1)/2)<<endl;
	} 
} 