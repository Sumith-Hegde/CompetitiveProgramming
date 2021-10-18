// #include <bits/stdc++.h>
// using namespace std;
// bool prime(int n)
// {
//     bool p=true;
//     for(int i=2;i*i<n;i++)
//     {
//         if(n%i==0)
//         {
//             p=false;
//             break;
//         }
//     }
//     return p;
// }
// int main()
// {
//     int t=0;
//     cin>>t;
//     while(t--)
//     {
//         int n=0;
//         cin>>n;
//         vector<int> a(n);
//         int sum=0;
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             sum+=a[i];
//         }       
//         if(!prime(sum))
//         {
//             cout<<n<<endl;
//             for(int i=0;i<n;i++)
//             {
//                 cout<<i+1<<" ";
//             }
//             cout<<endl;
//             continue;
//         }
//         int x=0;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]%2!=0)
//             {
//                 x=i;
//                 break;
//             }
//         }
//         cout<<n-1<<endl;
//         for(int i=0;i<n;i++)
//         {
//             if(i!=x)
//             {
//                 cout<<i+1<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(ll a){
	if(a % 2 == 0) return false;
	for(int i=3; i*i<=a; i+=2) {
		if (a % i == 0) return false;
	}
	return true;
}
int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vector <ll> a(n);
		ll sum=0, l=-1;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			sum += a[i];
			if(a[i] % 2 != 0) l = i;
		}
		if(!isPrime(sum)){
			cout<<n<<'\n';
			for(int i=0; i<n; ++i) cout<<i+1<<' ';
		}else{
			cout<<n-1<<'\n';
			for(int i=0; i<n; ++i){
				if(i != l){
					cout<<i+1<<' ';
				}
			}
		}
		cout<<'\n';
	}
	return 0;
}
