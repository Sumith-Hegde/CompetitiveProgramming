#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
	cin>>t;
	while(t--){
        int n,x;
		cin>>n;
		int ans=0;
		for(int i=0;i<n;i++)
        {
            cin>>x;
            ans+=x;
        }
		cout<<max((int)(ans!=n),ans-n)<<endl;
	}
}